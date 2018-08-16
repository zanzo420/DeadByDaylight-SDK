#pragma once

// DeadByDaylight (2.0.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DBD_BP_DBDRegionFinder_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_DBDRegionFinder.BP_DBDRegionFinder_C
// 0x0000 (0x00A0 - 0x00A0)
class UBP_DBDRegionFinder_C : public URegionFinder
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_DBDRegionFinder.BP_DBDRegionFinder_C");
		return ptr;
	}


	void ConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
