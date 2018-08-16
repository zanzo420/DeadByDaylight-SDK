// DeadByDaylight (2.0.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DBD_AB_DK_Neckless01_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AB_DK_Neckless01.AB_DK_Neckless01_C.ExecuteUbergraph_AB_DK_Neckless01
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UAB_DK_Neckless01_C::ExecuteUbergraph_AB_DK_Neckless01(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AB_DK_Neckless01.AB_DK_Neckless01_C.ExecuteUbergraph_AB_DK_Neckless01");

	UAB_DK_Neckless01_C_ExecuteUbergraph_AB_DK_Neckless01_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
