#pragma once

// DeadByDaylight (2.0.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DBD_Basic.hpp"
#include "DBD_CoreUObject_classes.hpp"
#include "DBD_InputCore_classes.hpp"
#include "DBD_Engine_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum ScaleformUI.EASType
enum class EASType : uint8_t
{
	EASType__Undefined             = 0,
	EASType__Null                  = 1,
	EASType__Boolean               = 2,
	EASType__Int                   = 3,
	EASType__Number                = 4,
	EASType__String                = 5,
	EASType__StringW               = 6,
	EASType__Object                = 7,
	EASType__DisplayObject         = 8,
	EASType__EASType_MAX           = 9
};


// Enum ScaleformUI.GFxHitTestType
enum class EGFxHitTestType : uint8_t
{
	GFxHitTestType__HitTest_Bounds = 0,
	GFxHitTestType__HitTest_Shapes = 1,
	GFxHitTestType__HitTest_ButtonEvents = 2,
	GFxHitTestType__HitTest_ShapesNoInvisible = 3,
	GFxHitTestType__HitTest_MAX    = 4
};


// Enum ScaleformUI.EGFxTimingMode
enum class EGFxTimingMode : uint8_t
{
	EGFxTimingMode__Game           = 0,
	EGFxTimingMode__Real           = 1,
	EGFxTimingMode__EGFxTimingMode_MAX = 2
};


// Enum ScaleformUI.EGFxRenderTextureMode
enum class EGFxRenderTextureMode : uint8_t
{
	EGFxRenderTextureMode__Opaque  = 0,
	EGFxRenderTextureMode__Alpha   = 1,
	EGFxRenderTextureMode__AlphaComposite = 2,
	EGFxRenderTextureMode__EGFxRenderTextureMode_MAX = 3
};


// Enum ScaleformUI.EGFxScaleMode
enum class EGFxScaleMode : uint8_t
{
	EGFxScaleMode__NoScale         = 0,
	EGFxScaleMode__ShowAll         = 1,
	EGFxScaleMode__ExactFit        = 2,
	EGFxScaleMode__NoBorder        = 3,
	EGFxScaleMode__EGFxScaleMode_MAX = 4
};


// Enum ScaleformUI.EGFxAlign
enum class EGFxAlign : uint8_t
{
	EGFxAlign__Center              = 0,
	EGFxAlign__TopCenter           = 1,
	EGFxAlign__BottomCenter        = 2,
	EGFxAlign__CenterLeft          = 3,
	EGFxAlign__CenterRight         = 4,
	EGFxAlign__TopLeft             = 5,
	EGFxAlign__TopRight            = 6,
	EGFxAlign__BottomLeft          = 7,
	EGFxAlign__BottomRight         = 8,
	EGFxAlign__EGFxAlign_MAX       = 9
};


// Enum ScaleformUI.FlashTextureRescale
enum class EFlashTextureRescale : uint8_t
{
	FlashTextureScale_High         = 0,
	FlashTextureScale_Low          = 1,
	FlashTextureScale_NextLow      = 2,
	FlashTextureScale_Mult4        = 3,
	FlashTextureScale_None         = 4,
	FlashTextureScale_MAX          = 5
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct ScaleformUI.GCReference
// 0x0010
struct FGCReference
{
	class UObject*                                     Object;                                                   // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                RefCount;                                                 // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct ScaleformUI.ASValue
// 0x0038
struct FASValue
{
	TEnumAsByte<EASType>                               ASType;                                                   // 0x0000(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ASBoolean;                                                // 0x0001(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	int                                                ASInt;                                                    // 0x0004(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ASNumber;                                                 // 0x0008(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class FString                                      ASString;                                                 // 0x0010(0x0010) (BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData02[0x10];                                      // 0x0020(0x0010) MISSED OFFSET
	class UGFxObject*                                  ASObject;                                                 // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ScaleformUI.ASDisplayInfo
// 0x002C
struct FASDisplayInfo
{
	struct FVector                                     Position;                                                 // 0x0000(0x000C) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Scale;                                                    // 0x000C(0x000C) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Rotation;                                                 // 0x0018(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              XRotation;                                                // 0x001C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              YRotation;                                                // 0x0020(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Alpha;                                                    // 0x0024(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Visible;                                                  // 0x0028(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
};

// ScriptStruct ScaleformUI.ASColorTransform
// 0x0020
struct FASColorTransform
{
	struct FLinearColor                                Multiply;                                                 // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Add;                                                      // 0x0010(0x0010) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ScaleformUI.ExternalTexture
// 0x0018
struct FExternalTexture
{
	class FString                                      Resource;                                                 // 0x0000(0x0010) (ZeroConstructor)
	class UTexture*                                    Texture;                                                  // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ScaleformUI.GFxWidgetBinding
// 0x0010
struct FGFxWidgetBinding
{
	struct FName                                       WidgetName;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class UClass*                                      WidgetClass;                                              // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ScaleformUI.ASPerspectiveTransform
// 0x0040
struct FASPerspectiveTransform
{
	struct FVector4                                    Row0;                                                     // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector4                                    Row1;                                                     // 0x0010(0x0010) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector4                                    Row2;                                                     // 0x0020(0x0010) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector4                                    Row3;                                                     // 0x0030(0x0010) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
