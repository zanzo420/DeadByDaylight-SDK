#pragma once

// DeadByDaylight (2.0.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DBD_SkillCheckProbabilityProficiency_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SkillCheckProbabilityProficiency.SkillCheckProbabilityProficiency_C
// 0x0000 (0x0040 - 0x0040)
class USkillCheckProbabilityProficiency_C : public UInteractionProficiency
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SkillCheckProbabilityProficiency.SkillCheckProbabilityProficiency_C");
		return ptr;
	}


	bool GetIsActive(class UChargeableInteractionDefinition** chargeableInteraction);
	TEnumAsByte<EStatusEffectType> GetType(float* Value);
	float GetValue(class UChargeableInteractionDefinition** chargeableInteraction);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif