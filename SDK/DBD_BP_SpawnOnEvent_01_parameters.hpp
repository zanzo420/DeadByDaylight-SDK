#pragma once

// DeadByDaylight (2.0.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DBD_BP_SpawnOnEvent_01_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_SpawnOnEvent_01.BP_SpawnOnEvent_01_C.SetSpawner
struct ABP_SpawnOnEvent_01_C_SetSpawner_Params
{
	class UActorSpawner*                               spawner;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SpawnOnEvent_01.BP_SpawnOnEvent_01_C.UserConstructionScript
struct ABP_SpawnOnEvent_01_C_UserConstructionScript_Params
{
};

// Function BP_SpawnOnEvent_01.BP_SpawnOnEvent_01_C.OnInitGeneratorDrivenActor
struct ABP_SpawnOnEvent_01_C_OnInitGeneratorDrivenActor_Params
{
	class AGenerator**                                 Generator;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SpawnOnEvent_01.BP_SpawnOnEvent_01_C.OnAsyncActorSpawned_Event_1
struct ABP_SpawnOnEvent_01_C_OnAsyncActorSpawned_Event_1_Params
{
	class AActor*                                      actorSpawned;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SpawnOnEvent_01.BP_SpawnOnEvent_01_C.OnActivateGeneratorDrivenActor
struct ABP_SpawnOnEvent_01_C_OnActivateGeneratorDrivenActor_Params
{
};

// Function BP_SpawnOnEvent_01.BP_SpawnOnEvent_01_C.ExecuteUbergraph_BP_SpawnOnEvent_01
struct ABP_SpawnOnEvent_01_C_ExecuteUbergraph_BP_SpawnOnEvent_01_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
