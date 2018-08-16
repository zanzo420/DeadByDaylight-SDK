#pragma once

// DeadByDaylight (2.0.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DBD_Basic.hpp"
#include "DBD_CoreUObject_classes.hpp"
#include "DBD_Engine_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum SubstanceCore.ESubstanceInputType
enum class ESubstanceInputType : uint8_t
{
	SIT_Float                      = 0,
	SIT_Float2                     = 1,
	SIT_Float3                     = 2,
	SIT_Float4                     = 3,
	SIT_Integer                    = 4,
	SIT_Image                      = 5,
	SIT_Unused                     = 6,
	SIT_Unused01                   = 7,
	SIT_Integer2                   = 8,
	SIT_Integer3                   = 9,
	SIT_Integer4                   = 10,
	SIT_MAX                        = 11
};


// Enum SubstanceCore.ESubstanceGenerationMode
enum class ESubstanceGenerationMode : uint8_t
{
	SGM_PlatformDefault            = 0,
	SGM_Baked                      = 1,
	SGM_OnLoadSync                 = 2,
	SGM_OnLoadSyncAndCache         = 3,
	SGM_OnLoadAsync                = 4,
	SGM_OnLoadAsyncAndCache        = 5,
	SGM_MAX                        = 6
};


// Enum SubstanceCore.ESubstanceEngineType
enum class ESubstanceEngineType : uint8_t
{
	SET_CPU                        = 0,
	SET_GPU                        = 1,
	SET_MAX                        = 2
};


// Enum SubstanceCore.ESubstanceTextureSize
enum class ESubstanceTextureSize : uint8_t
{
	ERL                            = 0,
	ERL01                          = 1,
	ERL02                          = 2,
	ERL03                          = 3,
	ERL04                          = 4,
	ERL05                          = 5,
	ERL06                          = 6,
	ERL07                          = 7,
	ERL_MAX                        = 8
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct SubstanceCore.SubstanceInputDesc
// 0x0018
struct FSubstanceInputDesc
{
	class FString                                      Name;                                                     // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	TEnumAsByte<ESubstanceInputType>                   Type;                                                     // 0x0010(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct SubstanceCore.SubstanceIntInputDesc
// 0x0030 (0x0048 - 0x0018)
struct FSubstanceIntInputDesc : public FSubstanceInputDesc
{
	TArray<int>                                        Min;                                                      // 0x0018(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	TArray<int>                                        Max;                                                      // 0x0028(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	TArray<int>                                        Default;                                                  // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
};

// ScriptStruct SubstanceCore.SubstanceInstanceDesc
// 0x0020
struct FSubstanceInstanceDesc
{
	class FString                                      Name;                                                     // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	TArray<struct FSubstanceInputDesc>                 Inputs;                                                   // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
};

// ScriptStruct SubstanceCore.SubstanceFloatInputDesc
// 0x0030 (0x0048 - 0x0018)
struct FSubstanceFloatInputDesc : public FSubstanceInputDesc
{
	TArray<float>                                      Min;                                                      // 0x0018(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	TArray<float>                                      Max;                                                      // 0x0028(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	TArray<float>                                      Default;                                                  // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
