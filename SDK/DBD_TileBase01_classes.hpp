#pragma once

// DeadByDaylight (2.0.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DBD_TileBase01_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TileBase01.TileBase01_C
// 0x0190 (0x0608 - 0x0478)
class ATileBase01_C : public ATile
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0478(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             GeneratorDrivenObjects;                                   // 0x0480(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Audio;                                                    // 0x0488(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             PullObjects;                                              // 0x0490(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UActorSpawner*                               BottomLeftSpawner;                                        // 0x0498(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UActorSpawner*                               TopLeftSpawner;                                           // 0x04A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UActorSpawner*                               TopRightSpawner;                                          // 0x04A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UActorSpawner*                               BottomRightSpawner;                                       // 0x04B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             QuadrantSpawners;                                         // 0x04B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBoxComponent*                               EdgeObjectBlocker;                                        // 0x04C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             VaultObjects;                                             // 0x04C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Crows;                                                    // 0x04D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             EdgeObjects;                                              // 0x04D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Lockers;                                                  // 0x04E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             HideGrass;                                                // 0x04E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Blockers;                                                 // 0x04F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Gameplay;                                                 // 0x04F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Lights;                                                   // 0x0500(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        BP_Effect_Mist04;                                         // 0x0508(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        BP_Effect_Mist03;                                         // 0x0510(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        BP_Effect_Mist02;                                         // 0x0518(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        BP_Effect_Mist01;                                         // 0x0520(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Mist__BP_Effect_Mist_;                                    // 0x0528(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             FX;                                                       // 0x0530(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Deco;                                                     // 0x0538(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UActorSpawner*                               SearchableSpawner;                                        // 0x0540(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UActorSpawner*                               SmallMeatLockerSpawner;                                   // 0x0548(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UActorSpawner*                               HatchSpawner;                                             // 0x0550(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UArrowComponent*                             Arrow6;                                                   // 0x0558(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTileSpawnPoint*                             InteractableSpawn01;                                      // 0x0560(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UArrowComponent*                             Arrow7;                                                   // 0x0568(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UHexSpawner*                                 HexSpawner01;                                             // 0x0570(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTileSpawnPoint*                             SurvivorItemSpawn01;                                      // 0x0578(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UArrowComponent*                             Arrow5;                                                   // 0x0580(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTileSpawnPoint*                             KillerItemSpawn01;                                        // 0x0588(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UArrowComponent*                             Arrow4;                                                   // 0x0590(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTileSpawnPoint*                             KillerSpawn01;                                            // 0x0598(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UArrowComponent*                             Arrow2;                                                   // 0x05A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTileSpawnPoint*                             SurvivorSpawn04;                                          // 0x05A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UArrowComponent*                             Arrow1;                                                   // 0x05B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTileSpawnPoint*                             SurvivorSpawn03;                                          // 0x05B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UArrowComponent*                             Arrow;                                                    // 0x05C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTileSpawnPoint*                             SurvivorSpawn02;                                          // 0x05C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UArrowComponent*                             Arrow3;                                                   // 0x05D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTileSpawnPoint*                             SurvivorSpawn01;                                          // 0x05D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             SpawnPoints;                                              // 0x05E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Root;                                                     // 0x05E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Initialized;                                              // 0x05F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x05F1(0x0003) MISSED OFFSET
	float                                              TotalWeight;                                              // 0x05F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SelectedWeight;                                           // 0x05F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x05FC(0x0004) MISSED OFFSET
	class UTileSpawnPoint*                             SelectedSpawnPoint;                                       // 0x0600(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TileBase01.TileBase01_C");
		return ptr;
	}


	void SelectSpawnPoint(TArray<class UTileSpawnPoint*>* Array);
	void SetupGeneratorDrivenElements(class AActor* GeneratorSpawnPoint, TArray<class UChildActorComponent*>* GeneratorDrivenElements);
	void UserConstructionScript();
	void ReceiveTick(float* DeltaSeconds);
	void OnLevelLoaded();
	void SetGeneratorDrivenObjects(class UTileSpawnPoint* SpawnPoint, class AActor* spawnedObject);
	void SetGeneratorDrivenScoreEvent(TArray<class AActor*> Generators);
	void ExecuteUbergraph_TileBase01(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
