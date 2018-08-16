#pragma once

// DeadByDaylight (2.0.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DBD_BeUtil_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class BeUtil.BeMaterialEditorHelper
// 0x0000 (0x0028 - 0x0028)
class UBeMaterialEditorHelper : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BeUtil.BeMaterialEditorHelper");
		return ptr;
	}


	class UTexture* STATIC_ReloadTexture(class UTexture* InTexture, const class FString& InSourceName);
	void STATIC_EditMaterialConstant(class UMaterialInstanceConstant* InMaterialInstance, TArray<struct FBeMaterialScalar> InScalars, TArray<struct FBeMaterialVector> InVectors, TArray<struct FBeMaterialTexture> InTextures);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
