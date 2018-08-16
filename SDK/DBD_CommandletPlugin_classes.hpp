#pragma once

// DeadByDaylight (2.0.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DBD_CommandletPlugin_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class CommandletPlugin.CustomizationValidationCommandlet
// 0x0000 (0x0080 - 0x0080)
class UCustomizationValidationCommandlet : public UCommandlet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommandletPlugin.CustomizationValidationCommandlet");
		return ptr;
	}

};


// Class CommandletPlugin.DataTableToCsvCommandlet
// 0x0000 (0x0080 - 0x0080)
class UDataTableToCsvCommandlet : public UCommandlet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommandletPlugin.DataTableToCsvCommandlet");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
