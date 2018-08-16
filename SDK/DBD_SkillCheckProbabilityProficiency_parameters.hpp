#pragma once

// DeadByDaylight (2.0.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DBD_SkillCheckProbabilityProficiency_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function SkillCheckProbabilityProficiency.SkillCheckProbabilityProficiency_C.GetIsActive
struct USkillCheckProbabilityProficiency_C_GetIsActive_Params
{
	class UChargeableInteractionDefinition**           chargeableInteraction;                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SkillCheckProbabilityProficiency.SkillCheckProbabilityProficiency_C.GetType
struct USkillCheckProbabilityProficiency_C_GetType_Params
{
	float*                                             Value;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EStatusEffectType>                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SkillCheckProbabilityProficiency.SkillCheckProbabilityProficiency_C.GetValue
struct USkillCheckProbabilityProficiency_C_GetValue_Params
{
	class UChargeableInteractionDefinition**           chargeableInteraction;                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
