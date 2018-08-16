#pragma once

// DeadByDaylight (2.0.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DBD_BP_Menu_Slasher01_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Menu_Slasher01.BP_Menu_Slasher01_C
// 0x0008 (0x08B8 - 0x08B0)
class ABP_Menu_Slasher01_C : public ABP_Menu_BaseSlasher_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x08B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Menu_Slasher01.BP_Menu_Slasher01_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Menu_Slasher01(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
