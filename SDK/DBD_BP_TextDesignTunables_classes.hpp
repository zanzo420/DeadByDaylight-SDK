#pragma once

// DeadByDaylight (2.0.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DBD_BP_TextDesignTunables_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_TextDesignTunables.BP_TextDesignTunables_C
// 0x0008 (0x00B8 - 0x00B0)
class UBP_TextDesignTunables_C : public UDBDTextDesignTunables
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_TextDesignTunables.BP_TextDesignTunables_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_TextDesignTunables(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
