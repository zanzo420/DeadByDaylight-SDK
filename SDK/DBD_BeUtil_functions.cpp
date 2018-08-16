// DeadByDaylight (2.0.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DBD_BeUtil_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BeUtil.BeMaterialEditorHelper.ReloadTexture
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UTexture*                InTexture                      (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  InSourceName                   (Parm, ZeroConstructor)
// class UTexture*                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTexture* UBeMaterialEditorHelper::STATIC_ReloadTexture(class UTexture* InTexture, const class FString& InSourceName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BeUtil.BeMaterialEditorHelper.ReloadTexture");

	UBeMaterialEditorHelper_ReloadTexture_Params params;
	params.InTexture = InTexture;
	params.InSourceName = InSourceName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BeUtil.BeMaterialEditorHelper.EditMaterialConstant
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMaterialInstanceConstant* InMaterialInstance             (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FBeMaterialScalar> InScalars                      (Parm, ZeroConstructor)
// TArray<struct FBeMaterialVector> InVectors                      (Parm, ZeroConstructor)
// TArray<struct FBeMaterialTexture> InTextures                     (Parm, ZeroConstructor)

void UBeMaterialEditorHelper::STATIC_EditMaterialConstant(class UMaterialInstanceConstant* InMaterialInstance, TArray<struct FBeMaterialScalar> InScalars, TArray<struct FBeMaterialVector> InVectors, TArray<struct FBeMaterialTexture> InTextures)
{
	static auto fn = UObject::FindObject<UFunction>("Function BeUtil.BeMaterialEditorHelper.EditMaterialConstant");

	UBeMaterialEditorHelper_EditMaterialConstant_Params params;
	params.InMaterialInstance = InMaterialInstance;
	params.InScalars = InScalars;
	params.InVectors = InVectors;
	params.InTextures = InTextures;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
