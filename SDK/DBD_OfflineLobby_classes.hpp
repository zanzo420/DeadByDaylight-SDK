#pragma once

// DeadByDaylight (2.0.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DBD_OfflineLobby_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass OfflineLobby.OfflineLobby_C
// 0x0028 (0x0448 - 0x0420)
class AOfflineLobby_C : public AOfflineLobbyLevel
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0420(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               SubLevelsLoaded;                                          // 0x0428(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0429(0x0003) MISSED OFFSET
	float                                              SubLevelLoadStartTime;                                    // 0x042C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class FString                                      DefaultLobbyName;                                         // 0x0430(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class ADBDAudioUtils*                              AudioUtils_ExecuteUbergraph_OfflineLobby_RefProperty;     // 0x0440(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass OfflineLobby.OfflineLobby_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void ExecuteUbergraph_OfflineLobby(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
