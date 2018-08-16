#pragma once

// DeadByDaylight (2.0.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DBD_BP_Effect_Mist_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Effect_Mist.BP_Effect_Mist_C.UserConstructionScript
struct ABP_Effect_Mist_C_UserConstructionScript_Params
{
};

// Function BP_Effect_Mist.BP_Effect_Mist_C.ReceiveTick
struct ABP_Effect_Mist_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Effect_Mist.BP_Effect_Mist_C.ExecuteUbergraph_BP_Effect_Mist
struct ABP_Effect_Mist_C_ExecuteUbergraph_BP_Effect_Mist_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
