#pragma once

// DeadByDaylight (2.0.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DBD_BP_Effect_DO_Head01_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Effect_DO_Head01.BP_Effect_DO_Head01_C.UserConstructionScript
struct ABP_Effect_DO_Head01_C_UserConstructionScript_Params
{
};

// Function BP_Effect_DO_Head01.BP_Effect_DO_Head01_C.AttachToSkeletalMesh
struct ABP_Effect_DO_Head01_C_AttachToSkeletalMesh_Params
{
	class USkeletalMeshComponent**                     SkeletonPart;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Effect_DO_Head01.BP_Effect_DO_Head01_C.ExecuteUbergraph_BP_Effect_DO_Head01
struct ABP_Effect_DO_Head01_C_ExecuteUbergraph_BP_Effect_DO_Head01_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
