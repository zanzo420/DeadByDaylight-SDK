#pragma once

// DeadByDaylight (2.0.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DBD_BP_BaseItemVfx_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_BaseItemVfx.BP_BaseItemVfx_C.ClearParticleSystems
struct ABP_BaseItemVfx_C_ClearParticleSystems_Params
{
};

// Function BP_BaseItemVfx.BP_BaseItemVfx_C.SpawnEmitter
struct ABP_BaseItemVfx_C_SpawnEmitter_Params
{
	class UParticleSystem*                             EmitterTemplate;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      AttachToComponent;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       attachPointName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    Particle_System;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BaseItemVfx.BP_BaseItemVfx_C.UserConstructionScript
struct ABP_BaseItemVfx_C_UserConstructionScript_Params
{
};

// Function BP_BaseItemVfx.BP_BaseItemVfx_C.ReceiveBeginPlay
struct ABP_BaseItemVfx_C_ReceiveBeginPlay_Params
{
};

// Function BP_BaseItemVfx.BP_BaseItemVfx_C.OnDestroyed_Event
struct ABP_BaseItemVfx_C_OnDestroyed_Event_Params
{
	class AActor*                                      DestroyedActor;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BaseItemVfx.BP_BaseItemVfx_C.SetEmittersVisibility
struct ABP_BaseItemVfx_C_SetEmittersVisibility_Params
{
	bool*                                              Visible;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BaseItemVfx.BP_BaseItemVfx_C.ExecuteUbergraph_BP_BaseItemVfx
struct ABP_BaseItemVfx_C_ExecuteUbergraph_BP_BaseItemVfx_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
