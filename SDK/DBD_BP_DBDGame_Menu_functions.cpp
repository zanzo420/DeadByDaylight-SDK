// DeadByDaylight (2.0.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DBD_BP_DBDGame_Menu_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_DBDGame_Menu.BP_DBDGame_Menu_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_DBDGame_Menu_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DBDGame_Menu.BP_DBDGame_Menu_C.UserConstructionScript");

	ABP_DBDGame_Menu_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
