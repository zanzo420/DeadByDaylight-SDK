// DeadByDaylight (2.0.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DBD_BP_Random_Grass_Tile_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Random_Grass_Tile.BP_Random_Grass_Tile_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Random_Grass_Tile_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Random_Grass_Tile.BP_Random_Grass_Tile_C.UserConstructionScript");

	ABP_Random_Grass_Tile_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
