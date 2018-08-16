#pragma once

// DeadByDaylight (2.0.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DBD_BP_CamDebug_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_CamDebug.BP_CamDebug_C.UserConstructionScript
struct ABP_CamDebug_C_UserConstructionScript_Params
{
};

// Function BP_CamDebug.BP_CamDebug_C.ReceiveBeginPlay
struct ABP_CamDebug_C_ReceiveBeginPlay_Params
{
};

// Function BP_CamDebug.BP_CamDebug_C.ReceiveTick
struct ABP_CamDebug_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CamDebug.BP_CamDebug_C.ExecuteUbergraph_BP_CamDebug
struct ABP_CamDebug_C_ExecuteUbergraph_BP_CamDebug_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
