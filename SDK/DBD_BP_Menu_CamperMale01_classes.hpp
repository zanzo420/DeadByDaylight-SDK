#pragma once

// DeadByDaylight (2.0.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DBD_BP_Menu_CamperMale01_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Menu_CamperMale01.BP_Menu_CamperMale01_C
// 0x0000 (0x08B8 - 0x08B8)
class ABP_Menu_CamperMale01_C : public ABP_Menu_Base_Camper_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Menu_CamperMale01.BP_Menu_CamperMale01_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif