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

// Enum GameplayTags.EGameplayTagQueryExprType
enum class EGameplayTagQueryExprType : uint8_t
{
	EGameplayTagQueryExprType__Undefined = 0,
	EGameplayTagQueryExprType__AnyTagsMatch = 1,
	EGameplayTagQueryExprType__AllTagsMatch = 2,
	EGameplayTagQueryExprType__NoTagsMatch = 3,
	EGameplayTagQueryExprType__AnyExprMatch = 4,
	EGameplayTagQueryExprType__AllExprMatch = 5,
	EGameplayTagQueryExprType__NoExprMatch = 6,
	EGameplayTagQueryExprType__EGameplayTagQueryExprType_MAX = 7
};


// Enum GameplayTags.EGameplayContainerMatchType
enum class EGameplayContainerMatchType : uint8_t
{
	EGameplayContainerMatchType__Any = 0,
	EGameplayContainerMatchType__All = 1,
	EGameplayContainerMatchType__EGameplayContainerMatchType_MAX = 2
};


// Enum GameplayTags.EGameplayTagMatchType
enum class EGameplayTagMatchType : uint8_t
{
	EGameplayTagMatchType__Explicit = 0,
	EGameplayTagMatchType__IncludeParentTags = 1,
	EGameplayTagMatchType__EGameplayTagMatchType_MAX = 2
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct GameplayTags.GameplayTag
// 0x0008
struct FGameplayTag
{
	struct FName                                       TagName;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
};

// ScriptStruct GameplayTags.GameplayTagQuery
// 0x0048
struct FGameplayTagQuery
{
	int                                                TokenStreamVersion;                                       // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<struct FGameplayTag>                        TagDictionary;                                            // 0x0008(0x0010) (ZeroConstructor)
	TArray<unsigned char>                              QueryTokenStream;                                         // 0x0018(0x0010) (ZeroConstructor)
	class FString                                      UserDescription;                                          // 0x0028(0x0010) (ZeroConstructor)
	class FString                                      AutoDescription;                                          // 0x0038(0x0010) (ZeroConstructor)
};

// ScriptStruct GameplayTags.GameplayTagContainer
// 0x0020
struct FGameplayTagContainer
{
	TArray<struct FGameplayTag>                        GameplayTags;                                             // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor)
	TArray<struct FName>                               Tags;                                                     // 0x0010(0x0010) (ZeroConstructor, Deprecated)
};

// ScriptStruct GameplayTags.GameplayTagNode
// 0x0070
struct FGameplayTagNode
{
	unsigned char                                      UnknownData00[0x70];                                      // 0x0000(0x0070) MISSED OFFSET
};

// ScriptStruct GameplayTags.GameplayTagTableRow
// 0x0038 (0x0040 - 0x0008)
struct FGameplayTagTableRow : public FTableRowBase
{
	class FString                                      Tag;                                                      // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FText                                       CategoryText;                                             // 0x0018(0x0018) (Edit, BlueprintVisible)
	class FString                                      DevComment;                                               // 0x0030(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
