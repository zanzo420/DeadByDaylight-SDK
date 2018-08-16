#pragma once

// DeadByDaylight (2.0.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DBD_BeUtil_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BeUtil.BeMaterialEditorHelper.ReloadTexture
struct UBeMaterialEditorHelper_ReloadTexture_Params
{
	class UTexture*                                    InTexture;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      InSourceName;                                             // (Parm, ZeroConstructor)
	class UTexture*                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BeUtil.BeMaterialEditorHelper.EditMaterialConstant
struct UBeMaterialEditorHelper_EditMaterialConstant_Params
{
	class UMaterialInstanceConstant*                   InMaterialInstance;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FBeMaterialScalar>                   InScalars;                                                // (Parm, ZeroConstructor)
	TArray<struct FBeMaterialVector>                   InVectors;                                                // (Parm, ZeroConstructor)
	TArray<struct FBeMaterialTexture>                  InTextures;                                               // (Parm, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
