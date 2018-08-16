#pragma once

// DeadByDaylight (2.0.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DBD_BP_DBDDesignTunables_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_DBDDesignTunables.BP_DBDDesignTunables_C
// 0x0008 (0x0070 - 0x0068)
class UBP_DBDDesignTunables_C : public UDBDDesignTunables
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0068(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_DBDDesignTunables.BP_DBDDesignTunables_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_DBDDesignTunables(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
