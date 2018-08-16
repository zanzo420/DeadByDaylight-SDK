#pragma once

// DeadByDaylight (2.0.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DBD_ItemEfficiencyProficiency_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ItemEfficiencyProficiency.ItemEfficiencyProficiency_C
// 0x0000 (0x0040 - 0x0040)
class UItemEfficiencyProficiency_C : public UInteractionProficiency
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ItemEfficiencyProficiency.ItemEfficiencyProficiency_C");
		return ptr;
	}


	float GetValue(class UChargeableInteractionDefinition** chargeableInteraction);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
