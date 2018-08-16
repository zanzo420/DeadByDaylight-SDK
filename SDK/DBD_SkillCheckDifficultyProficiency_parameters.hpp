#pragma once

// DeadByDaylight (2.0.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DBD_SkillCheckDifficultyProficiency_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function SkillCheckDifficultyProficiency.SkillCheckDifficultyProficiency_C.GetIsActive
struct USkillCheckDifficultyProficiency_C_GetIsActive_Params
{
	class UChargeableInteractionDefinition**           chargeableInteraction;                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SkillCheckDifficultyProficiency.SkillCheckDifficultyProficiency_C.GetType
struct USkillCheckDifficultyProficiency_C_GetType_Params
{
	float*                                             Value;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EStatusEffectType>                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SkillCheckDifficultyProficiency.SkillCheckDifficultyProficiency_C.GetValue
struct USkillCheckDifficultyProficiency_C_GetValue_Params
{
	class UChargeableInteractionDefinition**           chargeableInteraction;                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
