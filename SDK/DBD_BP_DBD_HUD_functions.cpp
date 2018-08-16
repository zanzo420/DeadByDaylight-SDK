// DeadByDaylight (2.0.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DBD_BP_DBD_HUD_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_DBD_HUD.BP_DBD_HUD_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_DBD_HUD_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DBD_HUD.BP_DBD_HUD_C.UserConstructionScript");

	ABP_DBD_HUD_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DBD_HUD.BP_DBD_HUD_C.ReceiveDrawHUD
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// int*                           SizeX                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           SizeY                          (Parm, ZeroConstructor, IsPlainOldData)

void ABP_DBD_HUD_C::ReceiveDrawHUD(int* SizeX, int* SizeY)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DBD_HUD.BP_DBD_HUD_C.ReceiveDrawHUD");

	ABP_DBD_HUD_C_ReceiveDrawHUD_Params params;
	params.SizeX = SizeX;
	params.SizeY = SizeY;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DBD_HUD.BP_DBD_HUD_C.ShowAnimHudBP
// (Event, Public, BlueprintEvent)

void ABP_DBD_HUD_C::ShowAnimHudBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DBD_HUD.BP_DBD_HUD_C.ShowAnimHudBP");

	ABP_DBD_HUD_C_ShowAnimHudBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DBD_HUD.BP_DBD_HUD_C.ExecuteUbergraph_BP_DBD_HUD
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_DBD_HUD_C::ExecuteUbergraph_BP_DBD_HUD(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DBD_HUD.BP_DBD_HUD_C.ExecuteUbergraph_BP_DBD_HUD");

	ABP_DBD_HUD_C_ExecuteUbergraph_BP_DBD_HUD_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
