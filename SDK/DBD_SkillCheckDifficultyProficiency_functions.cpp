// DeadByDaylight (2.0.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DBD_SkillCheckDifficultyProficiency_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SkillCheckDifficultyProficiency.SkillCheckDifficultyProficiency_C.GetIsActive
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UChargeableInteractionDefinition** chargeableInteraction          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USkillCheckDifficultyProficiency_C::GetIsActive(class UChargeableInteractionDefinition** chargeableInteraction)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillCheckDifficultyProficiency.SkillCheckDifficultyProficiency_C.GetIsActive");

	USkillCheckDifficultyProficiency_C_GetIsActive_Params params;
	params.chargeableInteraction = chargeableInteraction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SkillCheckDifficultyProficiency.SkillCheckDifficultyProficiency_C.GetType
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float*                         Value                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EStatusEffectType> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<EStatusEffectType> USkillCheckDifficultyProficiency_C::GetType(float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillCheckDifficultyProficiency.SkillCheckDifficultyProficiency_C.GetType");

	USkillCheckDifficultyProficiency_C_GetType_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SkillCheckDifficultyProficiency.SkillCheckDifficultyProficiency_C.GetValue
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UChargeableInteractionDefinition** chargeableInteraction          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float USkillCheckDifficultyProficiency_C::GetValue(class UChargeableInteractionDefinition** chargeableInteraction)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillCheckDifficultyProficiency.SkillCheckDifficultyProficiency_C.GetValue");

	USkillCheckDifficultyProficiency_C_GetValue_Params params;
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
