#pragma once

// DeadByDaylight (2.0.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DBD_Basic.hpp"
#include "DBD_Engine_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct GameLiveStreaming.BlueprintLiveStreamInfo
// 0x0030
struct FBlueprintLiveStreamInfo
{
	class FString                                      GameName;                                                 // 0x0000(0x0010) (Edit, ZeroConstructor)
	class FString                                      StreamName;                                               // 0x0010(0x0010) (Edit, ZeroConstructor)
	class FString                                      URL;                                                      // 0x0020(0x0010) (Edit, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
