#pragma once

// DeadByDaylight (2.0.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DBD_BP_MainCursor_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass BP_MainCursor.BP_MainCursor_C
// 0x0008 (0x0240 - 0x0238)
class UBP_MainCursor_C : public UUserWidget
{
public:
	class UImage*                                      Image_80;                                                 // 0x0238(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_MainCursor.BP_MainCursor_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
