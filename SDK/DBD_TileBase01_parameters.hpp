#pragma once

// DeadByDaylight (2.0.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DBD_TileBase01_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function TileBase01.TileBase01_C.SelectSpawnPoint
struct ATileBase01_C_SelectSpawnPoint_Params
{
	TArray<class UTileSpawnPoint*>                     Array;                                                    // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function TileBase01.TileBase01_C.SetupGeneratorDrivenElements
struct ATileBase01_C_SetupGeneratorDrivenElements_Params
{
	class AActor*                                      GeneratorSpawnPoint;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UChildActorComponent*>                GeneratorDrivenElements;                                  // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function TileBase01.TileBase01_C.UserConstructionScript
struct ATileBase01_C_UserConstructionScript_Params
{
};

// Function TileBase01.TileBase01_C.ReceiveTick
struct ATileBase01_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TileBase01.TileBase01_C.OnLevelLoaded
struct ATileBase01_C_OnLevelLoaded_Params
{
};

// Function TileBase01.TileBase01_C.SetGeneratorDrivenObjects
struct ATileBase01_C_SetGeneratorDrivenObjects_Params
{
	class UTileSpawnPoint*                             SpawnPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      spawnedObject;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TileBase01.TileBase01_C.SetGeneratorDrivenScoreEvent
struct ATileBase01_C_SetGeneratorDrivenScoreEvent_Params
{
	TArray<class AActor*>                              Generators;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function TileBase01.TileBase01_C.ExecuteUbergraph_TileBase01
struct ATileBase01_C_ExecuteUbergraph_TileBase01_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
