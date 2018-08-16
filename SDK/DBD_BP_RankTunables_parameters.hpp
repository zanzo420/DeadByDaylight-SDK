#pragma once

// DeadByDaylight (2.0.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DBD_BP_RankTunables_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_RankTunables.BP_RankTunables_C.UserConstructionScript
struct UBP_RankTunables_C_UserConstructionScript_Params
{
};

// Function BP_RankTunables.BP_RankTunables_C.ReceiveBeginPlay
struct UBP_RankTunables_C_ReceiveBeginPlay_Params
{
};

// Function BP_RankTunables.BP_RankTunables_C.ReceiveTick
struct UBP_RankTunables_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_RankTunables.BP_RankTunables_C.ExecuteUbergraph_BP_RankTunables
struct UBP_RankTunables_C_ExecuteUbergraph_BP_RankTunables_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
