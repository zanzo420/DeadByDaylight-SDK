// DeadByDaylight (2.0.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DBD_BP_Effect_Killer07Weapon01_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Effect_Killer07Weapon01.BP_Effect_Killer07Weapon01_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Effect_Killer07Weapon01_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Effect_Killer07Weapon01.BP_Effect_Killer07Weapon01_C.UserConstructionScript");

	ABP_Effect_Killer07Weapon01_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Effect_Killer07Weapon01.BP_Effect_Killer07Weapon01_C.AttachToSkeletalMesh
// (Event, Public, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent** SkeletonPart                   (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Effect_Killer07Weapon01_C::AttachToSkeletalMesh(class USkeletalMeshComponent** SkeletonPart)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Effect_Killer07Weapon01.BP_Effect_Killer07Weapon01_C.AttachToSkeletalMesh");

	ABP_Effect_Killer07Weapon01_C_AttachToSkeletalMesh_Params params;
	params.SkeletonPart = SkeletonPart;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Effect_Killer07Weapon01.BP_Effect_Killer07Weapon01_C.OnAttackBegin
// (Event, Public, BlueprintEvent)

void ABP_Effect_Killer07Weapon01_C::OnAttackBegin()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Effect_Killer07Weapon01.BP_Effect_Killer07Weapon01_C.OnAttackBegin");

	ABP_Effect_Killer07Weapon01_C_OnAttackBegin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Effect_Killer07Weapon01.BP_Effect_Killer07Weapon01_C.OnAttackEnd
// (Event, Public, BlueprintEvent)

void ABP_Effect_Killer07Weapon01_C::OnAttackEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Effect_Killer07Weapon01.BP_Effect_Killer07Weapon01_C.OnAttackEnd");

	ABP_Effect_Killer07Weapon01_C_OnAttackEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Effect_Killer07Weapon01.BP_Effect_Killer07Weapon01_C.ExecuteUbergraph_BP_Effect_Killer07Weapon01
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Effect_Killer07Weapon01_C::ExecuteUbergraph_BP_Effect_Killer07Weapon01(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Effect_Killer07Weapon01.BP_Effect_Killer07Weapon01_C.ExecuteUbergraph_BP_Effect_Killer07Weapon01");

	ABP_Effect_Killer07Weapon01_C_ExecuteUbergraph_BP_Effect_Killer07Weapon01_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
