// DeadByDaylight (2.0.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DBD_ItemEfficiencyProficiency_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ItemEfficiencyProficiency.ItemEfficiencyProficiency_C.GetValue
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UChargeableInteractionDefinition** chargeableInteraction          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UItemEfficiencyProficiency_C::GetValue(class UChargeableInteractionDefinition** chargeableInteraction)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemEfficiencyProficiency.ItemEfficiencyProficiency_C.GetValue");

	UItemEfficiencyProficiency_C_GetValue_Params params;
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
