#pragma once

// DeadByDaylight (2.0.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DBD_BP_DBD_HUD_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_DBD_HUD.BP_DBD_HUD_C.UserConstructionScript
struct ABP_DBD_HUD_C_UserConstructionScript_Params
{
};

// Function BP_DBD_HUD.BP_DBD_HUD_C.ReceiveDrawHUD
struct ABP_DBD_HUD_C_ReceiveDrawHUD_Params
{
	int*                                               SizeX;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               SizeY;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DBD_HUD.BP_DBD_HUD_C.ShowAnimHudBP
struct ABP_DBD_HUD_C_ShowAnimHudBP_Params
{
};

// Function BP_DBD_HUD.BP_DBD_HUD_C.ExecuteUbergraph_BP_DBD_HUD
struct ABP_DBD_HUD_C_ExecuteUbergraph_BP_DBD_HUD_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
