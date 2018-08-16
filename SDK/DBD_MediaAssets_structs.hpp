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

// Enum MediaAssets.EMediaPlayerTrack
enum class EMediaPlayerTrack : uint8_t
{
	EMediaPlayerTrack__Audio       = 0,
	EMediaPlayerTrack__Binary      = 1,
	EMediaPlayerTrack__Caption     = 2,
	EMediaPlayerTrack__Image       = 3,
	EMediaPlayerTrack__Script      = 4,
	EMediaPlayerTrack__Video       = 5,
	EMediaPlayerTrack__EMediaPlayerTrack_MAX = 6
};



}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
