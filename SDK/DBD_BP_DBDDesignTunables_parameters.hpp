#pragma once

// DeadByDaylight (2.0.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DBD_BP_DBDDesignTunables_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_DBDDesignTunables.BP_DBDDesignTunables_C.UserConstructionScript
struct UBP_DBDDesignTunables_C_UserConstructionScript_Params
{
};

// Function BP_DBDDesignTunables.BP_DBDDesignTunables_C.ReceiveBeginPlay
struct UBP_DBDDesignTunables_C_ReceiveBeginPlay_Params
{
};

// Function BP_DBDDesignTunables.BP_DBDDesignTunables_C.ReceiveTick
struct UBP_DBDDesignTunables_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DBDDesignTunables.BP_DBDDesignTunables_C.ExecuteUbergraph_BP_DBDDesignTunables
struct UBP_DBDDesignTunables_C_ExecuteUbergraph_BP_DBDDesignTunables_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
