// DeadByDaylight (2.0.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DBD_BP_DBDGame_OfflineLobby_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_DBDGame_OfflineLobby.BP_DBDGame_OfflineLobby_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_DBDGame_OfflineLobby_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DBDGame_OfflineLobby.BP_DBDGame_OfflineLobby_C.UserConstructionScript");

	ABP_DBDGame_OfflineLobby_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
