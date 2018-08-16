// DeadByDaylight (2.0.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DBD_BP_Effect_HalloweenSlasher03_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Effect_HalloweenSlasher03.BP_Effect_HalloweenSlasher03_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Effect_HalloweenSlasher03_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Effect_HalloweenSlasher03.BP_Effect_HalloweenSlasher03_C.UserConstructionScript");

	ABP_Effect_HalloweenSlasher03_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Effect_HalloweenSlasher03.BP_Effect_HalloweenSlasher03_C.AttachToSkeletalMesh
// (Event, Public, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent** SkeletonPart                   (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Effect_HalloweenSlasher03_C::AttachToSkeletalMesh(class USkeletalMeshComponent** SkeletonPart)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Effect_HalloweenSlasher03.BP_Effect_HalloweenSlasher03_C.AttachToSkeletalMesh");

	ABP_Effect_HalloweenSlasher03_C_AttachToSkeletalMesh_Params params;
	params.SkeletonPart = SkeletonPart;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Effect_HalloweenSlasher03.BP_Effect_HalloweenSlasher03_C.ExecuteUbergraph_BP_Effect_HalloweenSlasher03
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Effect_HalloweenSlasher03_C::ExecuteUbergraph_BP_Effect_HalloweenSlasher03(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Effect_HalloweenSlasher03.BP_Effect_HalloweenSlasher03_C.ExecuteUbergraph_BP_Effect_HalloweenSlasher03");

	ABP_Effect_HalloweenSlasher03_C_ExecuteUbergraph_BP_Effect_HalloweenSlasher03_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
