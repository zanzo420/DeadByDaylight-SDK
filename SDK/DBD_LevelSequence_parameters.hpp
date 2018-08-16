#pragma once

// DeadByDaylight (2.0.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DBD_LevelSequence_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function LevelSequence.LevelSequencePlayer.Stop
struct ULevelSequencePlayer_Stop_Params
{
};

// Function LevelSequence.LevelSequencePlayer.StartPlayingNextTick
struct ULevelSequencePlayer_StartPlayingNextTick_Params
{
};

// Function LevelSequence.LevelSequencePlayer.SetPlayRate
struct ULevelSequencePlayer_SetPlayRate_Params
{
	float                                              PlayRate;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LevelSequence.LevelSequencePlayer.SetPlaybackRange
struct ULevelSequencePlayer_SetPlaybackRange_Params
{
	float                                              NewStartTime;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              NewEndTime;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LevelSequence.LevelSequencePlayer.SetPlaybackPosition
struct ULevelSequencePlayer_SetPlaybackPosition_Params
{
	float                                              NewPlaybackPosition;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LevelSequence.LevelSequencePlayer.PlayReverse
struct ULevelSequencePlayer_PlayReverse_Params
{
};

// Function LevelSequence.LevelSequencePlayer.PlayLooping
struct ULevelSequencePlayer_PlayLooping_Params
{
	int                                                NumLoops;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LevelSequence.LevelSequencePlayer.Play
struct ULevelSequencePlayer_Play_Params
{
};

// Function LevelSequence.LevelSequencePlayer.Pause
struct ULevelSequencePlayer_Pause_Params
{
};

// Function LevelSequence.LevelSequencePlayer.IsPlaying
struct ULevelSequencePlayer_IsPlaying_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LevelSequence.LevelSequencePlayer.GetPlayRate
struct ULevelSequencePlayer_GetPlayRate_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LevelSequence.LevelSequencePlayer.GetPlaybackStart
struct ULevelSequencePlayer_GetPlaybackStart_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LevelSequence.LevelSequencePlayer.GetPlaybackPosition
struct ULevelSequencePlayer_GetPlaybackPosition_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LevelSequence.LevelSequencePlayer.GetPlaybackEnd
struct ULevelSequencePlayer_GetPlaybackEnd_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LevelSequence.LevelSequencePlayer.GetLength
struct ULevelSequencePlayer_GetLength_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LevelSequence.LevelSequencePlayer.CreateLevelSequencePlayer
struct ULevelSequencePlayer_CreateLevelSequencePlayer_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class ULevelSequence*                              LevelSequence;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLevelSequencePlaybackSettings              Settings;                                                 // (Parm)
	class ULevelSequencePlayer*                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LevelSequence.LevelSequencePlayer.ChangePlaybackDirection
struct ULevelSequencePlayer_ChangePlaybackDirection_Params
{
};

// Function LevelSequence.LevelSequenceActor.SetSequence
struct ALevelSequenceActor_SetSequence_Params
{
	class ULevelSequence*                              InSequence;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LevelSequence.LevelSequenceActor.GetSequence
struct ALevelSequenceActor_GetSequence_Params
{
	bool                                               Load;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class ULevelSequence*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LevelSequence.LevelSequenceBurnIn.SetSettings
struct ULevelSequenceBurnIn_SetSettings_Params
{
	class UObject*                                     InSettings;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LevelSequence.LevelSequenceBurnIn.GetSettingsClass
struct ULevelSequenceBurnIn_GetSettingsClass_Params
{
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
