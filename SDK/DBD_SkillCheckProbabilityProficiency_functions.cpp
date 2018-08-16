// DeadByDaylight (2.0.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DBD_SkillCheckProbabilityProficiency_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SkillCheckProbabilityProficiency.SkillCheckProbabilityProficiency_C.GetIsActive
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UChargeableInteractionDefinition** chargeableInteraction          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USkillCheckProbabilityProficiency_C::GetIsActive(class UChargeableInteractionDefinition** chargeableInteraction)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillCheckProbabilityProficiency.SkillCheckProbabilityProficiency_C.GetIsActive");

	USkillCheckProbabilityProficiency_C_GetIsActive_Params params;
	params.chargeableInteraction = chargeableInteraction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SkillCheckProbabilityProficiency.SkillCheckProbabilityProficiency_C.GetType
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float*                         Value                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EStatusEffectType> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<EStatusEffectType> USkillCheckProbabilityProficiency_C::GetType(float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillCheckProbabilityProficiency.SkillCheckProbabilityProficiency_C.GetType");

	USkillCheckProbabilityProficiency_C_GetType_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SkillCheckProbabilityProficiency.SkillCheckProbabilityProficiency_C.GetValue
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UChargeableInteractionDefinition** chargeableInteraction          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float USkillCheckProbabilityProficiency_C::GetValue(class UChargeableInteractionDefinition** chargeableInteraction)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillCheckProbabilityProficiency.SkillCheckProbabilityProficiency_C.GetValue");

	USkillCheckProbabilityProficiency_C_GetValue_Params params;
	params.chargeableInteraction = chargeableInteraction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
