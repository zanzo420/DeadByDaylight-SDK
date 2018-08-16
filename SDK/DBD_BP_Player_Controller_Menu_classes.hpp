#pragma once

// DeadByDaylight (2.0.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DBD_BP_Player_Controller_Menu_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Player_Controller_Menu.BP_Player_Controller_Menu_C
// 0x0000 (0x08D0 - 0x08D0)
class ABP_Player_Controller_Menu_C : public ADBDPlayerController_Menu
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Player_Controller_Menu.BP_Player_Controller_Menu_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
