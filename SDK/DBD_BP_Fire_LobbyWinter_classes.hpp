#pragma once

// DeadByDaylight (2.0.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DBD_BP_Fire_LobbyWinter_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Fire_LobbyWinter.BP_Fire_LobbyWinter_C
// 0x001C (0x039C - 0x0380)
class ABP_Fire_LobbyWinter_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0380(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*                    P_Fire;                                                   // 0x0388(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TotalTime;                                                // 0x0398(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Fire_LobbyWinter.BP_Fire_LobbyWinter_C");
		return ptr;
	}


	void Fire_Smoke(class UParticleSystemComponent* FX, bool Smoke);
	void Fire_Normal(class UParticleSystemComponent* FX, bool Normal);
	void Spawn(class UParticleSystemComponent* Spawn, float Smoke1, float Smoke2, float F_Smoke2, float Fire0, float F_Fire0, float Flames1, float Flames2, float Flames3, float F_Flames1, float F_Flames2, float F_Flames3);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveTick(float* DeltaSeconds);
	void ExecuteUbergraph_BP_Fire_LobbyWinter(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
