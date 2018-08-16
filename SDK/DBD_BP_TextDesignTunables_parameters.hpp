#pragma once

// DeadByDaylight (2.0.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DBD_BP_TextDesignTunables_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_TextDesignTunables.BP_TextDesignTunables_C.UserConstructionScript
struct UBP_TextDesignTunables_C_UserConstructionScript_Params
{
};

// Function BP_TextDesignTunables.BP_TextDesignTunables_C.ReceiveBeginPlay
struct UBP_TextDesignTunables_C_ReceiveBeginPlay_Params
{
};

// Function BP_TextDesignTunables.BP_TextDesignTunables_C.ReceiveTick
struct UBP_TextDesignTunables_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TextDesignTunables.BP_TextDesignTunables_C.ExecuteUbergraph_BP_TextDesignTunables
struct UBP_TextDesignTunables_C_ExecuteUbergraph_BP_TextDesignTunables_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
