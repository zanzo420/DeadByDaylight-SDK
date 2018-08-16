#pragma once

// DeadByDaylight (2.0.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DBD_BP_Random_Foliage_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Random_Foliage.BP_Random_Foliage_C.IsGenerated
struct ABP_Random_Foliage_C_IsGenerated_Params
{
	bool                                               Generated;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Random_Foliage.BP_Random_Foliage_C.GenerateFoliage
struct ABP_Random_Foliage_C_GenerateFoliage_Params
{
};

// Function BP_Random_Foliage.BP_Random_Foliage_C.ComputeTotalProbability
struct ABP_Random_Foliage_C_ComputeTotalProbability_Params
{
};

// Function BP_Random_Foliage.BP_Random_Foliage_C.CreateBoundingBoxes
struct ABP_Random_Foliage_C_CreateBoundingBoxes_Params
{
};

// Function BP_Random_Foliage.BP_Random_Foliage_C.CreateStaticInstances
struct ABP_Random_Foliage_C_CreateStaticInstances_Params
{
};

// Function BP_Random_Foliage.BP_Random_Foliage_C.UserConstructionScript
struct ABP_Random_Foliage_C_UserConstructionScript_Params
{
};

// Function BP_Random_Foliage.BP_Random_Foliage_C.ReceiveTick
struct ABP_Random_Foliage_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Random_Foliage.BP_Random_Foliage_C.ExecuteUbergraph_BP_Random_Foliage
struct ABP_Random_Foliage_C_ExecuteUbergraph_BP_Random_Foliage_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
