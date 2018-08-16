#pragma once

// DeadByDaylight (2.0.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DBD_BonusSkillCheckZoneSizeProficiency_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BonusSkillCheckZoneSizeProficiency.BonusSkillCheckZoneSizeProficiency_C
// 0x0000 (0x0040 - 0x0040)
class UBonusSkillCheckZoneSizeProficiency_C : public UInteractionProficiency
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BonusSkillCheckZoneSizeProficiency.BonusSkillCheckZoneSizeProficiency_C");
		return ptr;
	}


	float GetValue(class UChargeableInteractionDefinition** chargeableInteraction);
	bool GetIsActive(class UChargeableInteractionDefinition** chargeableInteraction);
	TEnumAsByte<EStatusEffectType> GetType(float* Value);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
