#pragma once

// DeadByDaylight (2.0.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DBD_Basic.hpp"
#include "DBD_Engine_classes.hpp"
#include "DBD_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct BeUtil.BeMaterialScalar
// 0x0010
struct FBeMaterialScalar
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Scalar;                                                   // 0x0008(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct BeUtil.BeMaterialVector
// 0x0018
struct FBeMaterialVector
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Vector;                                                   // 0x0008(0x0010) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct BeUtil.BeMaterialTexture
// 0x0010
struct FBeMaterialTexture
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTexture*                                    Texture;                                                  // 0x0008(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
