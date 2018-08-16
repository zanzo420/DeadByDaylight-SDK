#pragma once

// DeadByDaylight (2.0.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DBD_BP_Menu_Slasher03_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Menu_Slasher03.BP_Menu_Slasher03_C
// 0x0010 (0x08C0 - 0x08B0)
class ABP_Menu_Slasher03_C : public ABP_Menu_BaseSlasher_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x08B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USkeletalMeshComponent*                      ChainSaw01_REF;                                           // 0x08B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Menu_Slasher03.BP_Menu_Slasher03_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Menu_Slasher03(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
