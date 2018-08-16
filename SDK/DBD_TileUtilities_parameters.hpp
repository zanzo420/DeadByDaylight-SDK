#pragma once

// DeadByDaylight (2.0.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DBD_TileUtilities_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function TileUtilities.TileUtilities_C.SelectSpawners
struct UTileUtilities_C_SelectSpawners_Params
{
	TArray<class UActorSpawner*>                       Spawners;                                                 // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                MinCount;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                MaxCount;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TileUtilities.TileUtilities_C.SelectSpawner
struct UTileUtilities_C_SelectSpawner_Params
{
	TArray<class UActorSpawner*>                       Spawners;                                                 // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TileUtilities.TileUtilities_C.SetSpawnerOnGeneratorDrivenElem
struct UTileUtilities_C_SetSpawnerOnGeneratorDrivenElem_Params
{
	class UChildActorComponent*                        GeneratorDriven;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class UActorSpawner*                               ActorSpawner;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TileUtilities.TileUtilities_C.SetupGeneratorDrivenElements
struct UTileUtilities_C_SetupGeneratorDrivenElements_Params
{
	TArray<class UChildActorComponent*>                SpawnPoints;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	class AActor*                                      GeneratorSpawnPoint;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TileUtilities.TileUtilities_C.SelectSpawnPoint
struct UTileUtilities_C_SelectSpawnPoint_Params
{
	TArray<class UTileSpawnPoint*>                     SpawnPoints;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
