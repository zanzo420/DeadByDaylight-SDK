#pragma once

// DeadByDaylight (2.0.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DBD_BP_Fire_LobbyWinter_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Fire_LobbyWinter.BP_Fire_LobbyWinter_C.Fire_Smoke
struct ABP_Fire_LobbyWinter_C_Fire_Smoke_Params
{
	class UParticleSystemComponent*                    FX;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Smoke;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Fire_LobbyWinter.BP_Fire_LobbyWinter_C.Fire_Normal
struct ABP_Fire_LobbyWinter_C_Fire_Normal_Params
{
	class UParticleSystemComponent*                    FX;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Normal;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Fire_LobbyWinter.BP_Fire_LobbyWinter_C.Spawn
struct ABP_Fire_LobbyWinter_C_Spawn_Params
{
	class UParticleSystemComponent*                    Spawn;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Smoke1;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Smoke2;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              F_Smoke2;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Fire0;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              F_Fire0;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Flames1;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Flames2;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Flames3;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              F_Flames1;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              F_Flames2;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              F_Flames3;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Fire_LobbyWinter.BP_Fire_LobbyWinter_C.UserConstructionScript
struct ABP_Fire_LobbyWinter_C_UserConstructionScript_Params
{
};

// Function BP_Fire_LobbyWinter.BP_Fire_LobbyWinter_C.ReceiveBeginPlay
struct ABP_Fire_LobbyWinter_C_ReceiveBeginPlay_Params
{
};

// Function BP_Fire_LobbyWinter.BP_Fire_LobbyWinter_C.ReceiveTick
struct ABP_Fire_LobbyWinter_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Fire_LobbyWinter.BP_Fire_LobbyWinter_C.ExecuteUbergraph_BP_Fire_LobbyWinter
struct ABP_Fire_LobbyWinter_C_ExecuteUbergraph_BP_Fire_LobbyWinter_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
