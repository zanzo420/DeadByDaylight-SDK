// DeadByDaylight (2.0.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DBD_BP_DBDRegionFinder_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_DBDRegionFinder.BP_DBDRegionFinder_C.ConstructionScript
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_DBDRegionFinder_C::ConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DBDRegionFinder.BP_DBDRegionFinder_C.ConstructionScript");

	UBP_DBDRegionFinder_C_ConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
