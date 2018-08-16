#pragma once

// DeadByDaylight (2.0.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DBD_DeadByDaylight_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DeadByDaylight.DBDAnalytics.RecordGameProgress
struct UDBDAnalytics_RecordGameProgress_Params
{
	class FString                                      InProgressType;                                           // (Parm, ZeroConstructor)
};

// Function DeadByDaylight.RitualEvaluatorBase.EvaluateEvent
struct URitualEvaluatorBase_EvaluateEvent_Params
{
	TEnumAsByte<EDBDScoreTypes>                        event;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Instigator;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.FearMarketManager.ReceivedFearMarketData
struct UFearMarketManager_ReceivedFearMarketData_Params
{
	bool                                               success;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.GameEventDispatcher.UnregisterListener
struct UGameEventDispatcher_UnregisterListener_Params
{
	struct FGameEventDispatcherHandle                  GameEventDispatcherHandle;                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function DeadByDaylight.GameEventDispatcher.RemotelyDispatch
struct UGameEventDispatcher_RemotelyDispatch_Params
{
	struct FGameplayTag                                gameEventType;                                            // (ConstParm, Parm)
	struct FGameEventData                              GameEventData;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function DeadByDaylight.GameEventDispatcher.RegisterListener
struct UGameEventDispatcher_RegisterListener_Params
{
	struct FGameEventDispatcherHandle                  GameEventDispatcherHandle;                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function DeadByDaylight.GameEventDispatcher.LocallyDispatch
struct UGameEventDispatcher_LocallyDispatch_Params
{
	struct FGameplayTag                                gameEventType;                                            // (ConstParm, Parm)
	struct FGameEventData                              GameEventData;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function DeadByDaylight.GameEventTracker.FireGameflowEvent
struct UGameEventTracker_FireGameflowEvent_Params
{
	TEnumAsByte<EDBDScoreTypes>                        EventType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class ADBDPlayerState*                             Instigator;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Data;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.GameEventTracker.FireGameEvent
struct UGameEventTracker_FireGameEvent_Params
{
	TEnumAsByte<EDBDScoreTypes>                        EventType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Instigator;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.GameEventTracker.FireAnalyticEvent
struct UGameEventTracker_FireAnalyticEvent_Params
{
	class FString                                      EventName;                                                // (Parm, ZeroConstructor)
};

// Function DeadByDaylight.StatusView.ResetView
struct AStatusView_ResetView_Params
{
	class ADBDPlayer*                                  DBDPlayer;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.StatusView.FireNotification
struct AStatusView_FireNotification_Params
{
	struct FStatusViewSource                           StatusViewSource;                                         // (ConstParm, Parm)
};

// Function DeadByDaylight.GameplayModifierCondition.SetOwningGameplayModifier
struct UGameplayModifierCondition_SetOwningGameplayModifier_Params
{
	class UGameplayModifierContainer*                  OwningGameplayModifier;                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DeadByDaylight.GameplayModifierCondition.IsApplicable
struct UGameplayModifierCondition_IsApplicable_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.GameplayModifierCondition.GetOwningPlayer
struct UGameplayModifierCondition_GetOwningPlayer_Params
{
	class ADBDPlayer*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.GameplayModifierCondition.GetOwningGameplayModifier
struct UGameplayModifierCondition_GetOwningGameplayModifier_Params
{
	class UGameplayModifierContainer*                  ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function DeadByDaylight.GameplayModifierContainer.UpdateCooldownTimer
struct UGameplayModifierContainer_UpdateCooldownTimer_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.GameplayModifierContainer.UnlistenToGameEvent
struct UGameplayModifierContainer_UnlistenToGameEvent_Params
{
	TEnumAsByte<EDBDScoreTypes>                        EventType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.GameplayModifierContainer.UnlistenToAllGameEvents
struct UGameplayModifierContainer_UnlistenToAllGameEvents_Params
{
	TEnumAsByte<EDBDScoreTypes>                        EventType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.GameplayModifierContainer.TriggerTimerActivePerkEvent
struct UGameplayModifierContainer_TriggerTimerActivePerkEvent_Params
{
	float                                              duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.GameplayModifierContainer.SetModifierValue
struct UGameplayModifierContainer_SetModifierValue_Params
{
	struct FGameplayTag                                Type;                                                     // (Parm)
	float                                              GameplayModifierValue;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.GameplayModifierContainer.SetFlag
struct UGameplayModifierContainer_SetFlag_Params
{
	struct FGameplayTag                                flag;                                                     // (Parm)
	bool                                               flagValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.GameplayModifierContainer.RemoveModifier
struct UGameplayModifierContainer_RemoveModifier_Params
{
	struct FGameplayTag                                Type;                                                     // (Parm)
};

// Function DeadByDaylight.GameplayModifierContainer.RemoveAllModifiers
struct UGameplayModifierContainer_RemoveAllModifiers_Params
{
};

// Function DeadByDaylight.GameplayModifierContainer.RemoveAllFlags
struct UGameplayModifierContainer_RemoveAllFlags_Params
{
};

// Function DeadByDaylight.GameplayModifierContainer.OnStatusEffectInitialized
struct UGameplayModifierContainer_OnStatusEffectInitialized_Params
{
	class UStatusEffect*                               effect;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DeadByDaylight.GameplayModifierContainer.OnListenedGameEvent
struct UGameplayModifierContainer_OnListenedGameEvent_Params
{
	TEnumAsByte<EDBDScoreTypes>                        EventType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Instigator;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.GameplayModifierContainer.OnLevelReadyToPlay
struct UGameplayModifierContainer_OnLevelReadyToPlay_Params
{
};

// Function DeadByDaylight.GameplayModifierContainer.OnInitialized_Internal
struct UGameplayModifierContainer_OnInitialized_Internal_Params
{
};

// Function DeadByDaylight.GameplayModifierContainer.OnInitialized
struct UGameplayModifierContainer_OnInitialized_Params
{
};

// Function DeadByDaylight.GameplayModifierContainer.OnGameEvent
struct UGameplayModifierContainer_OnGameEvent_Params
{
	TEnumAsByte<EDBDScoreTypes>                        EventType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Instigator;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.GameplayModifierContainer.OnApplyEnd
struct UGameplayModifierContainer_OnApplyEnd_Params
{
};

// Function DeadByDaylight.GameplayModifierContainer.OnApplyBegin
struct UGameplayModifierContainer_OnApplyBegin_Params
{
};

// Function DeadByDaylight.GameplayModifierContainer.Multicast_TriggerCooldownTimer
struct UGameplayModifierContainer_Multicast_TriggerCooldownTimer_Params
{
	float                                              cooldownTime;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.GameplayModifierContainer.ListenToGameEvent
struct UGameplayModifierContainer_ListenToGameEvent_Params
{
	TEnumAsByte<EDBDScoreTypes>                        EventType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.GameplayModifierContainer.IsStatusViewActive
struct UGameplayModifierContainer_IsStatusViewActive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.GameplayModifierContainer.IsApplicable
struct UGameplayModifierContainer_IsApplicable_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.GameplayModifierContainer.InstantiateGameplayModifierConditions
struct UGameplayModifierContainer_InstantiateGameplayModifierConditions_Params
{
};

// Function DeadByDaylight.GameplayModifierContainer.HasModifierOfType
struct UGameplayModifierContainer_HasModifierOfType_Params
{
	struct FGameplayTag                                Type;                                                     // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.GameplayModifierContainer.HasFlag
struct UGameplayModifierContainer_HasFlag_Params
{
	struct FGameplayTag                                flag;                                                     // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.GameplayModifierContainer.GetPercentageFill
struct UGameplayModifierContainer_GetPercentageFill_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.GameplayModifierContainer.GetOwningPlayer
struct UGameplayModifierContainer_GetOwningPlayer_Params
{
	class ADBDPlayer*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.GameplayModifierContainer.GetOriginatingEffect
struct UGameplayModifierContainer_GetOriginatingEffect_Params
{
	class UGameplayModifierContainer*                  ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function DeadByDaylight.GameplayModifierContainer.GetModifierValue
struct UGameplayModifierContainer_GetModifierValue_Params
{
	struct FGameplayTag                                Type;                                                     // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.GameplayModifierContainer.GetLevelToDisplay
struct UGameplayModifierContainer_GetLevelToDisplay_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.GameplayModifierContainer.GetInventoryItemType
struct UGameplayModifierContainer_GetInventoryItemType_Params
{
	TEnumAsByte<EInventoryItemType>                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.GameplayModifierContainer.GetIconFilePathIndex
struct UGameplayModifierContainer_GetIconFilePathIndex_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.GameplayModifierContainer.GetGameplayModifierData
struct UGameplayModifierContainer_GetGameplayModifierData_Params
{
	struct FGameplayModifierData                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DeadByDaylight.GameplayModifierContainer.GetConstGameplayModifierData
struct UGameplayModifierContainer_GetConstGameplayModifierData_Params
{
	struct FGameplayModifierData                       ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)
};

// Function DeadByDaylight.GameplayModifierContainer.GetCondition
struct UGameplayModifierContainer_GetCondition_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UGameplayModifierCondition*                  ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function DeadByDaylight.GameplayModifierContainer.FireActiveStatusViewEvent
struct UGameplayModifierContainer_FireActiveStatusViewEvent_Params
{
	struct FName                                       StatusViewID;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       uniqueSourceID;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FStatusViewSource                           StatusViewSource;                                         // (ConstParm, Parm)
};

// Function DeadByDaylight.GameplayModifierContainer.FireActivePerkEvent
struct UGameplayModifierContainer_FireActivePerkEvent_Params
{
	float                                              percentage;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                chargeCount;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.GameplayModifierContainer.ConvertEGameplayModifierTypeToGamePlayTag
struct UGameplayModifierContainer_ConvertEGameplayModifierTypeToGamePlayTag_Params
{
	class FString                                      DefaultValue;                                             // (ConstParm, Parm, ZeroConstructor)
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function DeadByDaylight.GameplayModifierContainer.ConvertEGameplayModifierFlagToGamePlayTag
struct UGameplayModifierContainer_ConvertEGameplayModifierFlagToGamePlayTag_Params
{
	class FString                                      DefaultValue;                                             // (ConstParm, Parm, ZeroConstructor)
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function DeadByDaylight.GameplayModifierContainer.Authority_TriggerCooldownTimer
struct UGameplayModifierContainer_Authority_TriggerCooldownTimer_Params
{
	float                                              coolddownTime;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.GameplayModifierContainer.Apply
struct UGameplayModifierContainer_Apply_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.GameplayModifierContainer.AddCondition
struct UGameplayModifierContainer_AddCondition_Params
{
	class UClass*                                      conditionType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UGameplayModifierCondition*                  ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function DeadByDaylight.GameplayNotificationManager.FireGameplayNotification
struct UGameplayNotificationManager_FireGameplayNotification_Params
{
	struct FGameplayNotificationData                   notificationData;                                         // (ConstParm, Parm)
	bool                                               addToHistory;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayerState.UpdateSkillCheckInteractionData
struct ADBDPlayerState_UpdateSkillCheckInteractionData_Params
{
	float                                              Progress;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayerState.UpdateOngoingScores
struct ADBDPlayerState_UpdateOngoingScores_Params
{
};

// Function DeadByDaylight.DBDPlayerState.SetSkillCheckInteractionData
struct ADBDPlayerState_SetSkillCheckInteractionData_Params
{
	struct FSkillCheckInteractionData                  skillCheckData;                                           // (Parm)
};

// Function DeadByDaylight.DBDPlayerState.SetPlayerGameState
struct ADBDPlayerState_SetPlayerGameState_Params
{
	TEnumAsByte<EGameState>                            newGameState;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayerState.SetKillerJoiningState
struct ADBDPlayerState_SetKillerJoiningState_Params
{
	TEnumAsByte<EKillerJoiningState>                   State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayerState.Server_SetSelectedCharacterId
struct ADBDPlayerState_Server_SetSelectedCharacterId_Params
{
	TEnumAsByte<EPlayerRole>                           forRole;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               updateDisplayData;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayerState.Server_SetSelectedCharacterCustomization
struct ADBDPlayerState_Server_SetSelectedCharacterCustomization_Params
{
	TEnumAsByte<EPlayerRole>                           forRole;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               customizationItemIds;                                     // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
	bool                                               updateDisplayData;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayerState.Server_SetPlayerGameState
struct ADBDPlayerState_Server_SetPlayerGameState_Params
{
	TEnumAsByte<EGameState>                            newGameState;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayerState.Server_SetGameRole
struct ADBDPlayerState_Server_SetGameRole_Params
{
	TEnumAsByte<EPlayerRole>                           newPlayerRole;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayerState.Server_RemotelyDispatchGameEvent
struct ADBDPlayerState_Server_RemotelyDispatchGameEvent_Params
{
	struct FGameplayTag                                gameEventType;                                            // (ConstParm, Parm, ReferenceParm)
	struct FGameEventData                              GameEventData;                                            // (ConstParm, Parm, ReferenceParm)
};

// Function DeadByDaylight.DBDPlayerState.Server_KillerServerJoined
struct ADBDPlayerState_Server_KillerServerJoined_Params
{
	bool                                               succeeded;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayerState.OnRep_DisplayData
struct ADBDPlayerState_OnRep_DisplayData_Params
{
};

// Function DeadByDaylight.DBDPlayerState.Multicast_UpdateSkillCheckInteractionData
struct ADBDPlayerState_Multicast_UpdateSkillCheckInteractionData_Params
{
	float                                              Progress;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayerState.Multicast_SetSkillCheckInteractionData
struct ADBDPlayerState_Multicast_SetSkillCheckInteractionData_Params
{
	struct FSkillCheckInteractionData                  skillCheckInteraction;                                    // (Parm)
};

// Function DeadByDaylight.DBDPlayerState.Multicast_SetSelectedCharacterId
struct ADBDPlayerState_Multicast_SetSelectedCharacterId_Params
{
	TEnumAsByte<EPlayerRole>                           forRole;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               updateDisplayData;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayerState.Multicast_SetSelectedCharacterCustomization
struct ADBDPlayerState_Multicast_SetSelectedCharacterCustomization_Params
{
	TEnumAsByte<EPlayerRole>                           forRole;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               customizationItemIds;                                     // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
	bool                                               updateDisplayData;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayerState.Multicast_SetPlayerGameState
struct ADBDPlayerState_Multicast_SetPlayerGameState_Params
{
	TEnumAsByte<EGameState>                            newGameState;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayerState.Multicast_SetInParadise
struct ADBDPlayerState_Multicast_SetInParadise_Params
{
	bool                                               KILLED;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayerState.Multicast_SetEquipment
struct ADBDPlayerState_Multicast_SetEquipment_Params
{
	TEnumAsByte<ELoadoutSlot>                          Slot;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ItemId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               callOnRep;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayerState.Multicast_SetAsLeftMatch
struct ADBDPlayerState_Multicast_SetAsLeftMatch_Params
{
};

// Function DeadByDaylight.DBDPlayerState.Multicast_ScoreEvent
struct ADBDPlayerState_Multicast_ScoreEvent_Params
{
	struct FScoreEvent                                 ScoreEvent;                                               // (Parm)
};

// Function DeadByDaylight.DBDPlayerState.Multicast_RemotelyDispatchGameEvent
struct ADBDPlayerState_Multicast_RemotelyDispatchGameEvent_Params
{
	struct FGameplayTag                                gameEventType;                                            // (ConstParm, Parm, ReferenceParm)
	struct FGameEventData                              GameEventData;                                            // (ConstParm, Parm, ReferenceParm)
};

// Function DeadByDaylight.DBDPlayerState.Multicast_FireGameplayEvent
struct ADBDPlayerState_Multicast_FireGameplayEvent_Params
{
	TEnumAsByte<EDBDScoreTypes>                        playerGameplayEventType;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      effector;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayerState.LogCurrentLoadout
struct ADBDPlayerState_LogCurrentLoadout_Params
{
};

// Function DeadByDaylight.DBDPlayerState.KillerJoiningState
struct ADBDPlayerState_KillerJoiningState_Params
{
	TEnumAsByte<EKillerJoiningState>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayerState.IsEscaped
struct ADBDPlayerState_IsEscaped_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayerState.HasHappened
struct ADBDPlayerState_HasHappened_Params
{
	TEnumAsByte<EDBDScoreTypes>                        gameplayEventType;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              maxSecondsAgo;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayerState.GetGameplayNotificationManager
struct ADBDPlayerState_GetGameplayNotificationManager_Params
{
	class UGameplayNotificationManager*                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayerState.GetCurrentCharacterID
struct ADBDPlayerState_GetCurrentCharacterID_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayerState.FireScoreEvent
struct ADBDPlayerState_FireScoreEvent_Params
{
	TEnumAsByte<EDBDScoreTypes>                        ScoreType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PercentToAward;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayerState.FireActiveStatusViewEvent
struct ADBDPlayerState_FireActiveStatusViewEvent_Params
{
	struct FName                                       StatusViewID;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       uniqueSourceID;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FStatusViewSource                           StatusViewSource;                                         // (ConstParm, Parm)
};

// Function DeadByDaylight.DBDPlayerState.FireActiveStatusEffectEvent
struct ADBDPlayerState_FireActiveStatusEffectEvent_Params
{
	struct FName                                       statusEffectID;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              percentage;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                iconFilePathIndex;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                LevelToDisplay;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayerState.FireActivePerkEvent
struct ADBDPlayerState_FireActivePerkEvent_Params
{
	struct FName                                       PerkID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                LevelToDisplay;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                iconFilePathIndex;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              percentage;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                chargeCount;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayerState.Client_SetInParadise
struct ADBDPlayerState_Client_SetInParadise_Params
{
	bool                                               KILLED;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayerState.Client_SetGameRole
struct ADBDPlayerState_Client_SetGameRole_Params
{
	TEnumAsByte<EPlayerRole>                           newRole;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayerState.Client_RemoveItemFromInventory
struct ADBDPlayerState_Client_RemoveItemFromInventory_Params
{
	struct FName                                       toRemove;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               updateLoadout;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayerState.Authority_HandleScoring
struct ADBDPlayerState_Authority_HandleScoring_Params
{
	TEnumAsByte<EDBDScoreTypes>                        ScoreType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PercentToAward;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayerState.Authority_ForceEndOngoingScoreEvent
struct ADBDPlayerState_Authority_ForceEndOngoingScoreEvent_Params
{
	TEnumAsByte<EDBDScoreTypes>                        ScoreType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayerState.Authority_ForceCancelOngoingScoreEvent
struct ADBDPlayerState_Authority_ForceCancelOngoingScoreEvent_Params
{
	TEnumAsByte<EDBDScoreTypes>                        ScoreType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.AchievementHandlerComponent.ReceiveGameEvent
struct UAchievementHandlerComponent_ReceiveGameEvent_Params
{
	TEnumAsByte<EDBDScoreTypes>                        ScoreType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Instigator;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.ActorClipperComponent.SetClippingEnabled
struct UActorClipperComponent_SetClippingEnabled_Params
{
	bool                                               Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.ActorClipperComponent.OnOverlapExit
struct UActorClipperComponent_OnOverlapExit_Params
{
	class UPrimitiveComponent*                         HitComponent;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.ActorClipperComponent.OnOverlapEnter
struct UActorClipperComponent_OnOverlapEnter_Params
{
	class UPrimitiveComponent*                         HitComponent;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function DeadByDaylight.ActorComponentExt.IsLocallyObserved
struct UActorComponentExt_IsLocallyObserved_Params
{
	class UActorComponent*                             ActorComponent;                                           // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.ActorComponentExt.IsLocallyControlled
struct UActorComponentExt_IsLocallyControlled_Params
{
	class UActorComponent*                             ActorComponent;                                           // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.ActorComponentExt.HasAuthority
struct UActorComponentExt_HasAuthority_Params
{
	class UActorComponent*                             ActorComponent;                                           // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.ActorComponentExt.GetValidatedOwner
struct UActorComponentExt_GetValidatedOwner_Params
{
	class UActorComponent*                             ActorComponent;                                           // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.ActorComponentExt.GetOwningSurvivor
struct UActorComponentExt_GetOwningSurvivor_Params
{
	class UActorComponent*                             ActorComponent;                                           // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ACamperPlayer*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.ActorComponentExt.GetOwningPlayer
struct UActorComponentExt_GetOwningPlayer_Params
{
	class UActorComponent*                             ActorComponent;                                           // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ADBDPlayer*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.ActorComponentExt.GetOwningKiller
struct UActorComponentExt_GetOwningKiller_Params
{
	class UActorComponent*                             ActorComponent;                                           // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ASlasherPlayer*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.TileSpawnPoint.OnRep_SpawnObject
struct UTileSpawnPoint_OnRep_SpawnObject_Params
{
};

// Function DeadByDaylight.TileSpawnPoint.GetSpawnedObject
struct UTileSpawnPoint_GetSpawnedObject_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.ActorDetectorComponent.SetDetectionPrimitive
struct UActorDetectorComponent_SetDetectionPrimitive_Params
{
	class UPrimitiveComponent*                         Primitive;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DeadByDaylight.ActorDetectorComponent.OnOverlapEnter
struct UActorDetectorComponent_OnOverlapEnter_Params
{
	class UPrimitiveComponent*                         HitComponent;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function DeadByDaylight.ActorKnowledgeCollection.IsAvailable
struct UActorKnowledgeCollection_IsAvailable_Params
{
	class ACharacter*                                  Character;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.ActorKnowledgeCollection.Contains
struct UActorKnowledgeCollection_Contains_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.ActorKnowledgeCollection.Authority_SetSharingType
struct UActorKnowledgeCollection_Authority_SetSharingType_Params
{
	TEnumAsByte<EKnowledgeSharingType>                 Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.ActorKnowledgeCollection.Authority_SetPossessor
struct UActorKnowledgeCollection_Authority_SetPossessor_Params
{
	class ACharacter*                                  possessor;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.ActorKnowledgeCollection.Authority_SetAvailable
struct UActorKnowledgeCollection_Authority_SetAvailable_Params
{
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.ActorKnowledgeCollection.Authority_Remove
struct UActorKnowledgeCollection_Authority_Remove_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.ActorKnowledgeCollection.Authority_Empty
struct UActorKnowledgeCollection_Authority_Empty_Params
{
};

// Function DeadByDaylight.ActorKnowledgeCollection.Authority_Append
struct UActorKnowledgeCollection_Authority_Append_Params
{
	TArray<class AActor*>                              Actors;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function DeadByDaylight.ActorKnowledgeCollection.Authority_Add
struct UActorKnowledgeCollection_Authority_Add_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDClientSyncer.Multicast_SyncSeed
struct ADBDClientSyncer_Multicast_SyncSeed_Params
{
	int                                                Seed;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UPaperTileMap*                               tileMap;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDClientSyncer.Multicast_SyncFinalLocallySpawnCount
struct ADBDClientSyncer_Multicast_SyncFinalLocallySpawnCount_Params
{
	int16_t                                            numLocal;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDClientSyncer.Multicast_SyncActorToSpawnLocally
struct ADBDClientSyncer_Multicast_SyncActorToSpawnLocally_Params
{
	TArray<struct FSpawnInfo>                          spawnInfos;                                               // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
	int16_t                                            startIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.ActorSpawner.UseActivatedElement
struct UActorSpawner_UseActivatedElement_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.ActorSpawner.EditorForceSpawnVisualization
struct UActorSpawner_EditorForceSpawnVisualization_Params
{
};

// Function DeadByDaylight.ActorSpawner.AuthorityGetSpawnedActor
struct UActorSpawner_AuthorityGetSpawnedActor_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.ActorSpawner.Authority_SpawnActorAsyncEvent
struct UActorSpawner_Authority_SpawnActorAsyncEvent_Params
{
};

// Function DeadByDaylight.AICharacterBehaviour.Update
struct UAICharacterBehaviour_Update_Params
{
};

// Function DeadByDaylight.AICharacterBehaviour.SetEnable
struct UAICharacterBehaviour_SetEnable_Params
{
	bool                                               enable;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.AICharacterBehaviour.IsEnabled
struct UAICharacterBehaviour_IsEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.CharacterEvasionData.Init
struct UCharacterEvasionData_Init_Params
{
	class AActor*                                      Hunter;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              escapePoints;                                             // (Parm, ZeroConstructor)
	float                                              minEscapeDist;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.AICharacterEvasionHandler.EscapeDestinationReached
struct UAICharacterEvasionHandler_EscapeDestinationReached_Params
{
	struct FAIRequestID                                RequestID;                                                // (Parm)
	TEnumAsByte<EPathFollowingResult>                  result;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.AIMoveToInteractData.Init
struct UAIMoveToInteractData_Init_Params
{
	class AActor*                                      interactActor;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECharacterMovementTypes>               characterMovementTypes;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.AIMoveToInteract.InteractionPointReached
struct UAIMoveToInteract_InteractionPointReached_Params
{
	struct FAIRequestID                                RequestID;                                                // (Parm)
	TEnumAsByte<EPathFollowingResult>                  result;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.AIMoveToInteract.Init
struct UAIMoveToInteract_Init_Params
{
	class ADBDPlayer*                                  Character;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UAICharacterBehaviourData*                   behaviourData;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.AnalyticsFunctionLibrary.StartSurvivorTutorialSectionAnalytics
struct UAnalyticsFunctionLibrary_StartSurvivorTutorialSectionAnalytics_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESurvivorTutorialSections>             tutorialSection;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.AnalyticsFunctionLibrary.StartKillerTutorialSectionAnalytics
struct UAnalyticsFunctionLibrary_StartKillerTutorialSectionAnalytics_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EKillerTutorialSections>               tutorialSection;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.AnalyticsFunctionLibrary.EndSurvivorTutorialSectionAnalytics
struct UAnalyticsFunctionLibrary_EndSurvivorTutorialSectionAnalytics_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESurvivorTutorialSections>             tutorialSection;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.AnalyticsFunctionLibrary.EndKillerTutorialSectionAnalytics
struct UAnalyticsFunctionLibrary_EndKillerTutorialSectionAnalytics_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EKillerTutorialSections>               tutorialSection;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.AnimationMontageSlave.SetLeader
struct UAnimationMontageSlave_SetLeader_Params
{
	class UMontagePlayer*                              leader;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DeadByDaylight.AnimationMontageSlave.OnMontageStopped
struct UAnimationMontageSlave_OnMontageStopped_Params
{
	struct FAnimationMontageDescriptor                 ID;                                                       // (ConstParm, Parm)
};

// Function DeadByDaylight.AnimationMontageSlave.OnMontageStarted
struct UAnimationMontageSlave_OnMontageStarted_Params
{
	struct FAnimationMontageDescriptor                 ID;                                                       // (ConstParm, Parm)
	float                                              rate;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.CameraHandlerComponent.SetSocketID
struct UCameraHandlerComponent_SetSocketID_Params
{
	TEnumAsByte<EDBDCameraSocketID>                    mode;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.CameraHandlerComponent.PlayVFXOnCurrentCamera
struct UCameraHandlerComponent_PlayVFXOnCurrentCamera_Params
{
	class UParticleSystemComponent*                    Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DeadByDaylight.CameraHandlerComponent.GetSocketID
struct UCameraHandlerComponent_GetSocketID_Params
{
	TEnumAsByte<EDBDCameraSocketID>                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.CameraHandlerComponent.GetCurrentCamera
struct UCameraHandlerComponent_GetCurrentCamera_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.CameraHandlerComponent.AddCameraToSocket
struct UCameraHandlerComponent_AddCameraToSocket_Params
{
	TEnumAsByte<EDBDCameraSocketID>                    mode;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Camera;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.MontagePlayer.Stop
struct UMontagePlayer_Stop_Params
{
	float                                              BlendOutTime;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.MontagePlayer.SetPlayRate
struct UMontagePlayer_SetPlayRate_Params
{
	float                                              PlayRate;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.MontagePlayer.SetAnimInstance
struct UMontagePlayer_SetAnimInstance_Params
{
	class UAnimInstance*                               AnimInstance;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.MontagePlayer.PlayScaledForDuration
struct UMontagePlayer_PlayScaledForDuration_Params
{
	struct FAnimationMontageDescriptor                 animMontageID;                                            // (Parm)
	float                                              duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.MontagePlayer.PlayLoopForDuration
struct UMontagePlayer_PlayLoopForDuration_Params
{
	struct FAnimationMontageDescriptor                 animMontageID;                                            // (Parm)
	float                                              duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PlayRate;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Out;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.MontagePlayer.Play
struct UMontagePlayer_Play_Params
{
	struct FAnimationMontageDescriptor                 animMontageID;                                            // (Parm)
	float                                              PlayRate;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               isFollower;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.MontagePlayer.OnMontageEndedInternal
struct UMontagePlayer_OnMontageEndedInternal_Params
{
	struct FGuid                                       Guid;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Montage;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               interrupted;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.MontagePlayer.OnMontageBlendingOutInternal
struct UMontagePlayer_OnMontageBlendingOutInternal_Params
{
	struct FGuid                                       Guid;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Montage;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               interrupted;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.MontagePlayer.JumpToSectionEnd
struct UMontagePlayer_JumpToSectionEnd_Params
{
	struct FName                                       sectionName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.MontagePlayer.JumpToSection
struct UMontagePlayer_JumpToSection_Params
{
	struct FName                                       sectionName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.MontagePlayer.IsPlayingAnyMontage
struct UMontagePlayer_IsPlayingAnyMontage_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.MontagePlayer.IsPlaying
struct UMontagePlayer_IsPlaying_Params
{
	struct FAnimationMontageDescriptor                 montageDescriptor;                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.MontagePlayer.GetAnimInstance
struct UMontagePlayer_GetAnimInstance_Params
{
	class UAnimInstance*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.UseInventoryItem
struct ADBDPlayer_UseInventoryItem_Params
{
};

// Function DeadByDaylight.DBDPlayer.UpdateLoadoutFromInventory
struct ADBDPlayer_UpdateLoadoutFromInventory_Params
{
};

// Function DeadByDaylight.DBDPlayer.TryInteractionType
struct ADBDPlayer_TryInteractionType_Params
{
	TEnumAsByte<EInputInteractionType>                 interactionInputType;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class ADBDPlayer*                                  Requester;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               usingInputPersistence;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.TryInteraction
struct ADBDPlayer_TryInteraction_Params
{
	class UInteractionDefinition*                      Interaction;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ADBDPlayer*                                  Requester;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Force;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               usingInputPersistence;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.TryFireScoreEvent
struct ADBDPlayer_TryFireScoreEvent_Params
{
	TEnumAsByte<EDBDScoreTypes>                        ScoreType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PercentToAward;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.TriggerTrapImmunity
struct ADBDPlayer_TriggerTrapImmunity_Params
{
	float                                              duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.TriggerAnimNotify
struct ADBDPlayer_TriggerAnimNotify_Params
{
	TEnumAsByte<EAnimNotifyType>                       animNotifyType;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.ToggleGhost
struct ADBDPlayer_ToggleGhost_Params
{
};

// Function DeadByDaylight.DBDPlayer.TeleportToBP
struct ADBDPlayer_TeleportToBP_Params
{
	struct FVector                                     DestLocation;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FRotator                                    DestRotation;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               bIsATest;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bNoCheck;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.StoreItem
struct ADBDPlayer_StoreItem_Params
{
};

// Function DeadByDaylight.DBDPlayer.StopSnap
struct ADBDPlayer_StopSnap_Params
{
	bool                                               snap;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.StopMontage
struct ADBDPlayer_StopMontage_Params
{
};

// Function DeadByDaylight.DBDPlayer.StopAllMovement
struct ADBDPlayer_StopAllMovement_Params
{
};

// Function DeadByDaylight.DBDPlayer.StartDrop
struct ADBDPlayer_StartDrop_Params
{
	class ACollectable*                                Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.SpawnCollectedItem
struct ADBDPlayer_SpawnCollectedItem_Params
{
	struct FName                                       ItemId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class ACollectable*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.SnapCharacter
struct ADBDPlayer_SnapCharacter_Params
{
	bool                                               snapPosition;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Position;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              stopSnapDistance;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               snapRotation;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               useZCoord;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               sweepOnFinalSnap;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.ShouldFall
struct ADBDPlayer_ShouldFall_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.SetYawScale
struct ADBDPlayer_SetYawScale_Params
{
	float                                              yawScale;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              adjustTime;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.SetWorldCollisionResponse
struct ADBDPlayer_SetWorldCollisionResponse_Params
{
	TEnumAsByte<ECollisionResponse>                    Response;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.SetRightFootAudioSurfaceName
struct ADBDPlayer_SetRightFootAudioSurfaceName_Params
{
	class FString                                      Name;                                                     // (Parm, ZeroConstructor)
};

// Function DeadByDaylight.DBDPlayer.SetReverseMontage
struct ADBDPlayer_SetReverseMontage_Params
{
	bool                                               Reverse;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.SetPlayerDirection
struct ADBDPlayer_SetPlayerDirection_Params
{
	struct FRotator                                    Rotation;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.SetPitchScale
struct ADBDPlayer_SetPitchScale_Params
{
	float                                              yawScale;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              adjustTime;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.SetPawnAuthoritativeMovement
struct ADBDPlayer_SetPawnAuthoritativeMovement_Params
{
	bool                                               authoritative;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.SetLeftFootAudioSurfaceName
struct ADBDPlayer_SetLeftFootAudioSurfaceName_Params
{
	class FString                                      Name;                                                     // (Parm, ZeroConstructor)
};

// Function DeadByDaylight.DBDPlayer.SetIsCloaked
struct ADBDPlayer_SetIsCloaked_Params
{
	bool                                               IsCloaked;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Forced;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.SetInStalkMode
struct ADBDPlayer_SetInStalkMode_Params
{
	bool                                               stalkMode;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Forced;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.SetInParadise
struct ADBDPlayer_SetInParadise_Params
{
	bool                                               inParadise;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.SetIgnoreActorCollision
struct ADBDPlayer_SetIgnoreActorCollision_Params
{
	class AActor*                                      ActorToIgnore;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ignore;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.SetGuidingPlayer
struct ADBDPlayer_SetGuidingPlayer_Params
{
	class ADBDPlayer*                                  guidingPlayer;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.SetForceDisableSkillChecks
struct ADBDPlayer_SetForceDisableSkillChecks_Params
{
	bool                                               IsEnabled;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.SetFirstPersonVfxsVisibility
struct ADBDPlayer_SetFirstPersonVfxsVisibility_Params
{
	bool                                               isFirstPerson;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.SetFirstPersonModelEnabled
struct ADBDPlayer_SetFirstPersonModelEnabled_Params
{
	bool                                               Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Force;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.SetFeetOnGround
struct ADBDPlayer_SetFeetOnGround_Params
{
	bool                                               feetOnGround;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.SetEnableServerPositionUpdates
struct ADBDPlayer_SetEnableServerPositionUpdates_Params
{
	bool                                               enable;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.SetDetectionZoneEnabled
struct ADBDPlayer_SetDetectionZoneEnabled_Params
{
	TEnumAsByte<EDetectionZone>                        detectionZoneID;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.SetCurrentInteractionAnimation
struct ADBDPlayer_SetCurrentInteractionAnimation_Params
{
	TEnumAsByte<EInteractionAnimation>                 Animation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.SetCharacterAudioSurfaceName
struct ADBDPlayer_SetCharacterAudioSurfaceName_Params
{
	class FString                                      Name;                                                     // (Parm, ZeroConstructor)
};

// Function DeadByDaylight.DBDPlayer.SetAuthoritativeMovementFlag
struct ADBDPlayer_SetAuthoritativeMovementFlag_Params
{
	TEnumAsByte<EAuthoritativeMovementFlag>            flagIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.SetAnimationCrouchState
struct ADBDPlayer_SetAnimationCrouchState_Params
{
	bool                                               crouched;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.SetAllowNavigation
struct ADBDPlayer_SetAllowNavigation_Params
{
	bool                                               enable;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.SetAllDetectionZonesEnabled
struct ADBDPlayer_SetAllDetectionZonesEnabled_Params
{
	bool                                               Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.ServerResetMeshRelativeOffSet
struct ADBDPlayer_ServerResetMeshRelativeOffSet_Params
{
};

// Function DeadByDaylight.DBDPlayer.Server_UpdateScreenAspectRatio
struct ADBDPlayer_Server_UpdateScreenAspectRatio_Params
{
	float                                              Value;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.Server_TeleportTo
struct ADBDPlayer_Server_TeleportTo_Params
{
	struct FVector                                     DestLocation;                                             // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FRotator                                    DestRotation;                                             // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               bIsATest;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bNoCheck;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.Server_SpawnStatusEffect
struct ADBDPlayer_Server_SpawnStatusEffect_Params
{
	struct FName                                       statusEffectID;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.Server_SpawnPerk
struct ADBDPlayer_Server_SpawnPerk_Params
{
	struct FName                                       PerkID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                PerkLevel;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.Server_SpawnItemAddon
struct ADBDPlayer_Server_SpawnItemAddon_Params
{
	struct FName                                       AddonID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.Server_SpawnItem
struct ADBDPlayer_Server_SpawnItem_Params
{
	struct FName                                       ItemId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.Server_SetWindowFreeCam
struct ADBDPlayer_Server_SetWindowFreeCam_Params
{
	bool                                               Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.Server_SetSlasherAutoAttackOnCamperInteractFrameDelay
struct ADBDPlayer_Server_SetSlasherAutoAttackOnCamperInteractFrameDelay_Params
{
	int                                                frames;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.Server_SetRunVaultEnabled
struct ADBDPlayer_Server_SetRunVaultEnabled_Params
{
	bool                                               Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.Server_SetReverseTraverseEnabled
struct ADBDPlayer_Server_SetReverseTraverseEnabled_Params
{
	bool                                               Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.Server_SetMaxWalkSpeed
struct ADBDPlayer_Server_SetMaxWalkSpeed_Params
{
	float                                              MaxWalkSpeed;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.Server_SetForceAuthoritativeMovement
struct ADBDPlayer_Server_SetForceAuthoritativeMovement_Params
{
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.Server_SetEthereal
struct ADBDPlayer_Server_SetEthereal_Params
{
	bool                                               Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.Server_SetEnableServerPositionUpdates
struct ADBDPlayer_Server_SetEnableServerPositionUpdates_Params
{
	bool                                               Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.Server_SetEnableCapsuleDynamicResize
struct ADBDPlayer_Server_SetEnableCapsuleDynamicResize_Params
{
	bool                                               Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.Server_SetDebugSnapPoint
struct ADBDPlayer_Server_SetDebugSnapPoint_Params
{
	bool                                               Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.Server_SetDebugPrintAvailableInteractions
struct ADBDPlayer_Server_SetDebugPrintAvailableInteractions_Params
{
	bool                                               Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.Server_SetDebugFailAllInteractions
struct ADBDPlayer_Server_SetDebugFailAllInteractions_Params
{
	bool                                               Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.Server_SetDebugCarry
struct ADBDPlayer_Server_SetDebugCarry_Params
{
	bool                                               Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.Server_SetCustomization
struct ADBDPlayer_Server_SetCustomization_Params
{
	TArray<struct FName>                               customizationParts;                                       // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function DeadByDaylight.DBDPlayer.Server_SetContinuousPrintDebug
struct ADBDPlayer_Server_SetContinuousPrintDebug_Params
{
	bool                                               Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.Server_SetAuthoritativeMovement
struct ADBDPlayer_Server_SetAuthoritativeMovement_Params
{
	bool                                               Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.Server_SendSecondaryActionPressed
struct ADBDPlayer_Server_SendSecondaryActionPressed_Params
{
};

// Function DeadByDaylight.DBDPlayer.Server_SendItemUseInput
struct ADBDPlayer_Server_SendItemUseInput_Params
{
	bool                                               Pressed;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.Server_SendItemUse
struct ADBDPlayer_Server_SendItemUse_Params
{
	bool                                               Use;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.Server_SendItemDropInput
struct ADBDPlayer_Server_SendItemDropInput_Params
{
	bool                                               Pressed;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.Server_SendInteractionInput
struct ADBDPlayer_Server_SendInteractionInput_Params
{
	bool                                               Pressed;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.Server_SendFastInteractionInput
struct ADBDPlayer_Server_SendFastInteractionInput_Params
{
	bool                                               Pressed;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.Server_RemoveStatusEffects
struct ADBDPlayer_Server_RemoveStatusEffects_Params
{
};

// Function DeadByDaylight.DBDPlayer.Server_RemoveStatusEffectByID
struct ADBDPlayer_Server_RemoveStatusEffectByID_Params
{
	struct FName                                       statusEffectID;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bRemoveAllWithID;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.Server_RemovePerks
struct ADBDPlayer_Server_RemovePerks_Params
{
};

// Function DeadByDaylight.DBDPlayer.Server_PlayerReady
struct ADBDPlayer_Server_PlayerReady_Params
{
};

// Function DeadByDaylight.DBDPlayer.Server_OnMovementInput
struct ADBDPlayer_Server_OnMovementInput_Params
{
	class ADBDPlayer*                                  Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.Server_OnInsaneSkillCheck
struct ADBDPlayer_Server_OnInsaneSkillCheck_Params
{
};

// Function DeadByDaylight.DBDPlayer.Server_Ghost
struct ADBDPlayer_Server_Ghost_Params
{
	bool                                               Ghost;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.Server_FailInterruption
struct ADBDPlayer_Server_FailInterruption_Params
{
	class ADBDPlayer*                                  interruptee;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.Server_Drop
struct ADBDPlayer_Server_Drop_Params
{
	class ACollectable*                                Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               onDeath;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.Server_CheatDispatchOnPostItemAddonsCreation
struct ADBDPlayer_Server_CheatDispatchOnPostItemAddonsCreation_Params
{
};

// Function DeadByDaylight.DBDPlayer.Server_Cheat
struct ADBDPlayer_Server_Cheat_Params
{
};

// Function DeadByDaylight.DBDPlayer.ResetYawScale
struct ADBDPlayer_ResetYawScale_Params
{
	float                                              adjustTime;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.ResetPitchScale
struct ADBDPlayer_ResetPitchScale_Params
{
	float                                              adjustTime;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.ResetMeshRelativeRotation
struct ADBDPlayer_ResetMeshRelativeRotation_Params
{
};

// Function DeadByDaylight.DBDPlayer.ResetMeshRelativePosition
struct ADBDPlayer_ResetMeshRelativePosition_Params
{
};

// Function DeadByDaylight.DBDPlayer.ResetCamera
struct ADBDPlayer_ResetCamera_Params
{
};

// Function DeadByDaylight.DBDPlayer.RemoveStatusEffect
struct ADBDPlayer_RemoveStatusEffect_Params
{
	class UStatusEffect*                               StatusEffect;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.RemoveFromInventory
struct ADBDPlayer_RemoveFromInventory_Params
{
	class ACollectable*                                Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.RemoveAllStatusEffects
struct ADBDPlayer_RemoveAllStatusEffects_Params
{
};

// Function DeadByDaylight.DBDPlayer.PlayMontage
struct ADBDPlayer_PlayMontage_Params
{
	struct FAnimationMontageDescriptor                 animMontageID;                                            // (Parm)
	float                                              PlayRate;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               isFollower;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.OnPickupStart
struct ADBDPlayer_OnPickupStart_Params
{
	class ADBDPlayer*                                  Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.OnPickupEnd
struct ADBDPlayer_OnPickupEnd_Params
{
	class ADBDPlayer*                                  Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.OnPawnDetectorOverlapExit
struct ADBDPlayer_OnPawnDetectorOverlapExit_Params
{
	class UPrimitiveComponent*                         HitComponent;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.OnPawnDetectorOverlapEnter
struct ADBDPlayer_OnPawnDetectorOverlapEnter_Params
{
	class UPrimitiveComponent*                         HitComponent;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.OnLocallyObservedChanged
struct ADBDPlayer_OnLocallyObservedChanged_Params
{
};

// Function DeadByDaylight.DBDPlayer.OnLevelReadyToPlay
struct ADBDPlayer_OnLevelReadyToPlay_Params
{
};

// Function DeadByDaylight.DBDPlayer.OnInterruptedStart
struct ADBDPlayer_OnInterruptedStart_Params
{
};

// Function DeadByDaylight.DBDPlayer.OnInsaneSkillCheck
struct ADBDPlayer_OnInsaneSkillCheck_Params
{
};

// Function DeadByDaylight.DBDPlayer.OnHeadHidden
struct ADBDPlayer_OnHeadHidden_Params
{
	bool                                               hidden;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.OnEscapeDoorActivated
struct ADBDPlayer_OnEscapeDoorActivated_Params
{
};

// Function DeadByDaylight.DBDPlayer.OnCurrentMontageComplete
struct ADBDPlayer_OnCurrentMontageComplete_Params
{
	class UAnimMontage*                                MontageAsset;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               interrupted;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.OnCurrentMontageBlendingOut
struct ADBDPlayer_OnCurrentMontageBlendingOut_Params
{
	class UAnimMontage*                                MontageAsset;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               interrupted;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.OnClientRestart
struct ADBDPlayer_OnClientRestart_Params
{
};

// Function DeadByDaylight.DBDPlayer.OnBlindChargeEmptied
struct ADBDPlayer_OnBlindChargeEmptied_Params
{
};

// Function DeadByDaylight.DBDPlayer.OnAttackFinished
struct ADBDPlayer_OnAttackFinished_Params
{
	TEnumAsByte<EAttackType>                           attackType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.OnAllPlayerLoaded
struct ADBDPlayer_OnAllPlayerLoaded_Params
{
};

// Function DeadByDaylight.DBDPlayer.NotifyMoriUpdateStart
struct ADBDPlayer_NotifyMoriUpdateStart_Params
{
};

// Function DeadByDaylight.DBDPlayer.NotifyMoriFinished
struct ADBDPlayer_NotifyMoriFinished_Params
{
};

// Function DeadByDaylight.DBDPlayer.Multicast_TriggerSprintWithParams
struct ADBDPlayer_Multicast_TriggerSprintWithParams_Params
{
	float                                              duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 Curve;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       effector;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.Multicast_TriggerSprint
struct ADBDPlayer_Multicast_TriggerSprint_Params
{
};

// Function DeadByDaylight.DBDPlayer.Multicast_SetWindowFreeCam
struct ADBDPlayer_Multicast_SetWindowFreeCam_Params
{
	bool                                               Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.Multicast_SetRunVaultEnabled
struct ADBDPlayer_Multicast_SetRunVaultEnabled_Params
{
	bool                                               Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.Multicast_SetReverseTraverseEnabled
struct ADBDPlayer_Multicast_SetReverseTraverseEnabled_Params
{
	bool                                               Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.Multicast_SetMaxWalkSpeed
struct ADBDPlayer_Multicast_SetMaxWalkSpeed_Params
{
	float                                              MaxWalkSpeed;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.Multicast_SetInteractingPlayer
struct ADBDPlayer_Multicast_SetInteractingPlayer_Params
{
	class ADBDPlayer*                                  interactingPlayer;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.Multicast_SetForceAuthoritativeMovement
struct ADBDPlayer_Multicast_SetForceAuthoritativeMovement_Params
{
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.Multicast_SetEthereal
struct ADBDPlayer_Multicast_SetEthereal_Params
{
	bool                                               Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.Multicast_SetEnableServerPositionUpdates
struct ADBDPlayer_Multicast_SetEnableServerPositionUpdates_Params
{
	bool                                               Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.Multicast_SetEnableCapsuleDynamicResize
struct ADBDPlayer_Multicast_SetEnableCapsuleDynamicResize_Params
{
	bool                                               Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.Multicast_SetDebugSnapPoint
struct ADBDPlayer_Multicast_SetDebugSnapPoint_Params
{
	bool                                               Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.Multicast_SetDebugPrintAvailableInteractions
struct ADBDPlayer_Multicast_SetDebugPrintAvailableInteractions_Params
{
	bool                                               Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.Multicast_SetDebugCarry
struct ADBDPlayer_Multicast_SetDebugCarry_Params
{
	bool                                               Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.Multicast_SetCustomization
struct ADBDPlayer_Multicast_SetCustomization_Params
{
	TArray<struct FName>                               customizationParts;                                       // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function DeadByDaylight.DBDPlayer.Multicast_SetContinuousPrintDebug
struct ADBDPlayer_Multicast_SetContinuousPrintDebug_Params
{
	bool                                               Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.Multicast_SetAuthoritativeMovement
struct ADBDPlayer_Multicast_SetAuthoritativeMovement_Params
{
	bool                                               Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.Multicast_ServerResetMeshRelativeOffSet
struct ADBDPlayer_Multicast_ServerResetMeshRelativeOffSet_Params
{
};

// Function DeadByDaylight.DBDPlayer.Multicast_RemoveFromInventory
struct ADBDPlayer_Multicast_RemoveFromInventory_Params
{
	class ACollectable*                                Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.Multicast_PlayMontage
struct ADBDPlayer_Multicast_PlayMontage_Params
{
	struct FAnimationMontageDescriptor                 animMontageID;                                            // (Parm)
	float                                              PlayRate;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.Multicast_OnInsaneSkillCheck
struct ADBDPlayer_Multicast_OnInsaneSkillCheck_Params
{
};

// Function DeadByDaylight.DBDPlayer.Multicast_LockOnTarget
struct ADBDPlayer_Multicast_LockOnTarget_Params
{
	class ADBDPlayer*                                  Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.Multicast_LeaveGame
struct ADBDPlayer_Multicast_LeaveGame_Params
{
	struct FGuid                                       uniqueLeavingPlayerId;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.Multicast_InteractionRollResult
struct ADBDPlayer_Multicast_InteractionRollResult_Params
{
	bool                                               rollResult;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.Multicast_Ghost
struct ADBDPlayer_Multicast_Ghost_Params
{
	bool                                               Ghost;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.Multicast_DamageTarget
struct ADBDPlayer_Multicast_DamageTarget_Params
{
	class ADBDPlayer*                                  Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAttackType>                           attackType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.Multicast_ConfirmItemDrop
struct ADBDPlayer_Multicast_ConfirmItemDrop_Params
{
	bool                                               Pressed;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.Multicast_ClearAndDestroyInventory
struct ADBDPlayer_Multicast_ClearAndDestroyInventory_Params
{
};

// Function DeadByDaylight.DBDPlayer.Multicast_AttackSubstate
struct ADBDPlayer_Multicast_AttackSubstate_Params
{
	TEnumAsByte<EAttackSubstate>                       attackSubstate;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.Multicast_AttackBegin
struct ADBDPlayer_Multicast_AttackBegin_Params
{
	TEnumAsByte<EAttackType>                           attackType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.Multicast_AddToInventory
struct ADBDPlayer_Multicast_AddToInventory_Params
{
	class ACollectable*                                Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.Local_RequestBlink
struct ADBDPlayer_Local_RequestBlink_Params
{
	struct FTransform                                  Destination;                                              // (Parm, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.Local_NotifyMatchEnded
struct ADBDPlayer_Local_NotifyMatchEnded_Params
{
};

// Function DeadByDaylight.DBDPlayer.LineTraceSingleForFootIK
struct ADBDPlayer_LineTraceSingleForFootIK_Params
{
	struct FVector                                     Start;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     End;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               traceComplex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  OutHit;                                                   // (Parm, OutParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.K2_SetActorLocationByBottomCapsule
struct ADBDPlayer_K2_SetActorLocationByBottomCapsule_Params
{
	struct FVector                                     NewLocation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSweep;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (Parm, OutParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.IsUsingAimItem
struct ADBDPlayer_IsUsingAimItem_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.IsUnintentionallyIncapacitated
struct ADBDPlayer_IsUnintentionallyIncapacitated_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.IsStrafing
struct ADBDPlayer_IsStrafing_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.IsSprinting
struct ADBDPlayer_IsSprinting_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.IsSnappingRotation
struct ADBDPlayer_IsSnappingRotation_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.IsSnappingPosition
struct ADBDPlayer_IsSnappingPosition_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.IsSnapping
struct ADBDPlayer_IsSnapping_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.IsRunningAndMoving
struct ADBDPlayer_IsRunningAndMoving_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.IsRunning
struct ADBDPlayer_IsRunning_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.IsPlayingMontage
struct ADBDPlayer_IsPlayingMontage_Params
{
	struct FAnimationMontageDescriptor                 animMontageID;                                            // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.IsPlayingAnyMontage
struct ADBDPlayer_IsPlayingAnyMontage_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.IsLocationClear
struct ADBDPlayer_IsLocationClear_Params
{
	struct FVector                                     targetPosition;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.IsLocallyObserved
struct ADBDPlayer_IsLocallyObserved_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.IsInTerrorRadius
struct ADBDPlayer_IsInTerrorRadius_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.IsInteractionInputPressed
struct ADBDPlayer_IsInteractionInputPressed_Params
{
	TEnumAsByte<EInputInteractionType>                 InteractionType;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.IsInStalkMode
struct ADBDPlayer_IsInStalkMode_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.IsInsideCloset
struct ADBDPlayer_IsInsideCloset_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.IsInParadise
struct ADBDPlayer_IsInParadise_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.IsInMeathookZone
struct ADBDPlayer_IsInMeathookZone_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.IsInDreamworld
struct ADBDPlayer_IsInDreamworld_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.IsInChaseCooldown
struct ADBDPlayer_IsInChaseCooldown_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.IsInChase
struct ADBDPlayer_IsInChase_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.IsIncapacitated
struct ADBDPlayer_IsIncapacitated_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.IsHeadHidden
struct ADBDPlayer_IsHeadHidden_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.IsFacing
struct ADBDPlayer_IsFacing_Params
{
	struct FVector                                     Direction;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.IsExhausted
struct ADBDPlayer_IsExhausted_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.IsCrouching
struct ADBDPlayer_IsCrouching_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.IsCloaked
struct ADBDPlayer_IsCloaked_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.IsBlinded
struct ADBDPlayer_IsBlinded_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.IsBeingInterrupted
struct ADBDPlayer_IsBeingInterrupted_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.IsAllowedNavigation
struct ADBDPlayer_IsAllowedNavigation_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.HideHead
struct ADBDPlayer_HideHead_Params
{
	bool                                               hide;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.HasTrapImmunity
struct ADBDPlayer_HasTrapImmunity_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.HasMoveInput
struct ADBDPlayer_HasMoveInput_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.HasMaximumItemCount
struct ADBDPlayer_HasMaximumItemCount_Params
{
	class ACollectable*                                Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.HasItem
struct ADBDPlayer_HasItem_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.HasInInventory
struct ADBDPlayer_HasInInventory_Params
{
	class UClass*                                      Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.HasEquippedItem
struct ADBDPlayer_HasEquippedItem_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.HasDamageImmunity
struct ADBDPlayer_HasDamageImmunity_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.HasClearPathToTargetWithIgnore
struct ADBDPlayer_HasClearPathToTargetWithIgnore_Params
{
	struct FVector                                     targetPosition;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              ignoreActors;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.HasClearPathToTarget
struct ADBDPlayer_HasClearPathToTarget_Params
{
	struct FVector                                     targetPosition;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.HasClearPathToItemDropOffPosition
struct ADBDPlayer_HasClearPathToItemDropOffPosition_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.HasAnimMontageEnded
struct ADBDPlayer_HasAnimMontageEnded_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.GetWindowFreeCam
struct ADBDPlayer_GetWindowFreeCam_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.GetTunableValue
struct ADBDPlayer_GetTunableValue_Params
{
	struct FName                                       Key;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DefaultValue;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               warnIfRowMissing;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.GetStamina
struct ADBDPlayer_GetStamina_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.GetSprintEffector
struct ADBDPlayer_GetSprintEffector_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.GetSprintDurationTimerPercentage
struct ADBDPlayer_GetSprintDurationTimerPercentage_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.GetRunVaultEnabled
struct ADBDPlayer_GetRunVaultEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.GetRightFootAudioSurfaceName
struct ADBDPlayer_GetRightFootAudioSurfaceName_Params
{
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function DeadByDaylight.DBDPlayer.GetReverseTraverseEnabled
struct ADBDPlayer_GetReverseTraverseEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.GetRepControlRotation
struct ADBDPlayer_GetRepControlRotation_Params
{
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.GetRemainingTrapImmunityDuration
struct ADBDPlayer_GetRemainingTrapImmunityDuration_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.GetProgressToEscapeCarry
struct ADBDPlayer_GetProgressToEscapeCarry_Params
{
	class ADBDPlayer*                                  Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.GetPlayerRole
struct ADBDPlayer_GetPlayerRole_Params
{
	TEnumAsByte<EPlayerRole>                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.GetPlayerInteractionHandler
struct ADBDPlayer_GetPlayerInteractionHandler_Params
{
	class UPlayerInteractionHandler*                   ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.GetPlayerDirection
struct ADBDPlayer_GetPlayerDirection_Params
{
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.GetPlayerController
struct ADBDPlayer_GetPlayerController_Params
{
	class ADBDPlayerController*                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.GetPlayerCamera
struct ADBDPlayer_GetPlayerCamera_Params
{
	class UCameraComponent*                            ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.GetPerkManager
struct ADBDPlayer_GetPerkManager_Params
{
	class UPerkManager*                                ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.GetPercentMovementSpeed
struct ADBDPlayer_GetPercentMovementSpeed_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.GetPercentBlinded
struct ADBDPlayer_GetPercentBlinded_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.GetNearbyGroundLocation
struct ADBDPlayer_GetNearbyGroundLocation_Params
{
	struct FVector                                     groundLocation;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.GetNameDebugString
struct ADBDPlayer_GetNameDebugString_Params
{
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function DeadByDaylight.DBDPlayer.GetMontagePlayer
struct ADBDPlayer_GetMontagePlayer_Params
{
	class UMontagePlayer*                              ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.GetMontageLength
struct ADBDPlayer_GetMontageLength_Params
{
	struct FAnimationMontageDescriptor                 animMontageID;                                            // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.GetMontage
struct ADBDPlayer_GetMontage_Params
{
	struct FAnimationMontageDescriptor                 animMontageID;                                            // (Parm)
	class UAnimMontage*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.GetMeshFeetPosition
struct ADBDPlayer_GetMeshFeetPosition_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.GetMaxSpeed
struct ADBDPlayer_GetMaxSpeed_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.GetLuck
struct ADBDPlayer_GetLuck_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.GetLeftFootAudioSurfaceName
struct ADBDPlayer_GetLeftFootAudioSurfaceName_Params
{
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function DeadByDaylight.DBDPlayer.GetLastSafeLocation
struct ADBDPlayer_GetLastSafeLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.GetItemModifiers
struct ADBDPlayer_GetItemModifiers_Params
{
	TArray<class UItemModifier*>                       ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function DeadByDaylight.DBDPlayer.GetItemID
struct ADBDPlayer_GetItemID_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.GetItemDropOffTransform
struct ADBDPlayer_GetItemDropOffTransform_Params
{
	class USceneComponent*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.GetItemCountByID
struct ADBDPlayer_GetItemCountByID_Params
{
	struct FName                                       ItemId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.GetItemCount
struct ADBDPlayer_GetItemCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.GetItemAddons
struct ADBDPlayer_GetItemAddons_Params
{
	TArray<class UItemAddon*>                          ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function DeadByDaylight.DBDPlayer.GetItem
struct ADBDPlayer_GetItem_Params
{
	class ACollectable*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.GetIsInterrupting
struct ADBDPlayer_GetIsInterrupting_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.GetIsInteracting
struct ADBDPlayer_GetIsInteracting_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.GetIsBeyondCrouchWalkSpeed
struct ADBDPlayer_GetIsBeyondCrouchWalkSpeed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.GetInteractionRollResult
struct ADBDPlayer_GetInteractionRollResult_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.GetInteractionPlayerProperties
struct ADBDPlayer_GetInteractionPlayerProperties_Params
{
	struct FInteractionPlayerProperties                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DeadByDaylight.DBDPlayer.GetInteractingMaxSpeedPercent
struct ADBDPlayer_GetInteractingMaxSpeedPercent_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.GetInteractable
struct ADBDPlayer_GetInteractable_Params
{
	class AInteractable*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.GetGuidingPlayer
struct ADBDPlayer_GetGuidingPlayer_Params
{
	class ADBDPlayer*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.GetForceDisableSkillChecks
struct ADBDPlayer_GetForceDisableSkillChecks_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.GetFirstComponentByClass
struct ADBDPlayer_GetFirstComponentByClass_Params
{
	class UClass*                                      ComponentClass;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UActorComponent*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.GetFeetPositionAtTargetLocation
struct ADBDPlayer_GetFeetPositionAtTargetLocation_Params
{
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.GetFeetPosition
struct ADBDPlayer_GetFeetPosition_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.GetFeetOnGround
struct ADBDPlayer_GetFeetOnGround_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.GetEnableServerPositionUpdates
struct ADBDPlayer_GetEnableServerPositionUpdates_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.GetDreamworldComponent
struct ADBDPlayer_GetDreamworldComponent_Params
{
	class UCharacterDreamworldComponent*               ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.GetDetectionZone
struct ADBDPlayer_GetDetectionZone_Params
{
	TEnumAsByte<EDetectionZone>                        detectionZoneID;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.GetDebugPrintAvailableInteractions
struct ADBDPlayer_GetDebugPrintAvailableInteractions_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.GetDebugFailAllInteractions
struct ADBDPlayer_GetDebugFailAllInteractions_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.GetDBDPlayerState
struct ADBDPlayer_GetDBDPlayerState_Params
{
	class ADBDPlayerState*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.GetCustomizedSkeletalMesh
struct ADBDPlayer_GetCustomizedSkeletalMesh_Params
{
	class UCustomizedSkeletalMesh*                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.GetCurrentInteractionAnimation
struct ADBDPlayer_GetCurrentInteractionAnimation_Params
{
	TEnumAsByte<EInteractionAnimation>                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.GetCurrentInteraction
struct ADBDPlayer_GetCurrentInteraction_Params
{
	class UInteractionDefinition*                      ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.GetCurrentAttackType
struct ADBDPlayer_GetCurrentAttackType_Params
{
	TEnumAsByte<EAttackType>                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.GetControlRotation
struct ADBDPlayer_GetControlRotation_Params
{
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.GetContinuousPrintDebug
struct ADBDPlayer_GetContinuousPrintDebug_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.GetChaseCooldownTimeElapsed
struct ADBDPlayer_GetChaseCooldownTimeElapsed_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.GetChaseCooldownDuration
struct ADBDPlayer_GetChaseCooldownDuration_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.GetCharacterSnappingComponent
struct ADBDPlayer_GetCharacterSnappingComponent_Params
{
	class UCharacterSnappingComponent*                 ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.GetCharacterNameAnimTag
struct ADBDPlayer_GetCharacterNameAnimTag_Params
{
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function DeadByDaylight.DBDPlayer.GetCharacterAudioSurfaceName
struct ADBDPlayer_GetCharacterAudioSurfaceName_Params
{
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function DeadByDaylight.DBDPlayer.GetCapsuleTopPosition
struct ADBDPlayer_GetCapsuleTopPosition_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.GetCapsuleBottomPosition
struct ADBDPlayer_GetCapsuleBottomPosition_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.GetCameraManager
struct ADBDPlayer_GetCameraManager_Params
{
	class ADBDPlayerCameraManager*                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.GetCameraLocation
struct ADBDPlayer_GetCameraLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.GetCameraAnchorLocation
struct ADBDPlayer_GetCameraAnchorLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.GetBoneRelativeLocation
struct ADBDPlayer_GetBoneRelativeLocation_Params
{
	struct FName                                       TargetBone;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       relativeBone;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.GetBoneLocation
struct ADBDPlayer_GetBoneLocation_Params
{
	struct FName                                       Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBoneSpaces>                           space;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.GetBlinkTime
struct ADBDPlayer_GetBlinkTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.GetBaseFOV
struct ADBDPlayer_GetBaseFOV_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.GetAverageVelocity
struct ADBDPlayer_GetAverageVelocity_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.GetAuthoritativeMovementComponent
struct ADBDPlayer_GetAuthoritativeMovementComponent_Params
{
	class UAuthoritativeMovementComponent*             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.GetAudioComponent
struct ADBDPlayer_GetAudioComponent_Params
{
	class UAkComponent*                                ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.GetAttackMontageEvent
struct ADBDPlayer_GetAttackMontageEvent_Params
{
	TEnumAsByte<EAttackType>                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.GetAttachPoint
struct ADBDPlayer_GetAttachPoint_Params
{
	struct FName                                       attachPointName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.GetAnimTags
struct ADBDPlayer_GetAnimTags_Params
{
	TArray<struct FName>                               outTags;                                                  // (Parm, OutParm, ZeroConstructor)
};

// Function DeadByDaylight.DBDPlayer.GetAnimInstanceConst
struct ADBDPlayer_GetAnimInstanceConst_Params
{
	class UAnimInstance*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.GetAnimInstance
struct ADBDPlayer_GetAnimInstance_Params
{
	class UAnimInstance*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.GetAnimData
struct ADBDPlayer_GetAnimData_Params
{
	struct FAnimData                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.GetAlmostCurrentVelocity
struct ADBDPlayer_GetAlmostCurrentVelocity_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.GetActorLocationFromFeetLocation
struct ADBDPlayer_GetActorLocationFromFeetLocation_Params
{
	struct FVector                                     FeetLocation;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.FindFurthestClearLocationBetweenPoints
struct ADBDPlayer_FindFurthestClearLocationBetweenPoints_Params
{
	struct FVector                                     StartPosition;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     targetPosition;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.EquipItem
struct ADBDPlayer_EquipItem_Params
{
};

// Function DeadByDaylight.DBDPlayer.Drop
struct ADBDPlayer_Drop_Params
{
	class ACollectable*                                Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               onDeath;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               adjustToGround;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.Dissolve
struct ADBDPlayer_Dissolve_Params
{
	bool                                               Dissolve;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.DetachInteractor
struct ADBDPlayer_DetachInteractor_Params
{
};

// Function DeadByDaylight.DBDPlayer.DebugPrint
struct ADBDPlayer_DebugPrint_Params
{
	class FString                                      inString;                                                 // (Parm, ZeroConstructor)
};

// Function DeadByDaylight.DBDPlayer.DeactivateSkillChecks
struct ADBDPlayer_DeactivateSkillChecks_Params
{
};

// Function DeadByDaylight.DBDPlayer.DBDUnCrouch
struct ADBDPlayer_DBDUnCrouch_Params
{
};

// Function DeadByDaylight.DBDPlayer.DBDLog
struct ADBDPlayer_DBDLog_Params
{
	class FString                                      LogText;                                                  // (Parm, ZeroConstructor)
};

// Function DeadByDaylight.DBDPlayer.DBDCrouch
struct ADBDPlayer_DBDCrouch_Params
{
};

// Function DeadByDaylight.DBDPlayer.DBD_TogglePrintServerPositionUpdateEnabled
struct ADBDPlayer_DBD_TogglePrintServerPositionUpdateEnabled_Params
{
};

// Function DeadByDaylight.DBDPlayer.DBD_ToggleForceAuthoritativeMovement
struct ADBDPlayer_DBD_ToggleForceAuthoritativeMovement_Params
{
};

// Function DeadByDaylight.DBDPlayer.DBD_ToggleDebugInteractionInZone
struct ADBDPlayer_DBD_ToggleDebugInteractionInZone_Params
{
};

// Function DeadByDaylight.DBDPlayer.DBD_SetMouseTurnSpeedMultiplier
struct ADBDPlayer_DBD_SetMouseTurnSpeedMultiplier_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.DBD_SetMouseLookUpSpeedMultiplier
struct ADBDPlayer_DBD_SetMouseLookUpSpeedMultiplier_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.DBD_SetGamePadTurnRate
struct ADBDPlayer_DBD_SetGamePadTurnRate_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.DBD_SetGamePadLookUpRate
struct ADBDPlayer_DBD_SetGamePadLookUpRate_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.DBD_DebugStartInteraction
struct ADBDPlayer_DBD_DebugStartInteraction_Params
{
};

// Function DeadByDaylight.DBDPlayer.ConsumeStamina
struct ADBDPlayer_ConsumeStamina_Params
{
	float                                              Stamina;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.Collect
struct ADBDPlayer_Collect_Params
{
	class ACollectable*                                Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.Client_TryInteractionType
struct ADBDPlayer_Client_TryInteractionType_Params
{
	TEnumAsByte<EInputInteractionType>                 InteractionType;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class ADBDPlayer*                                  Requester;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.Client_SendCancelInteraction
struct ADBDPlayer_Client_SendCancelInteraction_Params
{
};

// Function DeadByDaylight.DBDPlayer.Client_QueueInteraction
struct ADBDPlayer_Client_QueueInteraction_Params
{
	TEnumAsByte<EInputInteractionType>                 InteractionType;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class ADBDPlayer*                                  Requester;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              queuedTimer;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.Client_DebugAutoInteract
struct ADBDPlayer_Client_DebugAutoInteract_Params
{
	bool                                               Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.Client_ClearInteractionQueue
struct ADBDPlayer_Client_ClearInteractionQueue_Params
{
};

// Function DeadByDaylight.DBDPlayer.ClearAndDestroyInventory
struct ADBDPlayer_ClearAndDestroyInventory_Params
{
};

// Function DeadByDaylight.DBDPlayer.CanSprint
struct ADBDPlayer_CanSprint_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.CanInterrupt_BP
struct ADBDPlayer_CanInterrupt_BP_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.CanInteractWithItems
struct ADBDPlayer_CanInteractWithItems_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.CanInteract
struct ADBDPlayer_CanInteract_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.CanAttack_BP
struct ADBDPlayer_CanAttack_BP_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.CanAttack
struct ADBDPlayer_CanAttack_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.CameraUpdated
struct ADBDPlayer_CameraUpdated_Params
{
};

// Function DeadByDaylight.DBDPlayer.Broadcast_PlayMontage_Server
struct ADBDPlayer_Broadcast_PlayMontage_Server_Params
{
	struct FAnimationMontageDescriptor                 animMontageID;                                            // (Parm)
	float                                              PlayRate;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.Broadcast_PlayMontage_Multicast
struct ADBDPlayer_Broadcast_PlayMontage_Multicast_Params
{
	struct FAnimationMontageDescriptor                 animMontageID;                                            // (Parm)
	float                                              PlayRate;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.Broadcast_Multicast_BlinkDestination
struct ADBDPlayer_Broadcast_Multicast_BlinkDestination_Params
{
	struct FVector                                     Position;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.Broadcast_LockOnTarget_Server
struct ADBDPlayer_Broadcast_LockOnTarget_Server_Params
{
	class ADBDPlayer*                                  Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.Broadcast_LockOnTarget_Multicast
struct ADBDPlayer_Broadcast_LockOnTarget_Multicast_Params
{
	class ADBDPlayer*                                  Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.Broadcast_DamageTarget_Server
struct ADBDPlayer_Broadcast_DamageTarget_Server_Params
{
	class ADBDPlayer*                                  Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAttackType>                           attackType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.Broadcast_DamageTarget_Multicast
struct ADBDPlayer_Broadcast_DamageTarget_Multicast_Params
{
	class ADBDPlayer*                                  Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAttackType>                           attackType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.Broadcast_BlinkDestination
struct ADBDPlayer_Broadcast_BlinkDestination_Params
{
	struct FVector                                     Position;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.Broadcast_AttackSubstate_Server
struct ADBDPlayer_Broadcast_AttackSubstate_Server_Params
{
	TEnumAsByte<EAttackSubstate>                       attackSubstate;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.Broadcast_AttackSubstate_Multicast
struct ADBDPlayer_Broadcast_AttackSubstate_Multicast_Params
{
	TEnumAsByte<EAttackSubstate>                       attackSubstate;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.AuthorityTriggerSprintWithParams
struct ADBDPlayer_AuthorityTriggerSprintWithParams_Params
{
	float                                              duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              coolDown;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 Curve;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       effector;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.AuthorityTriggerSprint
struct ADBDPlayer_AuthorityTriggerSprint_Params
{
};

// Function DeadByDaylight.DBDPlayer.Authority_TryForceEndOngoingScoreEvent
struct ADBDPlayer_Authority_TryForceEndOngoingScoreEvent_Params
{
	TEnumAsByte<EDBDScoreTypes>                        ScoreType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.Authority_TryForceCancelOngoingScoreEvent
struct ADBDPlayer_Authority_TryForceCancelOngoingScoreEvent_Params
{
	TEnumAsByte<EDBDScoreTypes>                        ScoreType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.Authority_RequestStun
struct ADBDPlayer_Authority_RequestStun_Params
{
	TEnumAsByte<EStunType>                             stunType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class ADBDPlayer*                                  stunner;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.Authority_RemoveStatusEffectByID
struct ADBDPlayer_Authority_RemoveStatusEffectByID_Params
{
	struct FName                                       statusEffectID;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bRemoveAllWithID;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.Authority_ImposeUniqueStatusEffect
struct ADBDPlayer_Authority_ImposeUniqueStatusEffect_Params
{
	struct FName                                       statusEffectID;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class ADBDPlayer*                                  originatingPlayer;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              customParam;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UGameplayModifierContainer*                  originatingEffect;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStatusEffect*                               ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.Authority_ImposeStatusEffect
struct ADBDPlayer_Authority_ImposeStatusEffect_Params
{
	struct FName                                       statusEffectID;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class ADBDPlayer*                                  originatingPlayer;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              customParam;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UGameplayModifierContainer*                  originatingEffect;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStatusEffect*                               ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.Authority_ImposeDynamicStatusEffect
struct ADBDPlayer_Authority_ImposeDynamicStatusEffect_Params
{
	struct FName                                       statusEffectID;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class ADBDPlayer*                                  originatingPlayer;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              customParam;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UGameplayModifierContainer*                  originatingEffect;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStatusEffect*                               ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.Authority_Flashlighted
struct ADBDPlayer_Authority_Flashlighted_Params
{
	TArray<class AActor*>                              instigators;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function DeadByDaylight.DBDPlayer.Authority_Blinded
struct ADBDPlayer_Authority_Blinded_Params
{
	TEnumAsByte<EBlindType>                            blindType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              coolDown;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      effector;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.Authority_AttemptEscapeCarry
struct ADBDPlayer_Authority_AttemptEscapeCarry_Params
{
	class ACamperPlayer*                               Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.Authority_ActivateAuthoritativeMovementOnDropped
struct ADBDPlayer_Authority_ActivateAuthoritativeMovementOnDropped_Params
{
};

// Function DeadByDaylight.DBDPlayer.AttachInteractor
struct ADBDPlayer_AttachInteractor_Params
{
	class UInteractor*                                 Interactor;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.AddToInventory
struct ADBDPlayer_AddToInventory_Params
{
	class ACollectable*                                Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.AddStatusEffect
struct ADBDPlayer_AddStatusEffect_Params
{
	class UStatusEffect*                               StatusEffect;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.AddPerk
struct ADBDPlayer_AddPerk_Params
{
	class UPerk*                                       Perk;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayer.AddDetectionZone
struct ADBDPlayer_AddDetectionZone_Params
{
	TEnumAsByte<EDetectionZone>                        detectionZoneID;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         zone;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DeadByDaylight.AuthoritativeMovementComponent.SetPawnDetector
struct UAuthoritativeMovementComponent_SetPawnDetector_Params
{
	class UCapsuleComponent*                           pawnDetector;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DeadByDaylight.AuthoritativeMovementComponent.OnPawnDetectorOverlapExit
struct UAuthoritativeMovementComponent_OnPawnDetectorOverlapExit_Params
{
	class UPrimitiveComponent*                         HitComponent;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.AuthoritativeMovementComponent.OnPawnDetectorOverlapEnter
struct UAuthoritativeMovementComponent_OnPawnDetectorOverlapEnter_Params
{
	class UPrimitiveComponent*                         HitComponent;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function DeadByDaylight.AuthoritativeMovementComponent.OnOverlapExit
struct UAuthoritativeMovementComponent_OnOverlapExit_Params
{
	class UPrimitiveComponent*                         HitComponent;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.AuthoritativeMovementComponent.OnOverlapEnter
struct UAuthoritativeMovementComponent_OnOverlapEnter_Params
{
	class UPrimitiveComponent*                         HitComponent;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function DeadByDaylight.AxisFlickMasher.OnAxisFlicked2
struct UAxisFlickMasher_OnAxisFlicked2_Params
{
};

// Function DeadByDaylight.AxisFlickMasher.OnAxisFlicked1
struct UAxisFlickMasher_OnAxisFlicked1_Params
{
};

// Function DeadByDaylight.BaseProjectileLauncher.SetProjectileVar
struct UBaseProjectileLauncher_SetProjectileVar_Params
{
	struct FName                                       VarName;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.BaseProjectileLauncher.OnReload
struct UBaseProjectileLauncher_OnReload_Params
{
	int                                                ammo;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.BaseProjectileLauncher.OnLaunch
struct UBaseProjectileLauncher_OnLaunch_Params
{
	struct FLaunchInfo                                 LaunchInfo;                                               // (Parm)
};

// Function DeadByDaylight.BaseProjectileLauncher.Local_SetMaxAmmo
struct UBaseProjectileLauncher_Local_SetMaxAmmo_Params
{
	int                                                newMaxAmmo;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.BaseProjectileLauncher.Local_Reload
struct UBaseProjectileLauncher_Local_Reload_Params
{
	int                                                ammoToAdd;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.BaseProjectileLauncher.Local_Launch
struct UBaseProjectileLauncher_Local_Launch_Params
{
};

// Function DeadByDaylight.BaseProjectileLauncher.IsLocallyControlled
struct UBaseProjectileLauncher_IsLocallyControlled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.BaseProjectileLauncher.HasProjectile
struct UBaseProjectileLauncher_HasProjectile_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.BaseProjectileLauncher.HasAuthority
struct UBaseProjectileLauncher_HasAuthority_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.BaseProjectileLauncher.GetProjectileToLaunch
struct UBaseProjectileLauncher_GetProjectileToLaunch_Params
{
	class ABaseProjectile*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.BaseProjectileLauncher.GetPlayerOwner
struct UBaseProjectileLauncher_GetPlayerOwner_Params
{
	class ADBDPlayer*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.BaseProjectileLauncher.GetOldestProjectile
struct UBaseProjectileLauncher_GetOldestProjectile_Params
{
	class ABaseProjectile*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.BaseProjectileLauncher.GetMaxAmmo
struct UBaseProjectileLauncher_GetMaxAmmo_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.BaseProjectileLauncher.GetLaunchSpeed
struct UBaseProjectileLauncher_GetLaunchSpeed_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.BaseProjectileLauncher.GetLaunchPosition
struct UBaseProjectileLauncher_GetLaunchPosition_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.BaseProjectileLauncher.GetLaunchDirection
struct UBaseProjectileLauncher_GetLaunchDirection_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.BaseProjectileLauncher.GetFirstAvailableProjectile
struct UBaseProjectileLauncher_GetFirstAvailableProjectile_Params
{
	class ABaseProjectile*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.BaseProjectileLauncher.GetAmmo
struct UBaseProjectileLauncher_GetAmmo_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.BaseProjectileLauncher.Broadcast_SetMaxAmmo_Server
struct UBaseProjectileLauncher_Broadcast_SetMaxAmmo_Server_Params
{
	int8_t                                             newMaxAmmo;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.BaseProjectileLauncher.Broadcast_SetMaxAmmo_Multicast
struct UBaseProjectileLauncher_Broadcast_SetMaxAmmo_Multicast_Params
{
	int8_t                                             newMaxAmmo;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.BaseProjectileLauncher.Broadcast_Reload_Server
struct UBaseProjectileLauncher_Broadcast_Reload_Server_Params
{
	int8_t                                             ammoToAdd;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.BaseProjectileLauncher.Broadcast_Reload_Multicast
struct UBaseProjectileLauncher_Broadcast_Reload_Multicast_Params
{
	int8_t                                             ammoToAdd;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.BaseProjectileLauncher.Broadcast_Launch_Server
struct UBaseProjectileLauncher_Broadcast_Launch_Server_Params
{
	struct FLaunchInfo                                 LaunchInfo;                                               // (Parm)
};

// Function DeadByDaylight.BaseProjectileLauncher.Broadcast_Launch_Multicast
struct UBaseProjectileLauncher_Broadcast_Launch_Multicast_Params
{
	struct FLaunchInfo                                 LaunchInfo;                                               // (Parm)
};

// Function DeadByDaylight.BaseProjectileLauncher.Authority_OnProjectileDestroyed
struct UBaseProjectileLauncher_Authority_OnProjectileDestroyed_Params
{
	class AActor*                                      DestroyedActor;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.BaseProjectileLauncher.Authority_CleanProjectilePool
struct UBaseProjectileLauncher_Authority_CleanProjectilePool_Params
{
	class AActor*                                      DestroyedActor;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.BaseProjectile.SphereTraceSingle
struct ABaseProjectile_SphereTraceSingle_Params
{
	struct FVector                                     Start;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     End;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class USphereComponent*                            Sphere;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FHitResult                                  outHitResult;                                             // (Parm, OutParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.BaseProjectile.SetActive
struct ABaseProjectile_SetActive_Params
{
	bool                                               Active;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.BaseProjectile.OnSetActive
struct ABaseProjectile_OnSetActive_Params
{
	bool                                               Active;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.BaseProjectile.OnRep_ProjectileLauncher
struct ABaseProjectile_OnRep_ProjectileLauncher_Params
{
};

// Function DeadByDaylight.BaseProjectile.OnLaunch
struct ABaseProjectile_OnLaunch_Params
{
	struct FLaunchInfo                                 LaunchInfo;                                               // (Parm)
};

// Function DeadByDaylight.BaseProjectile.OnInitialize
struct ABaseProjectile_OnInitialize_Params
{
	class UBaseProjectileLauncher*                     projectileLauncher;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DeadByDaylight.BaseProjectile.OnDetectPlayer
struct ABaseProjectile_OnDetectPlayer_Params
{
	struct FImpactInfo                                 ImpactInfo;                                               // (Parm)
};

// Function DeadByDaylight.BaseProjectile.OnDetectCollision
struct ABaseProjectile_OnDetectCollision_Params
{
	struct FImpactInfo                                 ImpactInfo;                                               // (Parm)
};

// Function DeadByDaylight.BaseProjectile.Multicast_Launch
struct ABaseProjectile_Multicast_Launch_Params
{
	struct FLaunchInfo                                 LaunchInfo;                                               // (Parm)
};

// Function DeadByDaylight.BaseProjectile.Multicast_DetectPlayer
struct ABaseProjectile_Multicast_DetectPlayer_Params
{
	struct FImpactInfo                                 ImpactInfo;                                               // (Parm)
};

// Function DeadByDaylight.BaseProjectile.Multicast_DetectImpact
struct ABaseProjectile_Multicast_DetectImpact_Params
{
	struct FImpactInfo                                 ImpactInfo;                                               // (Parm)
};

// Function DeadByDaylight.BaseProjectile.LineTraceSingle
struct ABaseProjectile_LineTraceSingle_Params
{
	struct FVector                                     Start;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     End;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  outHitResult;                                             // (Parm, OutParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.BaseProjectile.IsValidPlayerDetection
struct ABaseProjectile_IsValidPlayerDetection_Params
{
	struct FImpactInfo                                 ImpactInfo;                                               // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.BaseProjectile.IsValidImpactDetection
struct ABaseProjectile_IsValidImpactDetection_Params
{
	struct FImpactInfo                                 ImpactInfo;                                               // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.BaseProjectile.IsAvailable
struct ABaseProjectile_IsAvailable_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.BaseProjectile.IsActive
struct ABaseProjectile_IsActive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.BaseProjectile.GetProjectileLauncher
struct ABaseProjectile_GetProjectileLauncher_Params
{
	class UBaseProjectileLauncher*                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function DeadByDaylight.BaseProjectile.GetImpactPrimitiveComponent
struct ABaseProjectile_GetImpactPrimitiveComponent_Params
{
	class UPrimitiveComponent*                         ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function DeadByDaylight.BaseProjectile.GetImpactCollisionResponseContainer
struct ABaseProjectile_GetImpactCollisionResponseContainer_Params
{
	struct FCollisionResponseContainer                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DeadByDaylight.BaseProjectile.GetImpactCollisionObjectType
struct ABaseProjectile_GetImpactCollisionObjectType_Params
{
	TEnumAsByte<ECollisionChannel>                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.BaseProjectile.Authority_TryDetectPlayer
struct ABaseProjectile_Authority_TryDetectPlayer_Params
{
	struct FImpactInfo                                 ImpactInfo;                                               // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.BaseProjectile.Authority_TryDetectCollision
struct ABaseProjectile_Authority_TryDetectCollision_Params
{
	struct FImpactInfo                                 ImpactInfo;                                               // (Parm)
	bool                                               Force;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.BaseProjectile.Authority_Launch
struct ABaseProjectile_Authority_Launch_Params
{
	struct FLaunchInfo                                 LaunchInfo;                                               // (Parm)
};

// Function DeadByDaylight.Fadeable.OnFadeEnd
struct UFadeable_OnFadeEnd_Params
{
	class AActor*                                      Other;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.Fadeable.OnFadeBegin
struct UFadeable_OnFadeBegin_Params
{
	class AActor*                                      Other;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.Fadeable.OnAlphaChanged
struct UFadeable_OnAlphaChanged_Params
{
	float                                              newAlpha;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Other;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.BaseSky.SetCullDistance
struct ABaseSky_SetCullDistance_Params
{
	float                                              NewCullDistance;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.BaseSky.OnFadeEnd
struct ABaseSky_OnFadeEnd_Params
{
	class AActor*                                      Other;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.BaseSky.OnFadeBegin
struct ABaseSky_OnFadeBegin_Params
{
	class AActor*                                      Other;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.BaseSky.OnAlphaChanged
struct ABaseSky_OnAlphaChanged_Params
{
	float                                              newAlpha;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Other;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.BaseSky.GetPostprocessComponent
struct ABaseSky_GetPostprocessComponent_Params
{
	class UPostProcessComponent*                       ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function DeadByDaylight.BlinkerComponent.UpdateTargetLocation
struct UBlinkerComponent_UpdateTargetLocation_Params
{
	class ADBDPlayer*                                  Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              blinkDistance;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<float>                                      scanPercentLocations;                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.BlinkerComponent.SetBlinkerState
struct UBlinkerComponent_SetBlinkerState_Params
{
	TEnumAsByte<EBlinkerState>                         blinkerState;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.BlinkerComponent.LocalAddRandomToTargetLocation
struct UBlinkerComponent_LocalAddRandomToTargetLocation_Params
{
	class ADBDPlayer*                                  Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TargetLocation;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.BlinkerComponent.IsReady
struct UBlinkerComponent_IsReady_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.BlinkerComponent.GetBlinkerState
struct UBlinkerComponent_GetBlinkerState_Params
{
	TEnumAsByte<EBlinkerState>                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.BlinkerComponent.GetAutomaticBlinkDelay
struct UBlinkerComponent_GetAutomaticBlinkDelay_Params
{
	int                                                chainBlinkCount;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.BloodwebManager.Init
struct UBloodwebManager_Init_Params
{
	class UDBDGameInstance*                            GameInstance;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UDBDDesignTunables*                          Tunables;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayerData.SetLoadoutSpawned
struct UDBDPlayerData_SetLoadoutSpawned_Params
{
};

// Function DeadByDaylight.DBDPlayerData.SetLightSpawned
struct UDBDPlayerData_SetLightSpawned_Params
{
};

// Function DeadByDaylight.DBDPlayerData.SetIntroCompleted
struct UDBDPlayerData_SetIntroCompleted_Params
{
};

// Function DeadByDaylight.DBDPlayerData.Server_SetIntroCompleted
struct UDBDPlayerData_Server_SetIntroCompleted_Params
{
};

// Function DeadByDaylight.DBDPlayerData.Server_SetControlRotation
struct UDBDPlayerData_Server_SetControlRotation_Params
{
	struct FRotator                                    Rotation;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayerData.Server_LoadoutSpawned
struct UDBDPlayerData_Server_LoadoutSpawned_Params
{
};

// Function DeadByDaylight.DBDPlayerData.Server_LightSpawned
struct UDBDPlayerData_Server_LightSpawned_Params
{
};

// Function DeadByDaylight.DBDPlayerData.IsLoadoutSpawned
struct UDBDPlayerData_IsLoadoutSpawned_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayerData.IsLightSpawned
struct UDBDPlayerData_IsLightSpawned_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayerData.IsIntroCompleted
struct UDBDPlayerData_IsIntroCompleted_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayerData.GetUseInputPressed
struct UDBDPlayerData_GetUseInputPressed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayerData.GetLeftRightInputMashed
struct UDBDPlayerData_GetLeftRightInputMashed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayerData.GetInteractionInputMashed
struct UDBDPlayerData_GetInteractionInputMashed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayerData.GetControlRotation
struct UDBDPlayerData_GetControlRotation_Params
{
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDCamperData.GetDamageState
struct UDBDCamperData_GetDamageState_Params
{
	TEnumAsByte<ECamperDamageState>                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDCamperData.DamageStateChanged
struct UDBDCamperData_DamageStateChanged_Params
{
};

// Function DeadByDaylight.CamperAnimInstance.NativeAudioSurvivorFootstepRight
struct UCamperAnimInstance_NativeAudioSurvivorFootstepRight_Params
{
	class UAkAudioEvent*                               akEvent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               akEventNoise;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.CamperAnimInstance.NativeAudioSurvivorFootstepLeft
struct UCamperAnimInstance_NativeAudioSurvivorFootstepLeft_Params
{
	class UAkAudioEvent*                               akEvent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               akEventNoise;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.CamperAnimInstance.IsUsingDeadHard
struct UCamperAnimInstance_IsUsingDeadHard_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.CamperExposerInstance.StartSpawnSequence
struct ACamperExposerInstance_StartSpawnSequence_Params
{
};

// Function DeadByDaylight.CamperExposerInstance.StartExitSequence
struct ACamperExposerInstance_StartExitSequence_Params
{
};

// Function DeadByDaylight.CamperExposerInstance.SetIsInteriorBP
struct ACamperExposerInstance_SetIsInteriorBP_Params
{
	bool                                               interior;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.CamperExposerInstance.ExitSequenceComplete
struct ACamperExposerInstance_ExitSequenceComplete_Params
{
};

// Function DeadByDaylight.CharacterDreamworldComponent.UpdateCharacterCollision
struct UCharacterDreamworldComponent_UpdateCharacterCollision_Params
{
};

// Function DeadByDaylight.CharacterDreamworldComponent.ShouldShowVignette
struct UCharacterDreamworldComponent_ShouldShowVignette_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.CharacterDreamworldComponent.ShouldShowKillerGlimpse
struct UCharacterDreamworldComponent_ShouldShowKillerGlimpse_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.CharacterDreamworldComponent.ShouldLookSleepyToLocalPlayer
struct UCharacterDreamworldComponent_ShouldLookSleepyToLocalPlayer_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.CharacterDreamworldComponent.Server_WakeUp
struct UCharacterDreamworldComponent_Server_WakeUp_Params
{
};

// Function DeadByDaylight.CharacterDreamworldComponent.Server_PutToSleep
struct UCharacterDreamworldComponent_Server_PutToSleep_Params
{
};

// Function DeadByDaylight.CharacterDreamworldComponent.OnSlasherSet
struct UCharacterDreamworldComponent_OnSlasherSet_Params
{
};

// Function DeadByDaylight.CharacterDreamworldComponent.OnRep_IsInDreamworld
struct UCharacterDreamworldComponent_OnRep_IsInDreamworld_Params
{
	bool                                               Previous;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.CharacterDreamworldComponent.OnKillerDreamStateChanged
struct UCharacterDreamworldComponent_OnKillerDreamStateChanged_Params
{
	bool                                               locallyObservedChanged;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.CharacterDreamworldComponent.IsInDreamworld
struct UCharacterDreamworldComponent_IsInDreamworld_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.CharacterDreamworldComponent.IsInBetweenWorlds
struct UCharacterDreamworldComponent_IsInBetweenWorlds_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.CharacterDreamworldComponent.GetLocallyObservedOrLocalCharacter
struct UCharacterDreamworldComponent_GetLocallyObservedOrLocalCharacter_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class ADBDPlayer*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.CharacterDreamworldComponent.GetInBetweenWorldsPercentTimeElapsed
struct UCharacterDreamworldComponent_GetInBetweenWorldsPercentTimeElapsed_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.CharacterDreamworldComponent.FireWakeUpScoreEvent
struct UCharacterDreamworldComponent_FireWakeUpScoreEvent_Params
{
	class ADBDPlayer*                                  Instigator;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.CharacterDreamworldComponent.Authority_WakeUpOrCancelTransition
struct UCharacterDreamworldComponent_Authority_WakeUpOrCancelTransition_Params
{
	class ADBDPlayer*                                  Instigator;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.CharacterDreamworldComponent.Authority_SpawnInBetweenWorldsEffect
struct UCharacterDreamworldComponent_Authority_SpawnInBetweenWorldsEffect_Params
{
};

// Function DeadByDaylight.CharacterDreamworldComponent.Authority_SpawnDreamworldStatusEffect
struct UCharacterDreamworldComponent_Authority_SpawnDreamworldStatusEffect_Params
{
};

// Function DeadByDaylight.CharacterDreamworldComponent.Authority_SetIsInDreamworld
struct UCharacterDreamworldComponent_Authority_SetIsInDreamworld_Params
{
	bool                                               NewValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               isScripted;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.CharacterDreamworldComponent.Authority_OnAttacked
struct UCharacterDreamworldComponent_Authority_OnAttacked_Params
{
};

// Function DeadByDaylight.CharacterDreamworldComponent.Authority_HandleSkillCheckFailure
struct UCharacterDreamworldComponent_Authority_HandleSkillCheckFailure_Params
{
	bool                                               wakeUpEveryoneInteracting;                                // (Parm, ZeroConstructor, IsPlainOldData)
	class ADBDPlayer*                                  Instigator;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.CharacterDreamworldComponent.Authority_GetWakeUpBySkillCheckCount
struct UCharacterDreamworldComponent_Authority_GetWakeUpBySkillCheckCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.CharacterDreamworldComponent.Authority_GetFellAsleepCount
struct UCharacterDreamworldComponent_Authority_GetFellAsleepCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.CharacterStatsHandlerComponent.ReceiveGameEvent
struct UCharacterStatsHandlerComponent_ReceiveGameEvent_Params
{
	TEnumAsByte<EDBDScoreTypes>                        ScoreType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Instigator;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.CharacterStatsHandlerComponent.InitializePreMatchStats
struct UCharacterStatsHandlerComponent_InitializePreMatchStats_Params
{
};

// Function DeadByDaylight.CharacterStatsHandlerComponent.GetStatValue
struct UCharacterStatsHandlerComponent_GetStatValue_Params
{
	struct FName                                       StatName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               isCharacterSpecific;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.ChargeableComponent.SetSecondsToCharge
struct UChargeableComponent_SetSecondsToCharge_Params
{
	float                                              SecondsToCharge;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.ChargeableComponent.Reset
struct UChargeableComponent_Reset_Params
{
};

// Function DeadByDaylight.ChargeableComponent.Multicast_UpdateChargeAndSpeed
struct UChargeableComponent_Multicast_UpdateChargeAndSpeed_Params
{
	float                                              charge;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Speed;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.ChargeableComponent.Multicast_OnEmptied
struct UChargeableComponent_Multicast_OnEmptied_Params
{
};

// Function DeadByDaylight.ChargeableComponent.Multicast_OnCompleteChanged
struct UChargeableComponent_Multicast_OnCompleteChanged_Params
{
	bool                                               COMPLETED;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.ChargeableComponent.IsSkillCheckTimePenaltyActive
struct UChargeableComponent_IsSkillCheckTimePenaltyActive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.ChargeableComponent.HasPlayerDoneSkillCheck
struct UChargeableComponent_HasPlayerDoneSkillCheck_Params
{
	int                                                PlayerId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.ChargeableComponent.GetTunableValue
struct UChargeableComponent_GetTunableValue_Params
{
	struct FName                                       TunableValueID;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.ChargeableComponent.GetPercentComplete
struct UChargeableComponent_GetPercentComplete_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.ChargeableComponent.GetMaxCharge
struct UChargeableComponent_GetMaxCharge_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.ChargeableComponent.GetCurrentCharge
struct UChargeableComponent_GetCurrentCharge_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.ChargeableComponent.GetComplete
struct UChargeableComponent_GetComplete_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.ChargeableComponent.GetChargeRemaining
struct UChargeableComponent_GetChargeRemaining_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.ChargeableComponent.AddChargePercent
struct UChargeableComponent_AddChargePercent_Params
{
	float                                              ChargePercent;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Instigator;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.ChargeableComponent.AddCharge
struct UChargeableComponent_AddCharge_Params
{
	float                                              ChargeAmount;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Instigator;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.ChargerComponent.UseEnergy
struct UChargerComponent_UseEnergy_Params
{
	float                                              seconds;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              energyUseModifier;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.ChargerComponent.SetNormalizedEnergyLevel
struct UChargerComponent_SetNormalizedEnergyLevel_Params
{
	float                                              energyLevel;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.ChargerComponent.SetMaxEnergyLevel
struct UChargerComponent_SetMaxEnergyLevel_Params
{
	float                                              energyLevel;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.ChargerComponent.SetEnergyLevel
struct UChargerComponent_SetEnergyLevel_Params
{
	float                                              energyLevel;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.ChargerComponent.Reset
struct UChargerComponent_Reset_Params
{
};

// Function DeadByDaylight.ChargerComponent.OnRep_EnergyLevel
struct UChargerComponent_OnRep_EnergyLevel_Params
{
	float                                              previousEnergyLevel;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.ChargerComponent.HasCharge
struct UChargerComponent_HasCharge_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.ChargerComponent.GetNormalizedEnergyLevel
struct UChargerComponent_GetNormalizedEnergyLevel_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.ChargerComponent.GetMaxEnergyLevel
struct UChargerComponent_GetMaxEnergyLevel_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.ChargerComponent.GetEnergyLevel
struct UChargerComponent_GetEnergyLevel_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.ChatManager.Multicast_DisplayMessage
struct AChatManager_Multicast_DisplayMessage_Params
{
	int                                                playerIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      PlayerName;                                               // (Parm, ZeroConstructor)
	class FString                                      msg;                                                      // (Parm, ZeroConstructor)
};

// Function DeadByDaylight.DBDClipRegionComponent.NotifyShouldClipComponent
struct UDBDClipRegionComponent_NotifyShouldClipComponent_Params
{
	class UMeshComponent*                              InMeshComponent;                                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DeadByDaylight.DBDClipRegionComponent.ClipDistance
struct UDBDClipRegionComponent_ClipDistance_Params
{
	class UMeshComponent*                              InMeshComponent;                                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDClipRegionComponent.ApplyClipToDynamicMaterial
struct UDBDClipRegionComponent_ApplyClipToDynamicMaterial_Params
{
	class UMaterialInstanceDynamic*                    dynamicInstanceToClip;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                InRegionID;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDClipRegionComponent.ApplyClip
struct UDBDClipRegionComponent_ApplyClip_Params
{
	class UMaterialInstanceDynamic*                    InMaterial2clip;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                InRegionID;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDClipRegionComponent.ApplyArrayOfClipsToDynamicMaterial
struct UDBDClipRegionComponent_ApplyArrayOfClipsToDynamicMaterial_Params
{
	TArray<class UDBDClipRegionComponent*>             InRegions;                                                // (Parm, ZeroConstructor)
	class UMaterialInstanceDynamic*                    dynamicInstanceToClip;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.ClipManager.SphericalDissolveAt
struct AClipManager_SphericalDissolveAt_Params
{
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.ClipManager.RemoveDissolveMaterials
struct AClipManager_RemoveDissolveMaterials_Params
{
};

// Function DeadByDaylight.ClosetAnalytics.RecordClosetSearchSuccess
struct UClosetAnalytics_RecordClosetSearchSuccess_Params
{
	class ASlasherPlayer*                              killer;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.ClosetAnalytics.RecordClosetSearchFail
struct UClosetAnalytics_RecordClosetSearchFail_Params
{
	class ASlasherPlayer*                              killer;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.ClosetAnalytics.IncrementClosetEnter
struct UClosetAnalytics_IncrementClosetEnter_Params
{
	class ACamperPlayer*                               survivor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.CustomizedSkeletalMesh.SetVfxsVisibility
struct UCustomizedSkeletalMesh_SetVfxsVisibility_Params
{
	TEnumAsByte<ECustomizationCategory>                Category;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Visible;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.CustomizedSkeletalMesh.SetMeshOwner
struct UCustomizedSkeletalMesh_SetMeshOwner_Params
{
	class USkeletalMeshComponent*                      Mesh;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DeadByDaylight.CustomizedSkeletalMesh.SetAllVfxsVisibility
struct UCustomizedSkeletalMesh_SetAllVfxsVisibility_Params
{
	bool                                               Visible;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.CustomizedSkeletalMesh.GetSkeletalMesh
struct UCustomizedSkeletalMesh_GetSkeletalMesh_Params
{
	TEnumAsByte<ECustomizationCategory>                Category;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function DeadByDaylight.CustomizedSkeletalMesh.GetMeshOwner
struct UCustomizedSkeletalMesh_GetMeshOwner_Params
{
	class USkeletalMeshComponent*                      ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function DeadByDaylight.CustomizedSkeletalMesh.GetComponents
struct UCustomizedSkeletalMesh_GetComponents_Params
{
	TArray<class USkeletalMeshComponent*>              ReturnValue;                                              // (ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function DeadByDaylight.CustomizedSkeletalMesh.CopyCustomization
struct UCustomizedSkeletalMesh_CopyCustomization_Params
{
	class UCustomizedSkeletalMesh*                     copyFrom;                                                 // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DeadByDaylight.CustomizedSkeletalMesh.ClearAllVfxs
struct UCustomizedSkeletalMesh_ClearAllVfxs_Params
{
};

// Function DeadByDaylight.DBD_CrossDissolver.MakeClone
struct UDBD_CrossDissolver_MakeClone_Params
{
};

// Function DeadByDaylight.DBD_CrossDissolver.KillClone
struct UDBD_CrossDissolver_KillClone_Params
{
};

// Function DeadByDaylight.DBD_SoundClipUtil.OnGotMeshToTriggerSound
struct UDBD_SoundClipUtil_OnGotMeshToTriggerSound_Params
{
	class UStaticMeshComponent*                        usm;                                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DeadByDaylight.DBD_SoundClipUtil.OnCharacterEnterSoundRegion
struct UDBD_SoundClipUtil_OnCharacterEnterSoundRegion_Params
{
	class UPrimitiveComponent*                         HitComponent;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function DeadByDaylight.DBD_SoundClipUtil.GetAudioEventForMesh
struct UDBD_SoundClipUtil_GetAudioEventForMesh_Params
{
	class UStaticMeshComponent*                        usm;                                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAkAudioEvent*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBD_SoundEventSpawner.OnSoundTriggered
struct ADBD_SoundEventSpawner_OnSoundTriggered_Params
{
	class AActor*                                      originator;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               shouldTrack;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              audibleRange;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBD_SoundEventSpawner.AssetsLoaded
struct ADBD_SoundEventSpawner_AssetsLoaded_Params
{
};

// Function DeadByDaylight.DBD_SpiderThing.RebuildLines
struct ADBD_SpiderThing_RebuildLines_Params
{
};

// Function DeadByDaylight.DBD_SpiderThing.RandomTrace
struct ADBD_SpiderThing_RandomTrace_Params
{
	struct FHitResult                                  out_result;                                               // (Parm, OutParm, IsPlainOldData)
};

// Function DeadByDaylight.DBD_SpiderThing.CreateLine
struct ADBD_SpiderThing_CreateLine_Params
{
};

// Function DeadByDaylight.DBD_SpiderThingComponent.RebuildLines
struct UDBD_SpiderThingComponent_RebuildLines_Params
{
};

// Function DeadByDaylight.DBD_SpiderThingComponent.RandomTrace
struct UDBD_SpiderThingComponent_RandomTrace_Params
{
	struct FHitResult                                  out_result;                                               // (Parm, OutParm, IsPlainOldData)
};

// Function DeadByDaylight.DBD_SpiderThingComponent.CreateLine
struct UDBD_SpiderThingComponent_CreateLine_Params
{
};

// Function DeadByDaylight.DBDAIPlayerController.StartCharacterBehaviour
struct ADBDAIPlayerController_StartCharacterBehaviour_Params
{
	class UClass*                                      behaviourClass;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UAICharacterBehaviourData*                   characterBehaviourData;                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDAIPlayerController.SetCharacterMovement
struct ADBDAIPlayerController_SetCharacterMovement_Params
{
	TEnumAsByte<ECharacterMovementTypes>               movementTypes;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDAIPlayerController.PauseCharacterBehaviour
struct ADBDAIPlayerController_PauseCharacterBehaviour_Params
{
	class UClass*                                      behaviourClass;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDAIPlayerController.InteractRequest
struct ADBDAIPlayerController_InteractRequest_Params
{
};

// Function DeadByDaylight.DBDAIPlayerController.FastInteractRequest
struct ADBDAIPlayerController_FastInteractRequest_Params
{
};

// Function DeadByDaylight.DBDAIPlayerController.AttackRequest
struct ADBDAIPlayerController_AttackRequest_Params
{
};

// Function DeadByDaylight.DBDAudioUtils.DBDLoadBank
struct ADBDAudioUtils_DBDLoadBank_Params
{
	class UAkAudioBank*                                bank;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDBaseHud.ShowVersionNumber
struct ADBDBaseHud_ShowVersionNumber_Params
{
	bool                                               ShouldShow;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDBaseHud.ShowAnimHudBP
struct ADBDBaseHud_ShowAnimHudBP_Params
{
};

// Function DeadByDaylight.DBDBaseHud.ShowAnimHud
struct ADBDBaseHud_ShowAnimHud_Params
{
	bool                                               show;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDBaseHud.ShouldDrawAnimHud
struct ADBDBaseHud_ShouldDrawAnimHud_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.EscapeRequirementTracker.OnGameplayEvent
struct UEscapeRequirementTracker_OnGameplayEvent_Params
{
	TEnumAsByte<EDBDScoreTypes>                        gameplayEventType;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Instigator;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameMode.SetEscapeOpened
struct ADBDGameMode_SetEscapeOpened_Params
{
	bool                                               Val;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameMode.LevelLoaded
struct ADBDGameMode_LevelLoaded_Params
{
	class FString                                      levelName;                                                // (Parm, ZeroConstructor)
};

// Function DeadByDaylight.DBDGameMode.IsEscapeOpen
struct ADBDGameMode_IsEscapeOpen_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameMode.HostGame
struct ADBDGameMode_HostGame_Params
{
};

// Function DeadByDaylight.DBDGameMode.GetElapsedMatchTime
struct ADBDGameMode_GetElapsedMatchTime_Params
{
	struct FTimespan                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function DeadByDaylight.DBDGameMode.DBD_BlockCamperEscape
struct ADBDGameMode_DBD_BlockCamperEscape_Params
{
	float                                              duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameMode.AreLoadoutsCreated
struct ADBDGameMode_AreLoadoutsCreated_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.Interactable.SetInteractorsUsable
struct AInteractable_SetInteractorsUsable_Params
{
	bool                                               usable;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UInteractor*                                 exception;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DeadByDaylight.Interactable.PreInterruptionEvent
struct AInteractable_PreInterruptionEvent_Params
{
	class ADBDPlayer*                                  interruptor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class ADBDPlayer*                                  interruptee;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UInterruptionDefinition*                     interruption;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DeadByDaylight.Interactable.OnLevelReadyToPlay
struct AInteractable_OnLevelReadyToPlay_Params
{
};

// Function DeadByDaylight.Interactable.IsReadyForInteractableInit
struct AInteractable_IsReadyForInteractableInit_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.Interactable.IsInterruptionPossible
struct AInteractable_IsInterruptionPossible_Params
{
	class ADBDPlayer*                                  interruptor;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class ADBDPlayer*                                  interruptee;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UInteractor*                                 Interactor;                                               // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UInteractionDefinition*                      definition;                                               // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UInterruptionDefinition*                     interruption;                                             // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.Interactable.IsInteractionPossibleInternal
struct AInteractable_IsInteractionPossibleInternal_Params
{
	class ADBDPlayer*                                  Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UInteractor*                                 Interactor;                                               // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UInteractionDefinition*                      definition;                                               // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	TEnumAsByte<EInputInteractionType>                 InteractionType;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.Interactable.IsInteractionDone
struct AInteractable_IsInteractionDone_Params
{
	class ADBDPlayer*                                  Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UInteractor*                                 Interactor;                                               // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UInteractionDefinition*                      definition;                                               // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	TEnumAsByte<EInputInteractionType>                 InteractionType;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.Interactable.InteractableInit
struct AInteractable_InteractableInit_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.Interactable.HasInteractableInitializedBeenCalled
struct AInteractable_HasInteractableInitializedBeenCalled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.Interactable.HasAnOngoingInteraction
struct AInteractable_HasAnOngoingInteraction_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.Interactable.GetPlayerOwner
struct AInteractable_GetPlayerOwner_Params
{
	class ADBDPlayer*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.Interactable.GetInteractors
struct AInteractable_GetInteractors_Params
{
	TArray<class UInteractor*>                         ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function DeadByDaylight.Interactable.GetInteractingPlayers
struct AInteractable_GetInteractingPlayers_Params
{
	TArray<class ADBDPlayer*>                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function DeadByDaylight.Interactable.GetFocalPointPosition
struct AInteractable_GetFocalPointPosition_Params
{
	class ADBDPlayer*                                  Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UInteractionDefinition*                      definition;                                               // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.Interactable.AuthorityRequestCancelOngoingInteractions
struct AInteractable_AuthorityRequestCancelOngoingInteractions_Params
{
	bool                                               onlyOnHitCancelableInteractions;                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.Interactable.Authority_UpdateLit
struct AInteractable_Authority_UpdateLit_Params
{
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      effector;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.ItemModifier.HandleIncreaseMaxCharge
struct UItemModifier_HandleIncreaseMaxCharge_Params
{
};

// Function DeadByDaylight.ItemModifier.HandleIncreaseItemCount
struct UItemModifier_HandleIncreaseItemCount_Params
{
};

// Function DeadByDaylight.ItemModifier.HandleIncreaseCharge
struct UItemModifier_HandleIncreaseCharge_Params
{
};

// Function DeadByDaylight.ItemModifier.GetOwningPlayer
struct UItemModifier_GetOwningPlayer_Params
{
	class ADBDPlayer*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.ItemModifier.GetItemMaxEnergy
struct UItemModifier_GetItemMaxEnergy_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.ItemModifier.GetItemEnergy
struct UItemModifier_GetItemEnergy_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.ItemModifier.GetItemCount
struct UItemModifier_GetItemCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.ItemModifier.GetGameplayModifierData
struct UItemModifier_GetGameplayModifierData_Params
{
	struct FGameplayModifierData                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DeadByDaylight.ItemModifier.GetConstGameplayModifierData
struct UItemModifier_GetConstGameplayModifierData_Params
{
	struct FGameplayModifierData                       ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)
};

// Function DeadByDaylight.ItemModifier.GetBaseItem
struct UItemModifier_GetBaseItem_Params
{
	class ACollectable*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.ItemModifier.AuthoritySetItemMaxEnergy
struct UItemModifier_AuthoritySetItemMaxEnergy_Params
{
	float                                              energy;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.ItemModifier.AuthoritySetItemEnergy
struct UItemModifier_AuthoritySetItemEnergy_Params
{
	float                                              energy;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.ItemModifier.AuthoritySetItemCount
struct UItemModifier_AuthoritySetItemCount_Params
{
	int                                                itemCount;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.ItemAddon.OnPostItemAddonsCreation
struct UItemAddon_OnPostItemAddonsCreation_Params
{
	class ADBDPlayer*                                  Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class ACollectable*                                Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.ItemAddon.Multicast_SetBaseItem
struct UItemAddon_Multicast_SetBaseItem_Params
{
	class ACollectable*                                baseItem;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.ItemAddon.Multicast_InitializeItemAddon
struct UItemAddon_Multicast_InitializeItemAddon_Params
{
};

// Function DeadByDaylight.ItemAddon.Multicast_AddAddonToItem
struct UItemAddon_Multicast_AddAddonToItem_Params
{
	class ACollectable*                                Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.ItemAddon.IsReadyForInitialization
struct UItemAddon_IsReadyForInitialization_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.ItemAddon.InitializeAddon
struct UItemAddon_InitializeAddon_Params
{
};

// Function DeadByDaylight.ItemAddon.GetOwningPlayer
struct UItemAddon_GetOwningPlayer_Params
{
	class ADBDPlayer*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.ItemAddon.GetInventoryItemType
struct UItemAddon_GetInventoryItemType_Params
{
	TEnumAsByte<EInventoryItemType>                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.ItemAddon.GetBaseItem
struct UItemAddon_GetBaseItem_Params
{
	class ACollectable*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.ItemAddon.Authority_OnCollectablePickedUp
struct UItemAddon_Authority_OnCollectablePickedUp_Params
{
	class ADBDPlayer*                                  Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.ItemAddon.Authority_OnCollectableDropped
struct UItemAddon_Authority_OnCollectableDropped_Params
{
	class ADBDPlayer*                                  Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.ItemAddon.ApplyMetaModifiers
struct UItemAddon_ApplyMetaModifiers_Params
{
};

// Function DeadByDaylight.Collectable.Use
struct ACollectable_Use_Params
{
};

// Function DeadByDaylight.Collectable.SetItemInteractor
struct ACollectable_SetItemInteractor_Params
{
	class UInteractor*                                 Interactor;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DeadByDaylight.Collectable.SetCount
struct ACollectable_SetCount_Params
{
	int                                                Count;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.Collectable.OnUseReleased
struct ACollectable_OnUseReleased_Params
{
};

// Function DeadByDaylight.Collectable.OnUse
struct ACollectable_OnUse_Params
{
};

// Function DeadByDaylight.Collectable.OnRep_BegunPlayFenceName
struct ACollectable_OnRep_BegunPlayFenceName_Params
{
};

// Function DeadByDaylight.Collectable.OnPostItemAddonsCreation
struct ACollectable_OnPostItemAddonsCreation_Params
{
	class ADBDPlayer*                                  Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.Collectable.OnFenceInitialized
struct ACollectable_OnFenceInitialized_Params
{
};

// Function DeadByDaylight.Collectable.OnDropped
struct ACollectable_OnDropped_Params
{
};

// Function DeadByDaylight.Collectable.OnCollected
struct ACollectable_OnCollected_Params
{
	class ADBDPlayer*                                  collector;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.Collectable.NotifyUpdated
struct ACollectable_NotifyUpdated_Params
{
};

// Function DeadByDaylight.Collectable.Multicast_UseReleased
struct ACollectable_Multicast_UseReleased_Params
{
};

// Function DeadByDaylight.Collectable.Multicast_Use
struct ACollectable_Multicast_Use_Params
{
};

// Function DeadByDaylight.Collectable.Multicast_RemoveItemAddon
struct ACollectable_Multicast_RemoveItemAddon_Params
{
	class UItemAddon*                                  addon;                                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DeadByDaylight.Collectable.Multicast_Dropped
struct ACollectable_Multicast_Dropped_Params
{
	class ADBDPlayer*                                  droppedBy;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function DeadByDaylight.Collectable.Multicast_Collected
struct ACollectable_Multicast_Collected_Params
{
	class ADBDPlayer*                                  collector;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.Collectable.IsStored
struct ACollectable_IsStored_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.Collectable.IsRechargeable
struct ACollectable_IsRechargeable_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.Collectable.IsOnGround
struct ACollectable_IsOnGround_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.Collectable.IsEquipped
struct ACollectable_IsEquipped_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.Collectable.IsCountDisplayForced
struct ACollectable_IsCountDisplayForced_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.Collectable.IsCollected
struct ACollectable_IsCollected_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.Collectable.HasGameplayModifierFlag
struct ACollectable_HasGameplayModifierFlag_Params
{
	struct FGameplayTag                                modifierFlag;                                             // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.Collectable.GetUsePercentLeft
struct ACollectable_GetUsePercentLeft_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.Collectable.GetModifierSum
struct ACollectable_GetModifierSum_Params
{
	struct FGameplayTag                                ModifierType;                                             // (Parm)
	float                                              DefaultValue;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.Collectable.GetModifierMax
struct ACollectable_GetModifierMax_Params
{
	struct FGameplayTag                                ModifierType;                                             // (Parm)
	float                                              DefaultValue;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.Collectable.GetItemInteractor
struct ACollectable_GetItemInteractor_Params
{
	class UInteractor*                                 ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function DeadByDaylight.Collectable.GetItemIconIndex
struct ACollectable_GetItemIconIndex_Params
{
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.Collectable.GetItemAddons
struct ACollectable_GetItemAddons_Params
{
	TArray<class UItemAddon*>                          ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function DeadByDaylight.Collectable.GetCount
struct ACollectable_GetCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.Collectable.GetCollector
struct ACollectable_GetCollector_Params
{
	class ADBDPlayer*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.Collectable.Discard
struct ACollectable_Discard_Params
{
};

// Function DeadByDaylight.Collectable.DebugPrintStats
struct ACollectable_DebugPrintStats_Params
{
};

// Function DeadByDaylight.Collectable.CanUse
struct ACollectable_CanUse_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.Collectable.CanBeDropped
struct ACollectable_CanBeDropped_Params
{
	class ADBDPlayer*                                  dropper;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.Collectable.CanBeCollected
struct ACollectable_CanBeCollected_Params
{
	class ADBDPlayer*                                  collector;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.Collectable.Authority_RemoveItemAddon
struct ACollectable_Authority_RemoveItemAddon_Params
{
	class UItemAddon*                                  addon;                                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DeadByDaylight.Collectable.Authority_AddItemAddon
struct ACollectable_Authority_AddItemAddon_Params
{
	class UItemAddon*                                  addon;                                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayerState_Menu.Server_SetEquipment
struct ADBDPlayerState_Menu_Server_SetEquipment_Params
{
	TEnumAsByte<ELoadoutSlot>                          Slot;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ItemId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               callOnRep;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayerState_Menu.OnRep_DisplayData
struct ADBDPlayerState_Menu_OnRep_DisplayData_Params
{
};

// Function DeadByDaylight.DBDUtilities.WithinRangeExclusive
struct UDBDUtilities_WithinRangeExclusive_Params
{
	float                                              Min;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Max;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDUtilities.WithinRange
struct UDBDUtilities_WithinRange_Params
{
	float                                              Min;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Max;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDUtilities.ToAngle_negative180to180
struct UDBDUtilities_ToAngle_negative180to180_Params
{
	float                                              Angle;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDUtilities.SphereTraceSingle
struct UDBDUtilities_SphereTraceSingle_Params
{
	struct FVector                                     Start;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     End;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class USphereComponent*                            Sphere;                                                   // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FHitResult                                  outHitResult;                                             // (Parm, OutParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDUtilities.SphereTraceAgainstActor
struct UDBDUtilities_SphereTraceAgainstActor_Params
{
	struct FVector                                     Start;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     End;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class USphereComponent*                            Sphere;                                                   // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      Actor;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  outHitResult;                                             // (Parm, OutParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDUtilities.PointerToInt
struct UDBDUtilities_PointerToInt_Params
{
	class UObject*                                     Obj;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDUtilities.NormalizeXY
struct UDBDUtilities_NormalizeXY_Params
{
	struct FVector                                     Vector;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Tolerance;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDUtilities.LogMeshMaterialInfo
struct UDBDUtilities_LogMeshMaterialInfo_Params
{
	class FString                                      inStr;                                                    // (ConstParm, Parm, ZeroConstructor)
	class UMeshComponent*                              Root;                                                     // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DeadByDaylight.DBDUtilities.LogMaterialInfo
struct UDBDUtilities_LogMaterialInfo_Params
{
	class FString                                      inStr;                                                    // (ConstParm, Parm, ZeroConstructor)
	class UMaterialInterface*                          Root;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDUtilities.IsNonViolent
struct UDBDUtilities_IsNonViolent_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDUtilities.IsLocallyObservingASurvivor
struct UDBDUtilities_IsLocallyObservingASurvivor_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDUtilities.IsLocallyObservingAKiller
struct UDBDUtilities_IsLocallyObservingAKiller_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDUtilities.HasWalkableSurfaceForward
struct UDBDUtilities_HasWalkableSurfaceForward_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     fowardVector;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              raycastStartHeight;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              raycastEndHeight;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FHitResult>                          OutHits;                                                  // (Parm, OutParm, ZeroConstructor)
	struct FVector                                     raycastStart;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDUtilities.HasLineOfSightToTarget
struct UDBDUtilities_HasLineOfSightToTarget_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     StartPosition;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     targetPosition;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ignoredActor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDUtilities.HasFloorForward
struct UDBDUtilities_HasFloorForward_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     fowardVector;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              raycastStartHeight;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              raycastEndHeight;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FHitResult>                          OutHits;                                                  // (Parm, OutParm, ZeroConstructor)
	struct FVector                                     raycastStart;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDUtilities.GetXYVector
struct UDBDUtilities_GetXYVector_Params
{
	struct FVector                                     Vector;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDUtilities.GetVelocityXYAngleDegrees
struct UDBDUtilities_GetVelocityXYAngleDegrees_Params
{
	class AActor*                                      Actor;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDUtilities.GetTunableValue
struct UDBDUtilities_GetTunableValue_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       valueName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDUtilities.GetThreeClosestGenerators
struct UDBDUtilities_GetThreeClosestGenerators_Params
{
	TArray<class AGenerator*>                          unrevealedGenerators;                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class AGenerator*>                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function DeadByDaylight.DBDUtilities.GetSlasherTunableValue
struct UDBDUtilities_GetSlasherTunableValue_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       valueName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDUtilities.GetSlasher
struct UDBDUtilities_GetSlasher_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class ASlasherPlayer*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDUtilities.GetSimilarVector
struct UDBDUtilities_GetSimilarVector_Params
{
	struct FVector                                     Vector;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              maximumDeviation;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDUtilities.GetPlayRateForMontage
struct UDBDUtilities_GetPlayRateForMontage_Params
{
	class UAnimMontage*                                Montage;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDUtilities.GetPercentOfRange
struct UDBDUtilities_GetPercentOfRange_Params
{
	float                                              Val;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Min;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Max;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDUtilities.GetOwningSlasher
struct UDBDUtilities_GetOwningSlasher_Params
{
	class UAnimInstance*                               AnimInstance;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class ASlasherPlayer*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDUtilities.GetOwningCamper
struct UDBDUtilities_GetOwningCamper_Params
{
	class UAnimInstance*                               AnimInstance;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class ACamperPlayer*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDUtilities.GetOuterMostActor
struct UDBDUtilities_GetOuterMostActor_Params
{
	class UAnimInstance*                               AnimInstance;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDUtilities.GetNearbyCampers
struct UDBDUtilities_GetNearbyCampers_Params
{
	class UWorld*                                      World;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Center;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class ACamperPlayer*>                       outNearbyCampers;                                         // (Parm, OutParm, ZeroConstructor)
	TArray<class AActor*>                              ignoredCampers;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function DeadByDaylight.DBDUtilities.GetMontageLength
struct UDBDUtilities_GetMontageLength_Params
{
	class UAnimMontage*                                Montage;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDUtilities.GetLocallyObservedCharacter
struct UDBDUtilities_GetLocallyObservedCharacter_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class ADBDPlayer*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDUtilities.GetLocallyControlledSurvivor
struct UDBDUtilities_GetLocallyControlledSurvivor_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class ACamperPlayer*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDUtilities.GetLocallyControlledKiller
struct UDBDUtilities_GetLocallyControlledKiller_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class ASlasherPlayer*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDUtilities.GetLocallyControlledCharacterRole
struct UDBDUtilities_GetLocallyControlledCharacterRole_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EPlayerRole>                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDUtilities.GetLocallyControlledCharacter
struct UDBDUtilities_GetLocallyControlledCharacter_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class ADBDPlayer*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDUtilities.GetLocalDBDPlayerController
struct UDBDUtilities_GetLocalDBDPlayerController_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class ADBDPlayerControllerBase*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDUtilities.GetLocalDBDCameraManager
struct UDBDUtilities_GetLocalDBDCameraManager_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class ADBDPlayerCameraManager*                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDUtilities.GetInventoryCount
struct UDBDUtilities_GetInventoryCount_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                CharacterIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ItemId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDUtilities.GetImpactCollisionResponseContainer
struct UDBDUtilities_GetImpactCollisionResponseContainer_Params
{
	class UPrimitiveComponent*                         Primitive;                                                // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FCollisionResponseContainer                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DeadByDaylight.DBDUtilities.GetImpactCollisionObjectType
struct UDBDUtilities_GetImpactCollisionObjectType_Params
{
	class UPrimitiveComponent*                         Primitive;                                                // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDUtilities.GetFormattedNumberText
struct UDBDUtilities_GetFormattedNumberText_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                maxDecimals;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                minDecimals;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               leadingZero;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DeadByDaylight.DBDUtilities.GetFormattedNumberString
struct UDBDUtilities_GetFormattedNumberString_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                maxDecimals;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                minDecimals;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               leadingZero;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function DeadByDaylight.DBDUtilities.GetFloorLocationAt
struct UDBDUtilities_GetFloorLocationAt_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              raycastStartHeight;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              raycastEndHeight;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDUtilities.GetFirstActorWithTag
struct UDBDUtilities_GetFirstActorWithTag_Params
{
	struct FName                                       Tag;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              actorsArray;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDUtilities.GetEmblemTunableValue
struct UDBDUtilities_GetEmblemTunableValue_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       valueName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDUtilities.GetDBDGameState
struct UDBDUtilities_GetDBDGameState_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class ADBDGameState*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDUtilities.GetDBDGameMode
struct UDBDUtilities_GetDBDGameMode_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class ADBDGameMode*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDUtilities.GetDBDGameInstance
struct UDBDUtilities_GetDBDGameInstance_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UDBDGameInstance*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDUtilities.GetDBDAIPlayerController
struct UDBDUtilities_GetDBDAIPlayerController_Params
{
	class ADBDPlayer*                                  Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class ADBDAIPlayerController*                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDUtilities.GetComponentOwnerName
struct UDBDUtilities_GetComponentOwnerName_Params
{
	class UActorComponent*                             ActorComponent;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function DeadByDaylight.DBDUtilities.GetClosestSnapTransformOnOrbit
struct UDBDUtilities_GetClosestSnapTransformOnOrbit_Params
{
	struct FVector                                     centerPoint;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     orbitterPosition;                                         // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              Distance;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDUtilities.GetClosestPointOnOrbit
struct UDBDUtilities_GetClosestPointOnOrbit_Params
{
	struct FVector                                     centerPoint;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     orbitterPosition;                                         // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              Distance;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDUtilities.GetAnimSequenceLength
struct UDBDUtilities_GetAnimSequenceLength_Params
{
	class UAnimSequence*                               Sequence;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDUtilities.GetActorOwnerName
struct UDBDUtilities_GetActorOwnerName_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function DeadByDaylight.DBDUtilities.GetActiveSpecialEvent
struct UDBDUtilities_GetActiveSpecialEvent_Params
{
	struct FName                                       EventId;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FSpecialEventData                           outSpecialEventData;                                      // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDUtilities.FireGameEvent
struct UDBDUtilities_FireGameEvent_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EDBDScoreTypes>                        ScoreType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Instigator;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDUtilities.FindParentOfClass
struct UDBDUtilities_FindParentOfClass_Params
{
	class AActor*                                      InChild;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      InClass;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDUtilities.FindFloorSingle
struct UDBDUtilities_FindFloorSingle_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              raycastLength;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  OutHit;                                                   // (Parm, OutParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDUtilities.DBDLoadAudioBankAsync
struct UDBDUtilities_DBDLoadAudioBankAsync_Params
{
	class UAkAudioBank*                                bank;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      caller;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDUtilities.DBDLoadAudioBank
struct UDBDUtilities_DBDLoadAudioBank_Params
{
	class UAkAudioBank*                                bank;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      caller;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDUtilities.DBDCapsuleTraceSingle
struct UDBDUtilities_DBDCapsuleTraceSingle_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Start;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     End;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              HalfHeight;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     TraceChannel;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bTraceComplex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              ActorsToIgnore;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TEnumAsByte<EDrawDebugTrace>                       DrawDebugType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  OutHit;                                                   // (Parm, OutParm, IsPlainOldData)
	bool                                               bIgnoreSelf;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDUtilities.CrashGameCausingInterrupt
struct UDBDUtilities_CrashGameCausingInterrupt_Params
{
};

// Function DeadByDaylight.DBDUtilities.AddComponentToActor
struct UDBDUtilities_AddComponentToActor_Params
{
	class UClass*                                      compClass;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       compName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UActorComponent*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function DeadByDaylight.DBDDesignTunables.GetTunableValue
struct UDBDDesignTunables_GetTunableValue_Params
{
	struct FName                                       ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               warnIfRowMissing;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDDesignTunables.GetCurrentlyActiveSpecialEvent
struct UDBDDesignTunables_GetCurrentlyActiveSpecialEvent_Params
{
	class UWorld*                                      World;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FSpecialEventData                           outEventData;                                             // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.TutorialHighlightController.SetHudComponentHighlight
struct UTutorialHighlightController_SetHudComponentHighlight_Params
{
	TEnumAsByte<EHudComponent>                         hudComponent;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               show;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.TutorialNotificationController.ShowNotification
struct UTutorialNotificationController_ShowNotification_Params
{
	struct FName                                       tutorialNotificationId;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.TutorialNotificationController.ShowBlockingNotification
struct UTutorialNotificationController_ShowBlockingNotification_Params
{
	struct FName                                       tutorialNotificationId;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction DeadByDaylight.TutorialNotificationController.OnBlockingNotificationDismissedEvent__DelegateSignature
struct UTutorialNotificationController_OnBlockingNotificationDismissedEvent__DelegateSignature_Params
{
	struct FName                                       tutorialNotificationId;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.TutorialNotificationController.OnBlockingNotificationDismissed
struct UTutorialNotificationController_OnBlockingNotificationDismissed_Params
{
};

// Function DeadByDaylight.TutorialNotificationController.HideNotification
struct UTutorialNotificationController_HideNotification_Params
{
};

// Function DeadByDaylight.TutorialObjectiveController.RemoveObjective
struct UTutorialObjectiveController_RemoveObjective_Params
{
	struct FName                                       tutorialObjectiveId;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.TutorialObjectiveController.RemoveAllObjectives
struct UTutorialObjectiveController_RemoveAllObjectives_Params
{
};

// Function DeadByDaylight.TutorialObjectiveController.CompleteObjective
struct UTutorialObjectiveController_CompleteObjective_Params
{
	struct FName                                       tutorialObjectiveId;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               removeAfterCompletion;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.TutorialObjectiveController.AddObjective
struct UTutorialObjectiveController_AddObjective_Params
{
	struct FName                                       tutorialObjectiveId;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.TutorialGameMode.SetEscapeGenerators
struct ATutorialGameMode_SetEscapeGenerators_Params
{
	TArray<class AGenerator*>                          escapeGenerators;                                         // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                requiredActivationCount;                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.TutorialGameMode.GetTutorialObjectiveController
struct ATutorialGameMode_GetTutorialObjectiveController_Params
{
	class UTutorialObjectiveController*                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.TutorialGameMode.GetTutorialNotificationController
struct ATutorialGameMode_GetTutorialNotificationController_Params
{
	class UTutorialNotificationController*             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.TutorialGameMode.GetTutorialHighlightController
struct ATutorialGameMode_GetTutorialHighlightController_Params
{
	class UTutorialHighlightController*                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDMenuPlayer.WrappedOnDestroyed
struct ADBDMenuPlayer_WrappedOnDestroyed_Params
{
	class AActor*                                      DestroyedActor;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDMenuPlayer.ShouldShowSpawnAnimation
struct ADBDMenuPlayer_ShouldShowSpawnAnimation_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDMenuPlayer.ShouldApplyPositionOffset
struct ADBDMenuPlayer_ShouldApplyPositionOffset_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDMenuPlayer.RestartInSequence
struct ADBDMenuPlayer_RestartInSequence_Params
{
};

// Function DeadByDaylight.DBDMenuPlayer.OnCustomizationTransactionCompleted
struct ADBDMenuPlayer_OnCustomizationTransactionCompleted_Params
{
	TEnumAsByte<ECustomizationCategory>                Category;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDMenuPlayer.GetHandPosition
struct ADBDMenuPlayer_GetHandPosition_Params
{
	TEnumAsByte<EItemHandPosition>                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDMenuPlayer.BeginDestroySequence
struct ADBDMenuPlayer_BeginDestroySequence_Params
{
};

// Function DeadByDaylight.DBDMenuPlayer.BeginCreateSequence
struct ADBDMenuPlayer_BeginCreateSequence_Params
{
};

// Function DeadByDaylight.CamperPlayer.UpdateSlasherProximityEvents
struct ACamperPlayer_UpdateSlasherProximityEvents_Params
{
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.CamperPlayer.UpdateHealingTimer
struct ACamperPlayer_UpdateHealingTimer_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.CamperPlayer.UpdateDrainTimer
struct ACamperPlayer_UpdateDrainTimer_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.CamperPlayer.TriggerWiggleSkillCheck
struct ACamperPlayer_TriggerWiggleSkillCheck_Params
{
};

// Function DeadByDaylight.CamperPlayer.TriggerPutDownAnimation
struct ACamperPlayer_TriggerPutDownAnimation_Params
{
};

// Function DeadByDaylight.CamperPlayer.TriggerPickUpAnimation
struct ACamperPlayer_TriggerPickUpAnimation_Params
{
};

// Function DeadByDaylight.CamperPlayer.TriggerBloodTrail
struct ACamperPlayer_TriggerBloodTrail_Params
{
};

// Function DeadByDaylight.CamperPlayer.TriggerAfflictionHUDFeedback
struct ACamperPlayer_TriggerAfflictionHUDFeedback_Params
{
};

// Function DeadByDaylight.CamperPlayer.StopHealingTimer
struct ACamperPlayer_StopHealingTimer_Params
{
};

// Function DeadByDaylight.CamperPlayer.StartHealingTimer
struct ACamperPlayer_StartHealingTimer_Params
{
	float                                              Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.CamperPlayer.SetRevealedSurvivor
struct ACamperPlayer_SetRevealedSurvivor_Params
{
	class ACamperPlayer*                               survivor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.CamperPlayer.SetOverlappingEscape
struct ACamperPlayer_SetOverlappingEscape_Params
{
	class AActor*                                      Escape;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.CamperPlayer.SetIsSacrificed
struct ACamperPlayer_SetIsSacrificed_Params
{
	bool                                               sacrificed;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.CamperPlayer.SetImmobilized
struct ACamperPlayer_SetImmobilized_Params
{
	TEnumAsByte<ECamperImmobilizeState>                State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.CamperPlayer.SetGuidedActionLocal
struct ACamperPlayer_SetGuidedActionLocal_Params
{
	TEnumAsByte<ECamperGuidedAction>                   Action;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.CamperPlayer.SetGuidedAction
struct ACamperPlayer_SetGuidedAction_Params
{
	TEnumAsByte<ECamperGuidedAction>                   Action;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.CamperPlayer.SetEnableHookSlashableZone
struct ACamperPlayer_SetEnableHookSlashableZone_Params
{
	bool                                               enable;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.CamperPlayer.SetDamageState
struct ACamperPlayer_SetDamageState_Params
{
	TEnumAsByte<ECamperDamageState>                    E;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               FireScoreEvent;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.CamperPlayer.SetCameraAttachment
struct ACamperPlayer_SetCameraAttachment_Params
{
	class USceneComponent*                             Parent;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       SocketName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.CamperPlayer.SetBeingCarried
struct ACamperPlayer_SetBeingCarried_Params
{
	bool                                               IsBeingCarried;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class ADBDPlayer*                                  carrier;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.CamperPlayer.SetAutoInteractionMashEnabled
struct ACamperPlayer_SetAutoInteractionMashEnabled_Params
{
	bool                                               Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.CamperPlayer.Server_SetRepAimPoint
struct ACamperPlayer_Server_SetRepAimPoint_Params
{
	struct FVector                                     inRepAimPoint;                                            // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function DeadByDaylight.CamperPlayer.Server_SetOnHookDrainToNextStage
struct ACamperPlayer_Server_SetOnHookDrainToNextStage_Params
{
	bool                                               Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.CamperPlayer.Server_SetItemNormalizedEnergyLevel
struct ACamperPlayer_Server_SetItemNormalizedEnergyLevel_Params
{
	float                                              normalizedLevel;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.CamperPlayer.Server_SetItemEnergyLevel
struct ACamperPlayer_Server_SetItemEnergyLevel_Params
{
	float                                              Level;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.CamperPlayer.Server_SetImmobilized
struct ACamperPlayer_Server_SetImmobilized_Params
{
	TEnumAsByte<ECamperImmobilizeState>                State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.CamperPlayer.Server_SetHookEscapeAutoSuccess
struct ACamperPlayer_Server_SetHookEscapeAutoSuccess_Params
{
	bool                                               Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.CamperPlayer.Server_SetEnableHookSlashableZone
struct ACamperPlayer_Server_SetEnableHookSlashableZone_Params
{
	bool                                               Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.CamperPlayer.Server_SendRunInput
struct ACamperPlayer_Server_SendRunInput_Params
{
	bool                                               Pressed;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.CamperPlayer.Server_SendLeftRightMashedInput
struct ACamperPlayer_Server_SendLeftRightMashedInput_Params
{
	bool                                               Pressed;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.CamperPlayer.Server_SendItemPreventRun
struct ACamperPlayer_Server_SendItemPreventRun_Params
{
	bool                                               prevent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.CamperPlayer.Server_SendInteractMashedInput
struct ACamperPlayer_Server_SendInteractMashedInput_Params
{
	bool                                               Pressed;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.CamperPlayer.Server_RemoveReverseBearTrap
struct ACamperPlayer_Server_RemoveReverseBearTrap_Params
{
};

// Function DeadByDaylight.CamperPlayer.Server_RemoveHealth
struct ACamperPlayer_Server_RemoveHealth_Params
{
};

// Function DeadByDaylight.CamperPlayer.Server_MakeInvulnerable
struct ACamperPlayer_Server_MakeInvulnerable_Params
{
};

// Function DeadByDaylight.CamperPlayer.Server_Kill
struct ACamperPlayer_Server_Kill_Params
{
	bool                                               sacrificed;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.CamperPlayer.Server_IncreaseHealth
struct ACamperPlayer_Server_IncreaseHealth_Params
{
};

// Function DeadByDaylight.CamperPlayer.Server_DebugResetHookedCount
struct ACamperPlayer_Server_DebugResetHookedCount_Params
{
};

// Function DeadByDaylight.CamperPlayer.Server_CheatEscaped
struct ACamperPlayer_Server_CheatEscaped_Params
{
};

// Function DeadByDaylight.CamperPlayer.ResetPotentialSaviors
struct ACamperPlayer_ResetPotentialSaviors_Params
{
};

// Function DeadByDaylight.CamperPlayer.ResetHideTimer
struct ACamperPlayer_ResetHideTimer_Params
{
};

// Function DeadByDaylight.CamperPlayer.ResetCameraAttachment
struct ACamperPlayer_ResetCameraAttachment_Params
{
};

// Function DeadByDaylight.CamperPlayer.RemoveReverseBearTrap
struct ACamperPlayer_RemoveReverseBearTrap_Params
{
};

// Function DeadByDaylight.CamperPlayer.OnUnhooked
struct ACamperPlayer_OnUnhooked_Params
{
};

// Function DeadByDaylight.CamperPlayer.OnProximityEntered
struct ACamperPlayer_OnProximityEntered_Params
{
	class UPrimitiveComponent*                         HitComponent;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function DeadByDaylight.CamperPlayer.OnPawnSensed
struct ACamperPlayer_OnPawnSensed_Params
{
	class APawn*                                       Pawn;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.CamperPlayer.OnHealthBarCharged
struct ACamperPlayer_OnHealthBarCharged_Params
{
	bool                                               complete;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              instigators;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function DeadByDaylight.CamperPlayer.OnDroppedStart
struct ACamperPlayer_OnDroppedStart_Params
{
};

// Function DeadByDaylight.CamperPlayer.OnDroppedEnd
struct ACamperPlayer_OnDroppedEnd_Params
{
	bool                                               clearLeader;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.CamperPlayer.OnDamageHit
struct ACamperPlayer_OnDamageHit_Params
{
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               causedKO;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.CamperPlayer.Multicast_SetOnHookDrainToNextStage
struct ACamperPlayer_Multicast_SetOnHookDrainToNextStage_Params
{
	bool                                               Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.CamperPlayer.Multicast_SetImmobilized
struct ACamperPlayer_Multicast_SetImmobilized_Params
{
	TEnumAsByte<ECamperImmobilizeState>                State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.CamperPlayer.Multicast_SetHookEscapeAutoSuccess
struct ACamperPlayer_Multicast_SetHookEscapeAutoSuccess_Params
{
	bool                                               Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.CamperPlayer.Multicast_SetGuidedAction
struct ACamperPlayer_Multicast_SetGuidedAction_Params
{
	TEnumAsByte<ECamperGuidedAction>                   Action;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.CamperPlayer.Multicast_SetEnableHookSlashableZone
struct ACamperPlayer_Multicast_SetEnableHookSlashableZone_Params
{
	bool                                               Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.CamperPlayer.Multicast_SetAuthoritativeMovementFlag
struct ACamperPlayer_Multicast_SetAuthoritativeMovementFlag_Params
{
	TEnumAsByte<EAuthoritativeMovementFlag>            flag;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.CamperPlayer.Multicast_OnSlashed
struct ACamperPlayer_Multicast_OnSlashed_Params
{
	class ADBDPlayer*                                  attacker;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               applySprintEffect;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.CamperPlayer.Multicast_OnKO
struct ACamperPlayer_Multicast_OnKO_Params
{
};

// Function DeadByDaylight.CamperPlayer.Multicast_OnHealed
struct ACamperPlayer_Multicast_OnHealed_Params
{
	int                                                healAmount;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.CamperPlayer.Multicast_OnFailedStruggling
struct ACamperPlayer_Multicast_OnFailedStruggling_Params
{
	class UInteractionDefinition*                      Interaction;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DeadByDaylight.CamperPlayer.Multicast_OnDamagedGameEvents
struct ACamperPlayer_Multicast_OnDamagedGameEvents_Params
{
	unsigned char                                      healthStatesLost;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.CamperPlayer.Multicast_FireDownedEvent
struct ACamperPlayer_Multicast_FireDownedEvent_Params
{
};

// Function DeadByDaylight.CamperPlayer.Multicast_DebugSetHookedCount
struct ACamperPlayer_Multicast_DebugSetHookedCount_Params
{
	int                                                Count;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.CamperPlayer.MoveToOwnerCarryJoint
struct ACamperPlayer_MoveToOwnerCarryJoint_Params
{
};

// Function DeadByDaylight.CamperPlayer.Kill
struct ACamperPlayer_Kill_Params
{
	bool                                               sacrificed;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.CamperPlayer.IsUnintentionallyImmobilized
struct ACamperPlayer_IsUnintentionallyImmobilized_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.CamperPlayer.IsTrapped
struct ACamperPlayer_IsTrapped_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.CamperPlayer.IsTotallyInsane
struct ACamperPlayer_IsTotallyInsane_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.CamperPlayer.IsSuccessfullyHidden
struct ACamperPlayer_IsSuccessfullyHidden_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.CamperPlayer.IsSacrificed
struct ACamperPlayer_IsSacrificed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.CamperPlayer.IsOnHitSprintEffectActive
struct ACamperPlayer_IsOnHitSprintEffectActive_Params
{
	bool                                               ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.CamperPlayer.IsObsessionTarget
struct ACamperPlayer_IsObsessionTarget_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.CamperPlayer.IsMovementGuided
struct ACamperPlayer_IsMovementGuided_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.CamperPlayer.IsKO
struct ACamperPlayer_IsKO_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.CamperPlayer.IsInsideCloset
struct ACamperPlayer_IsInsideCloset_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.CamperPlayer.IsInNeed
struct ACamperPlayer_IsInNeed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.CamperPlayer.IsInjuredBleedoutTimerExpired
struct ACamperPlayer_IsInjuredBleedoutTimerExpired_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.CamperPlayer.IsInjured
struct ACamperPlayer_IsInjured_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.CamperPlayer.IsInInjuredBleedout
struct ACamperPlayer_IsInInjuredBleedout_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.CamperPlayer.IsInChase
struct ACamperPlayer_IsInChase_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.CamperPlayer.IsInBasement
struct ACamperPlayer_IsInBasement_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.CamperPlayer.IsImmobilized
struct ACamperPlayer_IsImmobilized_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.CamperPlayer.IsHooked
struct ACamperPlayer_IsHooked_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.CamperPlayer.IsHealthy
struct ACamperPlayer_IsHealthy_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.CamperPlayer.IsHealingTimerExpired
struct ACamperPlayer_IsHealingTimerExpired_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.CamperPlayer.IsGuidedBySlasher
struct ACamperPlayer_IsGuidedBySlasher_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.CamperPlayer.IsEscaped
struct ACamperPlayer_IsEscaped_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.CamperPlayer.IsDyingTimerExpired
struct ACamperPlayer_IsDyingTimerExpired_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.CamperPlayer.IsDrainTimerExpired
struct ACamperPlayer_IsDrainTimerExpired_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.CamperPlayer.IsDeadOrInParadise
struct ACamperPlayer_IsDeadOrInParadise_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.CamperPlayer.IsDead
struct ACamperPlayer_IsDead_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.CamperPlayer.IsCrawling
struct ACamperPlayer_IsCrawling_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.CamperPlayer.IsCameraDetached
struct ACamperPlayer_IsCameraDetached_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.CamperPlayer.IsCameraAttached
struct ACamperPlayer_IsCameraAttached_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.CamperPlayer.IsBeingPutOnHook
struct ACamperPlayer_IsBeingPutOnHook_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.CamperPlayer.IsBeingPutDown
struct ACamperPlayer_IsBeingPutDown_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.CamperPlayer.IsBeingPickedUp
struct ACamperPlayer_IsBeingPickedUp_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.CamperPlayer.IsBeingKilled
struct ACamperPlayer_IsBeingKilled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.CamperPlayer.IsBeingInteractedWith
struct ACamperPlayer_IsBeingInteractedWith_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.CamperPlayer.IsBeingHealed
struct ACamperPlayer_IsBeingHealed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.CamperPlayer.IsBeingChased
struct ACamperPlayer_IsBeingChased_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.CamperPlayer.IsBeingCarried
struct ACamperPlayer_IsBeingCarried_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.CamperPlayer.IncrementHookedBasementCount
struct ACamperPlayer_IncrementHookedBasementCount_Params
{
};

// Function DeadByDaylight.CamperPlayer.IncreaseHPSlotSize
struct ACamperPlayer_IncreaseHPSlotSize_Params
{
	float                                              percent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.CamperPlayer.HasReverseBearTrap
struct ACamperPlayer_HasReverseBearTrap_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.CamperPlayer.HasHitEvents
struct ACamperPlayer_HasHitEvents_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.CamperPlayer.HasGuidedAction
struct ACamperPlayer_HasGuidedAction_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.CamperPlayer.GetWiggleFreeChargePercent
struct ACamperPlayer_GetWiggleFreeChargePercent_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.CamperPlayer.GetToAimPointRotation
struct ACamperPlayer_GetToAimPointRotation_Params
{
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.CamperPlayer.GetStillness
struct ACamperPlayer_GetStillness_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.CamperPlayer.GetSpringArmComponent
struct ACamperPlayer_GetSpringArmComponent_Params
{
	class UDBDSpringArmComponent*                      ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function DeadByDaylight.CamperPlayer.GetRevealedSurvivor
struct ACamperPlayer_GetRevealedSurvivor_Params
{
	class ACamperPlayer*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.CamperPlayer.GetPercentInjuredBleedoutTimer
struct ACamperPlayer_GetPercentInjuredBleedoutTimer_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.CamperPlayer.GetPercentHealingTimer
struct ACamperPlayer_GetPercentHealingTimer_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.CamperPlayer.GetPercentDyingTimer
struct ACamperPlayer_GetPercentDyingTimer_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.CamperPlayer.GetPercentDrainTimer
struct ACamperPlayer_GetPercentDrainTimer_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.CamperPlayer.GetOverlappingEscape
struct ACamperPlayer_GetOverlappingEscape_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.CamperPlayer.GetObsessionTargetWeight
struct ACamperPlayer_GetObsessionTargetWeight_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.CamperPlayer.GetNumberOfEntityRenderRegions
struct ACamperPlayer_GetNumberOfEntityRenderRegions_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.CamperPlayer.GetMontageFollower
struct ACamperPlayer_GetMontageFollower_Params
{
	class UAnimationMontageSlave*                      ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function DeadByDaylight.CamperPlayer.GetMadnessTierBPNative
struct ACamperPlayer_GetMadnessTierBPNative_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.CamperPlayer.GetImmobilizedState
struct ACamperPlayer_GetImmobilizedState_Params
{
	TEnumAsByte<ECamperImmobilizeState>                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.CamperPlayer.GetHookedBasementCount
struct ACamperPlayer_GetHookedBasementCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.CamperPlayer.GetGuidedAction
struct ACamperPlayer_GetGuidedAction_Params
{
	TEnumAsByte<ECamperGuidedAction>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.CamperPlayer.GetEntityRenderRegionAtIndex
struct ACamperPlayer_GetEntityRenderRegionAtIndex_Params
{
	int                                                InIndex;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UDBDClipRegionComponent*                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function DeadByDaylight.CamperPlayer.GetDropStaggerTimeLeft
struct ACamperPlayer_GetDropStaggerTimeLeft_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.CamperPlayer.GetDropStaggerPercentTimeElapsed
struct ACamperPlayer_GetDropStaggerPercentTimeElapsed_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.CamperPlayer.GetDamageState
struct ACamperPlayer_GetDamageState_Params
{
	TEnumAsByte<ECamperDamageState>                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.CamperPlayer.GetCurrentTotalHealthBarPercent
struct ACamperPlayer_GetCurrentTotalHealthBarPercent_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.CamperPlayer.GetCurrentHPSlot
struct ACamperPlayer_GetCurrentHPSlot_Params
{
	class UChargeableComponent*                        ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function DeadByDaylight.CamperPlayer.GetCamperStillnessComponent
struct ACamperPlayer_GetCamperStillnessComponent_Params
{
	class UCamperStillnessTrackerComponent*            ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function DeadByDaylight.CamperPlayer.GetCamperData
struct ACamperPlayer_GetCamperData_Params
{
	class UDBDCamperData*                              ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function DeadByDaylight.CamperPlayer.GetAllEntityRenderRegions
struct ACamperPlayer_GetAllEntityRenderRegions_Params
{
	TArray<class UDBDClipRegionComponent*>             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function DeadByDaylight.CamperPlayer.GetAimPoint
struct ACamperPlayer_GetAimPoint_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.CamperPlayer.Escape
struct ACamperPlayer_Escape_Params
{
	class AActor*                                      Escape;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.CamperPlayer.DetachFromGuidingPlayer
struct ACamperPlayer_DetachFromGuidingPlayer_Params
{
};

// Function DeadByDaylight.CamperPlayer.DetachCamera
struct ACamperPlayer_DetachCamera_Params
{
};

// Function DeadByDaylight.CamperPlayer.DBDApplyDamage
struct ACamperPlayer_DBDApplyDamage_Params
{
	bool                                               didDamage;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               causedKO;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.CamperPlayer.DBD_LeaveParadise
struct ACamperPlayer_DBD_LeaveParadise_Params
{
};

// Function DeadByDaylight.CamperPlayer.DBD_ForceRun
struct ACamperPlayer_DBD_ForceRun_Params
{
	bool                                               Forced;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.CamperPlayer.DBD_CheatEscaped
struct ACamperPlayer_DBD_CheatEscaped_Params
{
};

// Function DeadByDaylight.CamperPlayer.DBD_AutoLeftRightMash
struct ACamperPlayer_DBD_AutoLeftRightMash_Params
{
	bool                                               Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.CamperPlayer.DBD_AutoInteractionMash
struct ACamperPlayer_DBD_AutoInteractionMash_Params
{
	bool                                               Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.CamperPlayer.DamageStateChangedEvent
struct ACamperPlayer_DamageStateChangedEvent_Params
{
	TEnumAsByte<ECamperDamageState>                    DamageState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.CamperPlayer.ComputeHookEscapeResult
struct ACamperPlayer_ComputeHookEscapeResult_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.CamperPlayer.ComputeBeartrapEscapeResult
struct ACamperPlayer_ComputeBeartrapEscapeResult_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.CamperPlayer.Client_OnSlashedOutOfTrap
struct ACamperPlayer_Client_OnSlashedOutOfTrap_Params
{
	class ADBDPlayer*                                  Requester;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.CamperPlayer.CanStruggle
struct ACamperPlayer_CanStruggle_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.CamperPlayer.CanRushQuietly
struct ACamperPlayer_CanRushQuietly_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.CamperPlayer.CanHealSelf
struct ACamperPlayer_CanHealSelf_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.CamperPlayer.CanGainInsanity
struct ACamperPlayer_CanGainInsanity_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.CamperPlayer.CanBeShocked
struct ACamperPlayer_CanBeShocked_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.CamperPlayer.CanBePickedUp
struct ACamperPlayer_CanBePickedUp_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.CamperPlayer.CanBeKilled
struct ACamperPlayer_CanBeKilled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.CamperPlayer.CanBeImmediatelyKO
struct ACamperPlayer_CanBeImmediatelyKO_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.CamperPlayer.CanBeHealedFromInjured
struct ACamperPlayer_CanBeHealedFromInjured_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.CamperPlayer.CanBeHealed
struct ACamperPlayer_CanBeHealed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.CamperPlayer.CanBecomeHealthy
struct ACamperPlayer_CanBecomeHealthy_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.CamperPlayer.CanBeChased
struct ACamperPlayer_CanBeChased_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.CamperPlayer.AuthoritySetHealth
struct ACamperPlayer_AuthoritySetHealth_Params
{
	TEnumAsByte<ECamperDamageState>                    health;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.CamperPlayer.Authority_SetDrainTimerPercentLeft
struct ACamperPlayer_Authority_SetDrainTimerPercentLeft_Params
{
	float                                              percentTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.CamperPlayer.Authority_SetDrainTimerPercentElapsed
struct ACamperPlayer_Authority_SetDrainTimerPercentElapsed_Params
{
	float                                              percentTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.CamperPlayer.Authority_ResetWiggleFreeCharge
struct ACamperPlayer_Authority_ResetWiggleFreeCharge_Params
{
};

// Function DeadByDaylight.CamperPlayer.Authority_OnSlashed
struct ACamperPlayer_Authority_OnSlashed_Params
{
	class ADBDPlayer*                                  attacker;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.CamperPlayer.Authority_OnFailedStruggling
struct ACamperPlayer_Authority_OnFailedStruggling_Params
{
	class UInteractionDefinition*                      Interaction;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DeadByDaylight.CamperPlayer.Authority_DropItemAtLastSafePosition
struct ACamperPlayer_Authority_DropItemAtLastSafePosition_Params
{
};

// Function DeadByDaylight.CamperPlayer.Authority_ApplyDamageToState
struct ACamperPlayer_Authority_ApplyDamageToState_Params
{
	bool                                               didDamage;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               causedKO;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECamperDamageState>                    targetState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.CamperPlayer.Authority_AddWiggleFreeChargePercentNoModifiers
struct ACamperPlayer_Authority_AddWiggleFreeChargePercentNoModifiers_Params
{
	float                                              ChargePercent;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.CamperPlayer.Authority_AddWiggleFreeCharge
struct ACamperPlayer_Authority_AddWiggleFreeCharge_Params
{
	float                                              charge;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.CamperPlayer.AttachToGuidingPlayer
struct ACamperPlayer_AttachToGuidingPlayer_Params
{
};

// Function DeadByDaylight.CamperPlayer.ApplyHeal
struct ACamperPlayer_ApplyHeal_Params
{
	int                                                healAmount;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.SlasherPlayer.UpdateRageTierEffect
struct ASlasherPlayer_UpdateRageTierEffect_Params
{
	int                                                previousTier;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                currentTier;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.SlasherPlayer.TriggerPutDownAnimation
struct ASlasherPlayer_TriggerPutDownAnimation_Params
{
};

// Function DeadByDaylight.SlasherPlayer.TriggerPickUpAnimation
struct ASlasherPlayer_TriggerPickUpAnimation_Params
{
};

// Function DeadByDaylight.SlasherPlayer.SpawnSlasherPower
struct ASlasherPlayer_SpawnSlasherPower_Params
{
};

// Function DeadByDaylight.SlasherPlayer.ShouldApplyBloodlustSpeedModifier
struct ASlasherPlayer_ShouldApplyBloodlustSpeedModifier_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.SlasherPlayer.SetStalkTierWalkSpeedMultiplier
struct ASlasherPlayer_SetStalkTierWalkSpeedMultiplier_Params
{
	float                                              stalkTierWalkSpeedMultiplier;                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.SlasherPlayer.SetStalkTierCarrySpeedMultiplier
struct ASlasherPlayer_SetStalkTierCarrySpeedMultiplier_Params
{
	float                                              stalkTierCarrySpeedMultiplier;                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.SlasherPlayer.SetLightIntensity
struct ASlasherPlayer_SetLightIntensity_Params
{
	float                                              Intensity;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.SlasherPlayer.SetIsKilling
struct ASlasherPlayer_SetIsKilling_Params
{
	bool                                               isKilling;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.SlasherPlayer.SetIsInBlinkCooldown
struct ASlasherPlayer_SetIsInBlinkCooldown_Params
{
	bool                                               IsInBlinkCooldown;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.SlasherPlayer.SetIsChainBlinking
struct ASlasherPlayer_SetIsChainBlinking_Params
{
	bool                                               IsChainBlinking;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.SlasherPlayer.SetInteractingCamperBlueprint
struct ASlasherPlayer_SetInteractingCamperBlueprint_Params
{
	class ACamperPlayer*                               camper;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.SlasherPlayer.SetGuidedCamper
struct ASlasherPlayer_SetGuidedCamper_Params
{
	class ACamperPlayer*                               camper;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.SlasherPlayer.SetGuidedAction
struct ASlasherPlayer_SetGuidedAction_Params
{
	TEnumAsByte<ESlasherGuidedAction>                  Action;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.SlasherPlayer.SetChainsawSprinting
struct ASlasherPlayer_SetChainsawSprinting_Params
{
	bool                                               chainsawSprinting;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.SlasherPlayer.SetBeingWiggled
struct ASlasherPlayer_SetBeingWiggled_Params
{
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.SlasherPlayer.SetBaseTerrorRadius
struct ASlasherPlayer_SetBaseTerrorRadius_Params
{
	float                                              baseTerrorRadius;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.SlasherPlayer.SetAttackDetectionZoneSet
struct ASlasherPlayer_SetAttackDetectionZoneSet_Params
{
	TEnumAsByte<EAttackZoneSet>                        attackZoneSet;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.SlasherPlayer.Server_SetLungeType
struct ASlasherPlayer_Server_SetLungeType_Params
{
	int                                                lungeType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.SlasherPlayer.Server_SendAttackInput
struct ASlasherPlayer_Server_SendAttackInput_Params
{
	bool                                               Pressed;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.SlasherPlayer.Server_AllowKilling
struct ASlasherPlayer_Server_AllowKilling_Params
{
	int8_t                                             numKills;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.SlasherPlayer.OnSurvivorsLeftChanged
struct ASlasherPlayer_OnSurvivorsLeftChanged_Params
{
	int                                                survivorRemaining;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.SlasherPlayer.OnSurvivorKilled
struct ASlasherPlayer_OnSurvivorKilled_Params
{
	class ACamperPlayer*                               playerToKill;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               consumeKill;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.SlasherPlayer.OnSuccessfulInterruption
struct ASlasherPlayer_OnSuccessfulInterruption_Params
{
	class ACamperPlayer*                               interruptedSurvivor;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.SlasherPlayer.OnStealthChanged
struct ASlasherPlayer_OnStealthChanged_Params
{
	bool                                               stealth;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.SlasherPlayer.OnStalkModeChanged
struct ASlasherPlayer_OnStalkModeChanged_Params
{
	bool                                               stalkMode;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.SlasherPlayer.OnSoundTriggered
struct ASlasherPlayer_OnSoundTriggered_Params
{
	class AActor*                                      originator;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               shouldTrack;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              audibleRange;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.SlasherPlayer.OnPickupStart_BP
struct ASlasherPlayer_OnPickupStart_BP_Params
{
};

// Function DeadByDaylight.SlasherPlayer.OnPerformingChargableInteraction
struct ASlasherPlayer_OnPerformingChargableInteraction_Params
{
	float                                              Progress;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.SlasherPlayer.OnLoudNoiseIndicatorDestroyed
struct ASlasherPlayer_OnLoudNoiseIndicatorDestroyed_Params
{
};

// Function DeadByDaylight.SlasherPlayer.OnKillerAbilityUpdateActivate
struct ASlasherPlayer_OnKillerAbilityUpdateActivate_Params
{
	TEnumAsByte<EKillerAbilities>                      KillerAbility;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              percent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.SlasherPlayer.OnKillerAbilityEndDeactivate
struct ASlasherPlayer_OnKillerAbilityEndDeactivate_Params
{
	TEnumAsByte<EKillerAbilities>                      KillerAbility;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Forced;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.SlasherPlayer.OnKillerAbilityEndActivate
struct ASlasherPlayer_OnKillerAbilityEndActivate_Params
{
	TEnumAsByte<EKillerAbilities>                      KillerAbility;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.SlasherPlayer.OnKillerAbilityBeginDeactivate
struct ASlasherPlayer_OnKillerAbilityBeginDeactivate_Params
{
	TEnumAsByte<EKillerAbilities>                      KillerAbility;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Forced;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.SlasherPlayer.OnKillerAbilityBeginActivate
struct ASlasherPlayer_OnKillerAbilityBeginActivate_Params
{
	TEnumAsByte<EKillerAbilities>                      KillerAbility;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.SlasherPlayer.OnInvisibilityChargeEmptied
struct ASlasherPlayer_OnInvisibilityChargeEmptied_Params
{
};

// Function DeadByDaylight.SlasherPlayer.OnInvisibilityBurnoutChargeCompletionChanged
struct ASlasherPlayer_OnInvisibilityBurnoutChargeCompletionChanged_Params
{
	bool                                               COMPLETED;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              instigators;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function DeadByDaylight.SlasherPlayer.OnChaseTargetFound
struct ASlasherPlayer_OnChaseTargetFound_Params
{
	class APawn*                                       Pawn;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.SlasherPlayer.OnCamperHit
struct ASlasherPlayer_OnCamperHit_Params
{
	class ACamperPlayer*                               camper;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               showBloodSpatter;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.SlasherPlayer.OnBlindChargeEmptied
struct ASlasherPlayer_OnBlindChargeEmptied_Params
{
};

// Function DeadByDaylight.SlasherPlayer.Multicast_SetLungeType
struct ASlasherPlayer_Multicast_SetLungeType_Params
{
	int                                                lungeType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.SlasherPlayer.Multicast_SetGuidedAction
struct ASlasherPlayer_Multicast_SetGuidedAction_Params
{
	TEnumAsByte<ESlasherGuidedAction>                  Action;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.SlasherPlayer.Multicast_SetAttackDetectionZoneSet
struct ASlasherPlayer_Multicast_SetAttackDetectionZoneSet_Params
{
	TEnumAsByte<EAttackZoneSet>                        attackZoneSet;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.SlasherPlayer.Multicast_OnChaseStart
struct ASlasherPlayer_Multicast_OnChaseStart_Params
{
	class ACamperPlayer*                               camper;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.SlasherPlayer.Multicast_OnChaseEnd
struct ASlasherPlayer_Multicast_OnChaseEnd_Params
{
	class ACamperPlayer*                               camper;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              chaseTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.SlasherPlayer.Multicast_DisplayAttackZones
struct ASlasherPlayer_Multicast_DisplayAttackZones_Params
{
	bool                                               Display;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.SlasherPlayer.Multicast_DamageTargetNotification
struct ASlasherPlayer_Multicast_DamageTargetNotification_Params
{
	class ADBDPlayer*                                  Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAttackType>                           attackType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               didDamage;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.SlasherPlayer.Multicast_CamperHitAesthetic
struct ASlasherPlayer_Multicast_CamperHitAesthetic_Params
{
	class ACamperPlayer*                               camper;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               causedKO;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               showBloodSpatter;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.SlasherPlayer.Local_RequestAttack
struct ASlasherPlayer_Local_RequestAttack_Params
{
	TEnumAsByte<EAttackType>                           attackType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.SlasherPlayer.IsUncloaking
struct ASlasherPlayer_IsUncloaking_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.SlasherPlayer.IsInChase
struct ASlasherPlayer_IsInChase_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.SlasherPlayer.IsInBlinkCooldown
struct ASlasherPlayer_IsInBlinkCooldown_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.SlasherPlayer.IsImmuneToObservingPlayerDetection
struct ASlasherPlayer_IsImmuneToObservingPlayerDetection_Params
{
	class ADBDPlayer*                                  observingPlayer;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.SlasherPlayer.IsHooking
struct ASlasherPlayer_IsHooking_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.SlasherPlayer.IsCloaking
struct ASlasherPlayer_IsCloaking_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.SlasherPlayer.IsChainsawSprinting
struct ASlasherPlayer_IsChainsawSprinting_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.SlasherPlayer.IsChainBlinking
struct ASlasherPlayer_IsChainBlinking_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.SlasherPlayer.IsCarrying
struct ASlasherPlayer_IsCarrying_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.SlasherPlayer.IsASurvivorInTerrorRadius
struct ASlasherPlayer_IsASurvivorInTerrorRadius_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.SlasherPlayer.IsAllowedToKill
struct ASlasherPlayer_IsAllowedToKill_Params
{
	class ACamperPlayer*                               camper;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.SlasherPlayer.HasKillerAbility
struct ASlasherPlayer_HasKillerAbility_Params
{
	TEnumAsByte<EKillerAbilities>                      KillerAbility;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.SlasherPlayer.GetTerrorRadius
struct ASlasherPlayer_GetTerrorRadius_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.SlasherPlayer.GetStealthRatio
struct ASlasherPlayer_GetStealthRatio_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.SlasherPlayer.GetStalkTierWalkSpeedMultiplier
struct ASlasherPlayer_GetStalkTierWalkSpeedMultiplier_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.SlasherPlayer.GetStalkTierCarrySpeedMultplier
struct ASlasherPlayer_GetStalkTierCarrySpeedMultplier_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.SlasherPlayer.GetRageTier
struct ASlasherPlayer_GetRageTier_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.SlasherPlayer.GetPlayerDropOffPoint
struct ASlasherPlayer_GetPlayerDropOffPoint_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.SlasherPlayer.GetObsessionTarget
struct ASlasherPlayer_GetObsessionTarget_Params
{
	class ACamperPlayer*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.SlasherPlayer.GetLookRotation
struct ASlasherPlayer_GetLookRotation_Params
{
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.SlasherPlayer.GetLongestChaseDuration
struct ASlasherPlayer_GetLongestChaseDuration_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.SlasherPlayer.GetLightIntensity
struct ASlasherPlayer_GetLightIntensity_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.SlasherPlayer.GetItemAddons
struct ASlasherPlayer_GetItemAddons_Params
{
	TArray<class UItemAddon*>                          ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function DeadByDaylight.SlasherPlayer.GetInvisibilityBurnoutChargeableComponent
struct ASlasherPlayer_GetInvisibilityBurnoutChargeableComponent_Params
{
	class UChargeableComponent*                        ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function DeadByDaylight.SlasherPlayer.GetInteractingCamper
struct ASlasherPlayer_GetInteractingCamper_Params
{
	class ACamperPlayer*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.SlasherPlayer.GetGuidedCamper
struct ASlasherPlayer_GetGuidedCamper_Params
{
	class ACamperPlayer*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.SlasherPlayer.GetGuidedAction
struct ASlasherPlayer_GetGuidedAction_Params
{
	TEnumAsByte<ESlasherGuidedAction>                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.SlasherPlayer.GetBaseTerrorRadius
struct ASlasherPlayer_GetBaseTerrorRadius_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.SlasherPlayer.GetAnimDirection
struct ASlasherPlayer_GetAnimDirection_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.SlasherPlayer.DisplayAttackZones
struct ASlasherPlayer_DisplayAttackZones_Params
{
	bool                                               Display;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.SlasherPlayer.DetectObstruction
struct ASlasherPlayer_DetectObstruction_Params
{
	class UPhysicalMaterial*                           physicalMaterialOut;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     positionOut;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     normalOut;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EDetectionZone>                        detectionZoneID;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.SlasherPlayer.DBD_SetAttackZones
struct ASlasherPlayer_DBD_SetAttackZones_Params
{
	TEnumAsByte<EAttackZoneSet>                        attackZoneSet;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.SlasherPlayer.DBD_DisplayAttackZones
struct ASlasherPlayer_DBD_DisplayAttackZones_Params
{
	bool                                               Display;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.SlasherPlayer.DBD_AllowKilling
struct ASlasherPlayer_DBD_AllowKilling_Params
{
};

// Function DeadByDaylight.SlasherPlayer.Client_RequestStun
struct ASlasherPlayer_Client_RequestStun_Params
{
	TEnumAsByte<EStunType>                             stunType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class ADBDPlayer*                                  stunner;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.SlasherPlayer.CanPickupSurvivor
struct ASlasherPlayer_CanPickupSurvivor_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.SlasherPlayer.CanPerformKillerAbility
struct ASlasherPlayer_CanPerformKillerAbility_Params
{
	TEnumAsByte<EKillerAbilities>                      KillerAbility;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.SlasherPlayer.CanGainRage
struct ASlasherPlayer_CanGainRage_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.SlasherPlayer.CanEscapeCarry
struct ASlasherPlayer_CanEscapeCarry_Params
{
	class ACamperPlayer*                               Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.SlasherPlayer.CanBeBlinded
struct ASlasherPlayer_CanBeBlinded_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.SlasherPlayer.CanAffectLocalPlayer
struct ASlasherPlayer_CanAffectLocalPlayer_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.SlasherPlayer.CameraUpdated
struct ASlasherPlayer_CameraUpdated_Params
{
};

// Function DeadByDaylight.SlasherPlayer.BroadcastOffensiveAction
struct ASlasherPlayer_BroadcastOffensiveAction_Params
{
};

// Function DeadByDaylight.SlasherPlayer.Authority_StopBlinding
struct ASlasherPlayer_Authority_StopBlinding_Params
{
	class AActor*                                      effector;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.SlasherPlayer.Authority_Blinded
struct ASlasherPlayer_Authority_Blinded_Params
{
	TEnumAsByte<EBlindType>                            blindType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              coolDown;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      effector;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.SlasherPlayer.Authority_ApplyDamageToTarget
struct ASlasherPlayer_Authority_ApplyDamageToTarget_Params
{
	class ADBDPlayer*                                  Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               forceCauseKO;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.SlasherPlayer.Authority_AllowKilling
struct ASlasherPlayer_Authority_AllowKilling_Params
{
	int                                                numKills;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.SlasherPlayer.Authority_AddInvisibilityBurnoutCharge
struct ASlasherPlayer_Authority_AddInvisibilityBurnoutCharge_Params
{
	class ADBDPlayer*                                  blinder;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              charge;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      effector;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDCharacterMovementComponent.SetRandomInputAmplitude
struct UDBDCharacterMovementComponent_SetRandomInputAmplitude_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDCharacterMovementComponent.SetMovementModifierDetector
struct UDBDCharacterMovementComponent_SetMovementModifierDetector_Params
{
	class UCapsuleComponent*                           movementModifierDetector;                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DeadByDaylight.DBDCharacterMovementComponent.OnMovementModifierDetectorOverlapExit
struct UDBDCharacterMovementComponent_OnMovementModifierDetectorOverlapExit_Params
{
	class UPrimitiveComponent*                         HitComponent;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDCharacterMovementComponent.OnMovementModifierDetectorOverlapEnter
struct UDBDCharacterMovementComponent_OnMovementModifierDetectorOverlapEnter_Params
{
	class UPrimitiveComponent*                         HitComponent;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDCharacterMovementComponent.IsApplyingRandomInput
struct UDBDCharacterMovementComponent_IsApplyingRandomInput_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDCharacterMovementComponent.GetOverlappedMovementModifierActor
struct UDBDCharacterMovementComponent_GetOverlappedMovementModifierActor_Params
{
	class AMovementModifierActor*                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.NetworkFenceActor.Server_ClientPassedFence
struct ANetworkFenceActor_Server_ClientPassedFence_Params
{
	TArray<struct FGuid>                               Fences;                                                   // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function DeadByDaylight.NetworkFenceActor.Client_AllPassedFence
struct ANetworkFenceActor_Client_AllPassedFence_Params
{
	TArray<struct FGuid>                               Fences;                                                   // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function DeadByDaylight.DBDEmblem.TickEmblem
struct UDBDEmblem_TickEmblem_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDEmblem.OnPlayerGameplayEvent
struct UDBDEmblem_OnPlayerGameplayEvent_Params
{
	TEnumAsByte<EDBDScoreTypes>                        gameplayEventType;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Instigator;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDEmblem.OnGameplayEvent
struct UDBDEmblem_OnGameplayEvent_Params
{
	TEnumAsByte<EDBDScoreTypes>                        gameplayEventType;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Instigator;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDEmblem.IsOwnerPlayer
struct UDBDEmblem_IsOwnerPlayer_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDEmblem.InitializeEmblem
struct UDBDEmblem_InitializeEmblem_Params
{
};

// Function DeadByDaylight.DBDEmblem.GetWorld
struct UDBDEmblem_GetWorld_Params
{
	class UWorld*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDEmblem.GetProgress
struct UDBDEmblem_GetProgress_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDEmblem.GetEmblemQuality
struct UDBDEmblem_GetEmblemQuality_Params
{
	TEnumAsByte<EEmblemQuality>                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDEmblem.EvaluateEmblemQuality
struct UDBDEmblem_EvaluateEmblemQuality_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayerControllerBase.Server_UpdateReplicatedPips
struct ADBDPlayerControllerBase_Server_UpdateReplicatedPips_Params
{
	int                                                pipsToAdd;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayerControllerBase.Server_SendMessage
struct ADBDPlayerControllerBase_Server_SendMessage_Params
{
	int                                                PlayerId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      MirrorsId;                                                // (Parm, ZeroConstructor)
	class FString                                      PlayerName;                                               // (Parm, ZeroConstructor)
	class FString                                      msg;                                                      // (Parm, ZeroConstructor)
};

// Function DeadByDaylight.DBDPlayerControllerBase.Server_SendClientAuthentication
struct ADBDPlayerControllerBase_Server_SendClientAuthentication_Params
{
	class FString                                      authClientTicket;                                         // (Parm, ZeroConstructor)
	uint64_t                                           SteamId;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           ticketLength;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayerControllerBase.Server_SelectSlasher
struct ADBDPlayerControllerBase_Server_SelectSlasher_Params
{
	int                                                slasherIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayerControllerBase.Server_SelectCamper
struct ADBDPlayerControllerBase_Server_SelectCamper_Params
{
	int                                                camperIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayerControllerBase.Server_ReceivePlayerProfile
struct ADBDPlayerControllerBase_Server_ReceivePlayerProfile_Params
{
	class FString                                      MirrorsId;                                                // (Parm, ZeroConstructor)
	struct FPlayerSavedProfileDataShared               savedProfileData;                                         // (Parm)
	struct FPlayerLoadoutData                          playerLoadout;                                            // (Parm)
};

// Function DeadByDaylight.DBDPlayerControllerBase.Server_EACMessageFromClient
struct ADBDPlayerControllerBase_Server_EACMessageFromClient_Params
{
	TArray<unsigned char>                              Message;                                                  // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
	uint32_t                                           messageLength;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayerControllerBase.Server_CheatFireScoreEvent
struct ADBDPlayerControllerBase_Server_CheatFireScoreEvent_Params
{
	TEnumAsByte<EDBDScoreTypes>                        Category;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayerControllerBase.Server_BuildProceduralLevelFromSeed
struct ADBDPlayerControllerBase_Server_BuildProceduralLevelFromSeed_Params
{
	int                                                Seed;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayerControllerBase.Server_BuildProceduralLevelFromMap
struct ADBDPlayerControllerBase_Server_BuildProceduralLevelFromMap_Params
{
	class FString                                      Map;                                                      // (Parm, ZeroConstructor)
};

// Function DeadByDaylight.DBDPlayerControllerBase.Server
struct ADBDPlayerControllerBase_Server_Params
{
	class FString                                      commandLine;                                              // (Parm, ZeroConstructor)
};

// Function DeadByDaylight.DBDPlayerControllerBase.OnRep_PlayerState
struct ADBDPlayerControllerBase_OnRep_PlayerState_Params
{
};

// Function DeadByDaylight.DBDPlayerControllerBase.DBD_UpdateLocalStats
struct ADBDPlayerControllerBase_DBD_UpdateLocalStats_Params
{
};

// Function DeadByDaylight.DBDPlayerControllerBase.DBD_SetCurrentCharacterPrestigeDatesPast
struct ADBDPlayerControllerBase_DBD_SetCurrentCharacterPrestigeDatesPast_Params
{
};

// Function DeadByDaylight.DBDPlayerControllerBase.DBD_SetCurrentCharacterPrestigeDatesNow
struct ADBDPlayerControllerBase_DBD_SetCurrentCharacterPrestigeDatesNow_Params
{
};

// Function DeadByDaylight.DBDPlayerControllerBase.DBD_SetCurrentCharacterPrestigeDatesFuture
struct ADBDPlayerControllerBase_DBD_SetCurrentCharacterPrestigeDatesFuture_Params
{
};

// Function DeadByDaylight.DBDPlayerControllerBase.DBD_FireTestScore
struct ADBDPlayerControllerBase_DBD_FireTestScore_Params
{
	int                                                Category;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayerControllerBase.DBD_FillScoreCategory
struct ADBDPlayerControllerBase_DBD_FillScoreCategory_Params
{
	int                                                Category;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayerControllerBase.DBD_FillAllScoreCategories
struct ADBDPlayerControllerBase_DBD_FillAllScoreCategories_Params
{
};

// Function DeadByDaylight.DBDPlayerControllerBase.DBD_DebugSendChatMessage
struct ADBDPlayerControllerBase_DBD_DebugSendChatMessage_Params
{
	class FString                                      msg;                                                      // (Parm, ZeroConstructor)
};

// Function DeadByDaylight.DBDPlayerControllerBase.DBD_BuildFromSeed
struct ADBDPlayerControllerBase_DBD_BuildFromSeed_Params
{
	int                                                Seed;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayerControllerBase.DBD_BuildFromMap
struct ADBDPlayerControllerBase_DBD_BuildFromMap_Params
{
	class FString                                      Map;                                                      // (Parm, ZeroConstructor)
};

// Function DeadByDaylight.DBDPlayerControllerBase.Client_ValidateServer
struct ADBDPlayerControllerBase_Client_ValidateServer_Params
{
};

// Function DeadByDaylight.DBDPlayerControllerBase.Client_SendServerAuthentication
struct ADBDPlayerControllerBase_Client_SendServerAuthentication_Params
{
	class FString                                      authServerTicket;                                         // (Parm, ZeroConstructor)
	uint64_t                                           SteamId;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           ticketLength;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayerControllerBase.Client_RequestPlayerProfile
struct ADBDPlayerControllerBase_Client_RequestPlayerProfile_Params
{
	bool                                               fromOfflineLobby;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayerControllerBase.Client_GameEnded
struct ADBDPlayerControllerBase_Client_GameEnded_Params
{
};

// Function DeadByDaylight.DBDPlayerControllerBase.Client_FinishedPlaying
struct ADBDPlayerControllerBase_Client_FinishedPlaying_Params
{
};

// Function DeadByDaylight.DBDPlayerControllerBase.Client_EACMessageFromServer
struct ADBDPlayerControllerBase_Client_EACMessageFromServer_Params
{
	TArray<unsigned char>                              Message;                                                  // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
	uint32_t                                           messageLength;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayerControllerBase.CallConsoleCmdOnServer_Server
struct ADBDPlayerControllerBase_CallConsoleCmdOnServer_Server_Params
{
	class FString                                      commandLine;                                              // (Parm, ZeroConstructor)
};

// Function DeadByDaylight.DBDPlayerController.Server_SetSpectatorModeInEditor
struct ADBDPlayerController_Server_SetSpectatorModeInEditor_Params
{
	bool                                               On;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class ADBDPlayerState*                             spectatingPlayerState;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayerController.Server_SetSpectatorMode
struct ADBDPlayerController_Server_SetSpectatorMode_Params
{
	bool                                               On;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayerController.Server_SetReadyToTravel
struct ADBDPlayerController_Server_SetReadyToTravel_Params
{
};

// Function DeadByDaylight.DBDPlayerController.Server_LeaveGame
struct ADBDPlayerController_Server_LeaveGame_Params
{
	bool                                               joiningLobby;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayerController.Server_EndGame
struct ADBDPlayerController_Server_EndGame_Params
{
	bool                                               serverHasLeftTheGame;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayerController.Server_CompleteEscapeRequirements
struct ADBDPlayerController_Server_CompleteEscapeRequirements_Params
{
};

// Function DeadByDaylight.DBDPlayerController.OnRep_Fence
struct ADBDPlayerController_OnRep_Fence_Params
{
};

// Function DeadByDaylight.DBDPlayerController.IsSpectating
struct ADBDPlayerController_IsSpectating_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayerController.GetSpectatedPlayerState
struct ADBDPlayerController_GetSpectatedPlayerState_Params
{
	class ADBDPlayerState*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayerController.GetSpectatedPlayer
struct ADBDPlayerController_GetSpectatedPlayer_Params
{
	class ADBDPlayer*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayerController.GetControlledPlayer
struct ADBDPlayerController_GetControlledPlayer_Params
{
	class ADBDPlayer*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayerController.Client_SetSpectatorModeInEditor
struct ADBDPlayerController_Client_SetSpectatorModeInEditor_Params
{
	bool                                               On;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class ADBDPlayerState*                             spectatingPlayerState;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayerController.Client_SetSpectatorMode
struct ADBDPlayerController_Client_SetSpectatorMode_Params
{
	bool                                               On;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDCheatManager.DBD_WakeUpSurvivor
struct UDBDCheatManager_DBD_WakeUpSurvivor_Params
{
};

// Function DeadByDaylight.DBDCheatManager.DBD_VisualizeHookRenderRegions
struct UDBDCheatManager_DBD_VisualizeHookRenderRegions_Params
{
};

// Function DeadByDaylight.DBDCheatManager.DBD_ValidateCustomizationItems
struct UDBDCheatManager_DBD_ValidateCustomizationItems_Params
{
	struct FName                                       ItemName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDCheatManager.DBD_ValidateAllCustomizationItems
struct UDBDCheatManager_DBD_ValidateAllCustomizationItems_Params
{
};

// Function DeadByDaylight.DBDCheatManager.DBD_UnloadDarkPartAssetLibrary
struct UDBDCheatManager_DBD_UnloadDarkPartAssetLibrary_Params
{
};

// Function DeadByDaylight.DBDCheatManager.DBD_UnloadCharacterAssetLibrary
struct UDBDCheatManager_DBD_UnloadCharacterAssetLibrary_Params
{
	int                                                CharacterId;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDCheatManager.DBD_UnloadBlindPackAssetLibrary
struct UDBDCheatManager_DBD_UnloadBlindPackAssetLibrary_Params
{
};

// Function DeadByDaylight.DBDCheatManager.DBD_UnloadAllCharacterAssetLibrary
struct UDBDCheatManager_DBD_UnloadAllCharacterAssetLibrary_Params
{
};

// Function DeadByDaylight.DBDCheatManager.DBD_ToggleProceduralDebugMode
struct UDBDCheatManager_DBD_ToggleProceduralDebugMode_Params
{
};

// Function DeadByDaylight.DBDCheatManager.DBD_TestUnhookSacrificeBug
struct UDBDCheatManager_DBD_TestUnhookSacrificeBug_Params
{
	bool                                               Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDCheatManager.DBD_TeleportToTile
struct UDBDCheatManager_DBD_TeleportToTile_Params
{
	uint32_t                                           X;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           Y;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDCheatManager.DBD_Teleport
struct UDBDCheatManager_DBD_Teleport_Params
{
	float                                              X;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Y;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Z;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDCheatManager.DBD_StopVideoPlayer
struct UDBDCheatManager_DBD_StopVideoPlayer_Params
{
};

// Function DeadByDaylight.DBDCheatManager.DBD_StopLoadCharacterAssetLibrary
struct UDBDCheatManager_DBD_StopLoadCharacterAssetLibrary_Params
{
	int                                                CharacterId;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDCheatManager.DBD_SpectateSurvivor
struct UDBDCheatManager_DBD_SpectateSurvivor_Params
{
};

// Function DeadByDaylight.DBDCheatManager.DBD_SpectateKiller
struct UDBDCheatManager_DBD_SpectateKiller_Params
{
};

// Function DeadByDaylight.DBDCheatManager.DBD_SpawnStatusEffect
struct UDBDCheatManager_DBD_SpawnStatusEffect_Params
{
	struct FName                                       statusEffectID;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDCheatManager.DBD_SpawnPerk
struct UDBDCheatManager_DBD_SpawnPerk_Params
{
	struct FName                                       PerkID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                PerkLevel;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDCheatManager.DBD_SpawnkCharacterInMainMenu
struct UDBDCheatManager_DBD_SpawnkCharacterInMainMenu_Params
{
	int                                                CharacterId;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDCheatManager.DBD_SpawnItemInMainMenu
struct UDBDCheatManager_DBD_SpawnItemInMainMenu_Params
{
	struct FName                                       ItemId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDCheatManager.DBD_SpawnItemAddon
struct UDBDCheatManager_DBD_SpawnItemAddon_Params
{
	struct FName                                       AddonID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDCheatManager.DBD_SpawnItem
struct UDBDCheatManager_DBD_SpawnItem_Params
{
	struct FName                                       ItemId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDCheatManager.DBD_SpawnDarkCharacterInMainMenu
struct UDBDCheatManager_DBD_SpawnDarkCharacterInMainMenu_Params
{
	int                                                CharacterId;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       focusCategory;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDCheatManager.DBD_SpawnCampers
struct UDBDCheatManager_DBD_SpawnCampers_Params
{
	int                                                Count;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDCheatManager.DBD_ShowStoreUI
struct UDBDCheatManager_DBD_ShowStoreUI_Params
{
	class FString                                      productId;                                                // (Parm, ZeroConstructor)
};

// Function DeadByDaylight.DBDCheatManager.DBD_ShowKillerPowerDebugInfo
struct UDBDCheatManager_DBD_ShowKillerPowerDebugInfo_Params
{
	bool                                               Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDCheatManager.DBD_ShowGameInstalledPrompt
struct UDBDCheatManager_DBD_ShowGameInstalledPrompt_Params
{
};

// Function DeadByDaylight.DBDCheatManager.DBD_ShowDebugSpawnBox
struct UDBDCheatManager_DBD_ShowDebugSpawnBox_Params
{
	int                                                itemCountPerBox;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              seconds;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDCheatManager.DBD_ShopCameraQuit
struct UDBDCheatManager_DBD_ShopCameraQuit_Params
{
};

// Function DeadByDaylight.DBDCheatManager.DBD_ShopCameraMain
struct UDBDCheatManager_DBD_ShopCameraMain_Params
{
};

// Function DeadByDaylight.DBDCheatManager.DBD_ShopCameraBox
struct UDBDCheatManager_DBD_ShopCameraBox_Params
{
};

// Function DeadByDaylight.DBDCheatManager.DBD_SetWindowFreeCam
struct UDBDCheatManager_DBD_SetWindowFreeCam_Params
{
	bool                                               Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDCheatManager.DBD_SetUserBonusBloodpoints
struct UDBDCheatManager_DBD_SetUserBonusBloodpoints_Params
{
	int                                                Points;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDCheatManager.DBD_SetUserBloodpoints
struct UDBDCheatManager_DBD_SetUserBloodpoints_Params
{
	int                                                Points;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDCheatManager.DBD_SetTotalXp
struct UDBDCheatManager_DBD_SetTotalXp_Params
{
	int                                                totalXp;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDCheatManager.DBD_SetSurvivorLeftCount
struct UDBDCheatManager_DBD_SetSurvivorLeftCount_Params
{
	int                                                Count;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDCheatManager.DBD_SetStoreHitBoxesVisible
struct UDBDCheatManager_DBD_SetStoreHitBoxesVisible_Params
{
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDCheatManager.DBD_SetSlasherAutoAttackOnCamperInteractFrameDelay
struct UDBDCheatManager_DBD_SetSlasherAutoAttackOnCamperInteractFrameDelay_Params
{
	int                                                frames;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDCheatManager.DBD_SetRunVaultEnabled
struct UDBDCheatManager_DBD_SetRunVaultEnabled_Params
{
	bool                                               Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDCheatManager.DBD_SetReverseTraverseEnabled
struct UDBDCheatManager_DBD_SetReverseTraverseEnabled_Params
{
	bool                                               Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDCheatManager.DBD_SetRandomInputAmplitude
struct UDBDCheatManager_DBD_SetRandomInputAmplitude_Params
{
	float                                              Amplitude;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDCheatManager.DBD_SetPlayerLevel
struct UDBDCheatManager_DBD_SetPlayerLevel_Params
{
	int                                                currentXp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                playerLevel;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Prestige;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDCheatManager.DBD_SetPerchRadiusThreshold
struct UDBDCheatManager_DBD_SetPerchRadiusThreshold_Params
{
	float                                              Threshold;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDCheatManager.DBD_SetOnHookDrainToNextStage
struct UDBDCheatManager_DBD_SetOnHookDrainToNextStage_Params
{
	bool                                               onHookDrainToNextStage;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDCheatManager.DBD_SetOfferingTriggersVisibility
struct UDBDCheatManager_DBD_SetOfferingTriggersVisibility_Params
{
	bool                                               IsVisible;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDCheatManager.DBD_SetNewsContentUpdateTimer
struct UDBDCheatManager_DBD_SetNewsContentUpdateTimer_Params
{
	float                                              updateInSeconds;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               repeatTimer;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDCheatManager.DBD_SetMaxWalkSpeed
struct UDBDCheatManager_DBD_SetMaxWalkSpeed_Params
{
	float                                              MaxWalkSpeed;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDCheatManager.DBD_SetLungeType
struct UDBDCheatManager_DBD_SetLungeType_Params
{
	int                                                lungeType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDCheatManager.DBD_SetKillerHeadVisibility
struct UDBDCheatManager_DBD_SetKillerHeadVisibility_Params
{
	bool                                               Visible;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDCheatManager.DBD_SetItemNormalizedEnergyLevel
struct UDBDCheatManager_DBD_SetItemNormalizedEnergyLevel_Params
{
	float                                              normalizedLevel;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDCheatManager.DBD_SetItemEnergyLevel
struct UDBDCheatManager_DBD_SetItemEnergyLevel_Params
{
	float                                              Level;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDCheatManager.DBD_SetHighestWeightSeenNews
struct UDBDCheatManager_DBD_SetHighestWeightSeenNews_Params
{
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDCheatManager.DBD_SetHatchetVar
struct UDBDCheatManager_DBD_SetHatchetVar_Params
{
	struct FName                                       VarName;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDCheatManager.DBD_SetFearMarketUpdateTimer
struct UDBDCheatManager_DBD_SetFearMarketUpdateTimer_Params
{
	float                                              updateInSeconds;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               repeatTimer;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDCheatManager.DBD_SetEthereal
struct UDBDCheatManager_DBD_SetEthereal_Params
{
	bool                                               Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDCheatManager.DBD_SetEnableHookSlashableZone
struct UDBDCheatManager_DBD_SetEnableHookSlashableZone_Params
{
	bool                                               Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDCheatManager.DBD_SetDebugSnapPoint
struct UDBDCheatManager_DBD_SetDebugSnapPoint_Params
{
	bool                                               Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDCheatManager.DBD_SetDebugPrintAvailableInteractions
struct UDBDCheatManager_DBD_SetDebugPrintAvailableInteractions_Params
{
	bool                                               Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDCheatManager.DBD_SetDebugFailAllInteractions
struct UDBDCheatManager_DBD_SetDebugFailAllInteractions_Params
{
	bool                                               Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDCheatManager.DBD_SetDebugCarry
struct UDBDCheatManager_DBD_SetDebugCarry_Params
{
	bool                                               Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDCheatManager.DBD_SetDate
struct UDBDCheatManager_DBD_SetDate_Params
{
	class FString                                      dateString;                                               // (Parm, ZeroConstructor)
};

// Function DeadByDaylight.DBDCheatManager.DBD_SetCustomizationMesh
struct UDBDCheatManager_DBD_SetCustomizationMesh_Params
{
	struct FName                                       ItemName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDCheatManager.DBD_SetContinuousPrintState
struct UDBDCheatManager_DBD_SetContinuousPrintState_Params
{
	bool                                               Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDCheatManager.DBD_SetContinuousPrintDebug
struct UDBDCheatManager_DBD_SetContinuousPrintDebug_Params
{
	bool                                               Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDCheatManager.DBD_SetChunkProgress
struct UDBDCheatManager_DBD_SetChunkProgress_Params
{
	int                                                chunkProgress;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDCheatManager.DBD_SetChunkingState
struct UDBDCheatManager_DBD_SetChunkingState_Params
{
	unsigned char                                      chunkState;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDCheatManager.DBD_SetCharacterStat
struct UDBDCheatManager_DBD_SetCharacterStat_Params
{
	struct FName                                       StatName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDCheatManager.DBD_SetAutoItemInteractEnabled
struct UDBDCheatManager_DBD_SetAutoItemInteractEnabled_Params
{
	bool                                               Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDCheatManager.DBD_SetAutoInteractEnabled
struct UDBDCheatManager_DBD_SetAutoInteractEnabled_Params
{
	bool                                               Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDCheatManager.DBD_SetAuthoritativeMovement
struct UDBDCheatManager_DBD_SetAuthoritativeMovement_Params
{
	bool                                               Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDCheatManager.DBD_SetActiveGeneratorCount
struct UDBDCheatManager_DBD_SetActiveGeneratorCount_Params
{
	int                                                Count;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDCheatManager.DBD_SelectSpawner
struct UDBDCheatManager_DBD_SelectSpawner_Params
{
	int                                                Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDCheatManager.DBD_SelectSlasher
struct UDBDCheatManager_DBD_SelectSlasher_Params
{
	uint32_t                                           slasherIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDCheatManager.DBD_SelectCamper
struct UDBDCheatManager_DBD_SelectCamper_Params
{
	uint32_t                                           camperIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDCheatManager.DBD_ReverseBearTrap_ForceTimer
struct UDBDCheatManager_DBD_ReverseBearTrap_ForceTimer_Params
{
	bool                                               Force;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDCheatManager.DBD_ReverseBearTrap_FastForward
struct UDBDCheatManager_DBD_ReverseBearTrap_FastForward_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDCheatManager.DBD_ReverseBearTrap_Execute
struct UDBDCheatManager_DBD_ReverseBearTrap_Execute_Params
{
};

// Function DeadByDaylight.DBDCheatManager.DBD_ResistentCamper
struct UDBDCheatManager_DBD_ResistentCamper_Params
{
};

// Function DeadByDaylight.DBDCheatManager.DBD_ResetTutorialTips
struct UDBDCheatManager_DBD_ResetTutorialTips_Params
{
};

// Function DeadByDaylight.DBDCheatManager.DBD_ResetSeason
struct UDBDCheatManager_DBD_ResetSeason_Params
{
};

// Function DeadByDaylight.DBDCheatManager.DBD_ResetPlayerLevelAndXp
struct UDBDCheatManager_DBD_ResetPlayerLevelAndXp_Params
{
};

// Function DeadByDaylight.DBDCheatManager.DBD_ResetPallets
struct UDBDCheatManager_DBD_ResetPallets_Params
{
};

// Function DeadByDaylight.DBDCheatManager.DBD_ResetMeshRelativeOffSet
struct UDBDCheatManager_DBD_ResetMeshRelativeOffSet_Params
{
};

// Function DeadByDaylight.DBDCheatManager.DBD_ResetHookStage
struct UDBDCheatManager_DBD_ResetHookStage_Params
{
};

// Function DeadByDaylight.DBDCheatManager.DBD_ResetCharacterStat
struct UDBDCheatManager_DBD_ResetCharacterStat_Params
{
	struct FName                                       StatName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDCheatManager.DBD_ResetCamera
struct UDBDCheatManager_DBD_ResetCamera_Params
{
};

// Function DeadByDaylight.DBDCheatManager.DBD_ResetBloodpoints
struct UDBDCheatManager_DBD_ResetBloodpoints_Params
{
};

// Function DeadByDaylight.DBDCheatManager.DBD_ResetAllCharacterStats
struct UDBDCheatManager_DBD_ResetAllCharacterStats_Params
{
};

// Function DeadByDaylight.DBDCheatManager.DBD_RemoveReverseBearTrap
struct UDBDCheatManager_DBD_RemoveReverseBearTrap_Params
{
};

// Function DeadByDaylight.DBDCheatManager.DBD_RemoveHP
struct UDBDCheatManager_DBD_RemoveHP_Params
{
};

// Function DeadByDaylight.DBDCheatManager.DBD_RemoveDust
struct UDBDCheatManager_DBD_RemoveDust_Params
{
	int                                                Count;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDCheatManager.DBD_RemoveAllStatusEffects
struct UDBDCheatManager_DBD_RemoveAllStatusEffects_Params
{
};

// Function DeadByDaylight.DBDCheatManager.DBD_RemoveAllPerks
struct UDBDCheatManager_DBD_RemoveAllPerks_Params
{
};

// Function DeadByDaylight.DBDCheatManager.DBD_Ragdoll
struct UDBDCheatManager_DBD_Ragdoll_Params
{
	struct FName                                       RootBone;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Blend;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDCheatManager.DBD_PutSurvivorToSleep
struct UDBDCheatManager_DBD_PutSurvivorToSleep_Params
{
};

// Function DeadByDaylight.DBDCheatManager.DBD_ProcessOffering
struct UDBDCheatManager_DBD_ProcessOffering_Params
{
};

// Function DeadByDaylight.DBDCheatManager.DBD_PrintSteamBuildIds
struct UDBDCheatManager_DBD_PrintSteamBuildIds_Params
{
};

// Function DeadByDaylight.DBDCheatManager.DBD_PrintCurrentStateOnce
struct UDBDCheatManager_DBD_PrintCurrentStateOnce_Params
{
};

// Function DeadByDaylight.DBDCheatManager.DBD_PlayMontage
struct UDBDCheatManager_DBD_PlayMontage_Params
{
	struct FName                                       MontageID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDCheatManager.DBD_PlayEntityTurn
struct UDBDCheatManager_DBD_PlayEntityTurn_Params
{
};

// Function DeadByDaylight.DBDCheatManager.DBD_OptionToggleUseHeadphones
struct UDBDCheatManager_DBD_OptionToggleUseHeadphones_Params
{
};

// Function DeadByDaylight.DBDCheatManager.DBD_OptionToggleMuteOnFocusLost
struct UDBDCheatManager_DBD_OptionToggleMuteOnFocusLost_Params
{
};

// Function DeadByDaylight.DBDCheatManager.DBD_OptionToggleMuteMusic
struct UDBDCheatManager_DBD_OptionToggleMuteMusic_Params
{
};

// Function DeadByDaylight.DBDCheatManager.DBD_OptionToggleInvertY
struct UDBDCheatManager_DBD_OptionToggleInvertY_Params
{
};

// Function DeadByDaylight.DBDCheatManager.DBD_OptionToggleFullScreen
struct UDBDCheatManager_DBD_OptionToggleFullScreen_Params
{
};

// Function DeadByDaylight.DBDCheatManager.DBD_OptionToggleAutoAdjust
struct UDBDCheatManager_DBD_OptionToggleAutoAdjust_Params
{
};

// Function DeadByDaylight.DBDCheatManager.DBD_OptionSetResolution
struct UDBDCheatManager_DBD_OptionSetResolution_Params
{
	int                                                Resolution;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDCheatManager.DBD_OptionSetQualityLevel
struct UDBDCheatManager_DBD_OptionSetQualityLevel_Params
{
	uint32_t                                           qualityLevel;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDCheatManager.DBD_OptionSetMainVolume
struct UDBDCheatManager_DBD_OptionSetMainVolume_Params
{
	int                                                Volume;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDCheatManager.DBD_OptionSetLanguage
struct UDBDCheatManager_DBD_OptionSetLanguage_Params
{
	class FString                                      lang;                                                     // (Parm, ZeroConstructor)
};

// Function DeadByDaylight.DBDCheatManager.DBD_OpenStoreFromRoleSelection
struct UDBDCheatManager_DBD_OpenStoreFromRoleSelection_Params
{
};

// Function DeadByDaylight.DBDCheatManager.DBD_OpenLogFolder
struct UDBDCheatManager_DBD_OpenLogFolder_Params
{
};

// Function DeadByDaylight.DBDCheatManager.DBD_NewAuthToken
struct UDBDCheatManager_DBD_NewAuthToken_Params
{
};

// Function DeadByDaylight.DBDCheatManager.DBD_Mute
struct UDBDCheatManager_DBD_Mute_Params
{
	bool                                               mute;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDCheatManager.DBD_MirrorsSteamValidateTransaction
struct UDBDCheatManager_DBD_MirrorsSteamValidateTransaction_Params
{
	class FString                                      orderId;                                                  // (Parm, ZeroConstructor)
	struct FName                                       ItemId;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDCheatManager.DBD_MirrorsSteamInitTransaction
struct UDBDCheatManager_DBD_MirrorsSteamInitTransaction_Params
{
	struct FName                                       ItemId;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class FString                                      Description;                                              // (Parm, ZeroConstructor)
};

// Function DeadByDaylight.DBDCheatManager.DBD_MirrorsSteamFinalizeTransaction
struct UDBDCheatManager_DBD_MirrorsSteamFinalizeTransaction_Params
{
	class FString                                      orderId;                                                  // (Parm, ZeroConstructor)
};

// Function DeadByDaylight.DBDCheatManager.DBD_MirrorsReportPlayer
struct UDBDCheatManager_DBD_MirrorsReportPlayer_Params
{
	class FString                                      reportedPlayerMirrorsId;                                  // (Parm, ZeroConstructor)
};

// Function DeadByDaylight.DBDCheatManager.DBD_MirrorsRefreshWallet
struct UDBDCheatManager_DBD_MirrorsRefreshWallet_Params
{
};

// Function DeadByDaylight.DBDCheatManager.DBD_MirrorsPurchaseNonPremiumItem
struct UDBDCheatManager_DBD_MirrorsPurchaseNonPremiumItem_Params
{
	struct FName                                       objectId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	double                                             toPurchaseQuantity;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      currencyId;                                               // (Parm, ZeroConstructor)
};

// Function DeadByDaylight.DBDCheatManager.DBD_MirrorsPurchaseCharacter
struct UDBDCheatManager_DBD_MirrorsPurchaseCharacter_Params
{
	struct FName                                       characterCatalogId;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      currencyId;                                               // (Parm, ZeroConstructor)
};

// Function DeadByDaylight.DBDCheatManager.DBD_MirrorsPurchaseBundle
struct UDBDCheatManager_DBD_MirrorsPurchaseBundle_Params
{
	struct FName                                       objectId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	double                                             toPurchaseQuantity;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      currencyId;                                               // (Parm, ZeroConstructor)
	bool                                               isPremium;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDCheatManager.DBD_MirrorsOpenBlindPack
struct UDBDCheatManager_DBD_MirrorsOpenBlindPack_Params
{
	struct FName                                       packId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDCheatManager.DBD_MirrorsLoadPlayerData
struct UDBDCheatManager_DBD_MirrorsLoadPlayerData_Params
{
};

// Function DeadByDaylight.DBDCheatManager.DBD_MirrorsLoadOutfits
struct UDBDCheatManager_DBD_MirrorsLoadOutfits_Params
{
};

// Function DeadByDaylight.DBDCheatManager.DBD_MirrorsGetCharacterCustomizationItemData
struct UDBDCheatManager_DBD_MirrorsGetCharacterCustomizationItemData_Params
{
};

// Function DeadByDaylight.DBDCheatManager.DBD_MirrorsGetAvailableBundles
struct UDBDCheatManager_DBD_MirrorsGetAvailableBundles_Params
{
};

// Function DeadByDaylight.DBDCheatManager.DBD_MirrorsDropInventoryItem
struct UDBDCheatManager_DBD_MirrorsDropInventoryItem_Params
{
	class FString                                      objectId;                                                 // (Parm, ZeroConstructor)
	int                                                DropCount;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDCheatManager.DBD_MirrorsDropAllInventoryItems
struct UDBDCheatManager_DBD_MirrorsDropAllInventoryItems_Params
{
};

// Function DeadByDaylight.DBDCheatManager.DBD_MirrorsConsumeItem
struct UDBDCheatManager_DBD_MirrorsConsumeItem_Params
{
	struct FName                                       objectId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDCheatManager.DBD_MirrorsClaimMessageRewards
struct UDBDCheatManager_DBD_MirrorsClaimMessageRewards_Params
{
};

// Function DeadByDaylight.DBDCheatManager.DBD_MayThereBeOutlines
struct UDBDCheatManager_DBD_MayThereBeOutlines_Params
{
	class FString                                      Value;                                                    // (Parm, ZeroConstructor)
};

// Function DeadByDaylight.DBDCheatManager.DBD_LoadDarkPartAssetLibrary
struct UDBDCheatManager_DBD_LoadDarkPartAssetLibrary_Params
{
};

// Function DeadByDaylight.DBDCheatManager.DBD_LoadCharacterAssetLibrary
struct UDBDCheatManager_DBD_LoadCharacterAssetLibrary_Params
{
	int                                                CharacterId;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDCheatManager.DBD_LoadCatalogDataFromS3
struct UDBDCheatManager_DBD_LoadCatalogDataFromS3_Params
{
};

// Function DeadByDaylight.DBDCheatManager.DBD_ListStatusEffects
struct UDBDCheatManager_DBD_ListStatusEffects_Params
{
};

// Function DeadByDaylight.DBDCheatManager.DBD_ListPerks
struct UDBDCheatManager_DBD_ListPerks_Params
{
};

// Function DeadByDaylight.DBDCheatManager.DBD_ListItemAddons
struct UDBDCheatManager_DBD_ListItemAddons_Params
{
};

// Function DeadByDaylight.DBDCheatManager.DBD_ListInventory
struct UDBDCheatManager_DBD_ListInventory_Params
{
};

// Function DeadByDaylight.DBDCheatManager.DBD_ListInteractionInZone
struct UDBDCheatManager_DBD_ListInteractionInZone_Params
{
};

// Function DeadByDaylight.DBDCheatManager.DBD_ListDBStatusEffects
struct UDBDCheatManager_DBD_ListDBStatusEffects_Params
{
};

// Function DeadByDaylight.DBDCheatManager.DBD_ListDBPerks
struct UDBDCheatManager_DBD_ListDBPerks_Params
{
};

// Function DeadByDaylight.DBDCheatManager.DBD_ListDBOfferings
struct UDBDCheatManager_DBD_ListDBOfferings_Params
{
};

// Function DeadByDaylight.DBDCheatManager.DBD_ListDBItems
struct UDBDCheatManager_DBD_ListDBItems_Params
{
};

// Function DeadByDaylight.DBDCheatManager.DBD_ListDBItemAddons
struct UDBDCheatManager_DBD_ListDBItemAddons_Params
{
};

// Function DeadByDaylight.DBDCheatManager.DBD_ListDBCustomizations
struct UDBDCheatManager_DBD_ListDBCustomizations_Params
{
};

// Function DeadByDaylight.DBDCheatManager.DBD_ListAvailableInteractions
struct UDBDCheatManager_DBD_ListAvailableInteractions_Params
{
};

// Function DeadByDaylight.DBDCheatManager.DBD_ListAllStatusEffects
struct UDBDCheatManager_DBD_ListAllStatusEffects_Params
{
};

// Function DeadByDaylight.DBDCheatManager.DBD_ListAllPerks
struct UDBDCheatManager_DBD_ListAllPerks_Params
{
};

// Function DeadByDaylight.DBDCheatManager.DBD_ListAllItemAddons
struct UDBDCheatManager_DBD_ListAllItemAddons_Params
{
};

// Function DeadByDaylight.DBDCheatManager.DBD_LevelUp
struct UDBDCheatManager_DBD_LevelUp_Params
{
};

// Function DeadByDaylight.DBDCheatManager.DBD_Kill
struct UDBDCheatManager_DBD_Kill_Params
{
	bool                                               sacrificed;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDCheatManager.DBD_ItsAlive
struct UDBDCheatManager_DBD_ItsAlive_Params
{
	bool                                               Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDCheatManager.DBD_IsServerPositionUpdatesEnabled
struct UDBDCheatManager_DBD_IsServerPositionUpdatesEnabled_Params
{
};

// Function DeadByDaylight.DBDCheatManager.DBD_ImportLocalSaveGame
struct UDBDCheatManager_DBD_ImportLocalSaveGame_Params
{
};

// Function DeadByDaylight.DBDCheatManager.DBD_HookEscapeAutoSuccess
struct UDBDCheatManager_DBD_HookEscapeAutoSuccess_Params
{
	bool                                               Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDCheatManager.DBD_GrantInventoryItemOnLevelUp
struct UDBDCheatManager_DBD_GrantInventoryItemOnLevelUp_Params
{
	class FString                                      playerType;                                               // (Parm, ZeroConstructor)
	class FString                                      ItemId;                                                   // (Parm, ZeroConstructor)
};

// Function DeadByDaylight.DBDCheatManager.DBD_GetSyncedUTCTime
struct UDBDCheatManager_DBD_GetSyncedUTCTime_Params
{
};

// Function DeadByDaylight.DBDCheatManager.DBD_GetPlayerLevel
struct UDBDCheatManager_DBD_GetPlayerLevel_Params
{
};

// Function DeadByDaylight.DBDCheatManager.DBD_GetHighestWeightSeenNews
struct UDBDCheatManager_DBD_GetHighestWeightSeenNews_Params
{
};

// Function DeadByDaylight.DBDCheatManager.DBD_GetChunkingState
struct UDBDCheatManager_DBD_GetChunkingState_Params
{
};

// Function DeadByDaylight.DBDCheatManager.DBD_GenerateAuthToken
struct UDBDCheatManager_DBD_GenerateAuthToken_Params
{
};

// Function DeadByDaylight.DBDCheatManager.DBD_ForceSkillChecks
struct UDBDCheatManager_DBD_ForceSkillChecks_Params
{
	bool                                               Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDCheatManager.DBD_ForceFlee
struct UDBDCheatManager_DBD_ForceFlee_Params
{
	bool                                               toward;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDCheatManager.DBD_ForceDisableSkillChecks
struct UDBDCheatManager_DBD_ForceDisableSkillChecks_Params
{
	bool                                               Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDCheatManager.DBD_ForceDisableFootIK
struct UDBDCheatManager_DBD_ForceDisableFootIK_Params
{
	bool                                               Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDCheatManager.DBD_ForceBackendUnreachable
struct UDBDCheatManager_DBD_ForceBackendUnreachable_Params
{
	int                                                Force;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDCheatManager.DBD_ExportLocalSaveGame
struct UDBDCheatManager_DBD_ExportLocalSaveGame_Params
{
};

// Function DeadByDaylight.DBDCheatManager.DBD_EntitlementsInfo
struct UDBDCheatManager_DBD_EntitlementsInfo_Params
{
};

// Function DeadByDaylight.DBDCheatManager.DBD_EnsureFail
struct UDBDCheatManager_DBD_EnsureFail_Params
{
};

// Function DeadByDaylight.DBDCheatManager.DBD_EndGame
struct UDBDCheatManager_DBD_EndGame_Params
{
};

// Function DeadByDaylight.DBDCheatManager.DBD_EnableStealth
struct UDBDCheatManager_DBD_EnableStealth_Params
{
	bool                                               Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDCheatManager.DBD_EnableServerPositionUpdates
struct UDBDCheatManager_DBD_EnableServerPositionUpdates_Params
{
	bool                                               Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDCheatManager.DBD_EnableLiveBackendWhenNotInShipping
struct UDBDCheatManager_DBD_EnableLiveBackendWhenNotInShipping_Params
{
	bool                                               Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDCheatManager.DBD_EnableDebugUnavailableInteractions
struct UDBDCheatManager_DBD_EnableDebugUnavailableInteractions_Params
{
	bool                                               Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDCheatManager.DBD_EnableCapsuleDynamicResize
struct UDBDCheatManager_DBD_EnableCapsuleDynamicResize_Params
{
	bool                                               Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDCheatManager.DBD_EarnXpAmount
struct UDBDCheatManager_DBD_EarnXpAmount_Params
{
	int                                                matchXp;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDCheatManager.DBD_EarnPlayerXp
struct UDBDCheatManager_DBD_EarnPlayerXp_Params
{
	int                                                matchTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               isFirstMatch;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                consecutiveMatch;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      playerType;                                               // (Parm, ZeroConstructor)
	class FString                                      highestEmblemQuality;                                     // (Parm, ZeroConstructor)
	bool                                               queueForTally;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDCheatManager.DBD_DropSurvivorItems
struct UDBDCheatManager_DBD_DropSurvivorItems_Params
{
};

// Function DeadByDaylight.DBDCheatManager.DBD_DisplayPlayerStat
struct UDBDCheatManager_DBD_DisplayPlayerStat_Params
{
	struct FName                                       StatName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDCheatManager.DBD_DisplayCharacterStat
struct UDBDCheatManager_DBD_DisplayCharacterStat_Params
{
	struct FName                                       StatName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDCheatManager.DBD_DispatchOnPostItemAddonsCreation
struct UDBDCheatManager_DBD_DispatchOnPostItemAddonsCreation_Params
{
};

// Function DeadByDaylight.DBDCheatManager.DBD_DestroyAllMenuCharacter
struct UDBDCheatManager_DBD_DestroyAllMenuCharacter_Params
{
};

// Function DeadByDaylight.DBDCheatManager.DBD_DeleteAllCharacterAssetLibrary
struct UDBDCheatManager_DBD_DeleteAllCharacterAssetLibrary_Params
{
};

// Function DeadByDaylight.DBDCheatManager.DBD_DebugSetCustomizationMesh
struct UDBDCheatManager_DBD_DebugSetCustomizationMesh_Params
{
	struct FName                                       ItemName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDCheatManager.DBD_DebugPrintInteractionsInZone
struct UDBDCheatManager_DBD_DebugPrintInteractionsInZone_Params
{
};

// Function DeadByDaylight.DBDCheatManager.DBD_DebugIsInterruptable
struct UDBDCheatManager_DBD_DebugIsInterruptable_Params
{
	bool                                               interruptable;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDCheatManager.DBD_DebugInteractionPriority
struct UDBDCheatManager_DBD_DebugInteractionPriority_Params
{
	bool                                               Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDCheatManager.DBD_CrashGameWithNullPtr
struct UDBDCheatManager_DBD_CrashGameWithNullPtr_Params
{
};

// Function DeadByDaylight.DBDCheatManager.DBD_CrashGameWithCheck
struct UDBDCheatManager_DBD_CrashGameWithCheck_Params
{
};

// Function DeadByDaylight.DBDCheatManager.DBD_ConsumeBloodwebs
struct UDBDCheatManager_DBD_ConsumeBloodwebs_Params
{
	int                                                initialLevel;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Count;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDCheatManager.DBD_CompleteEscapeRequirements
struct UDBDCheatManager_DBD_CompleteEscapeRequirements_Params
{
};

// Function DeadByDaylight.DBDCheatManager.DBD_CloseSystemPromptAndResetStack
struct UDBDCheatManager_DBD_CloseSystemPromptAndResetStack_Params
{
};

// Function DeadByDaylight.DBDCheatManager.DBD_ClearPotentialReferencesToChunksNotYetDownloaded
struct UDBDCheatManager_DBD_ClearPotentialReferencesToChunksNotYetDownloaded_Params
{
};

// Function DeadByDaylight.DBDCheatManager.DBD_CheatChainsaw
struct UDBDCheatManager_DBD_CheatChainsaw_Params
{
	bool                                               Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDCheatManager.DBD_BuyBloodwebsLevel
struct UDBDCheatManager_DBD_BuyBloodwebsLevel_Params
{
	int                                                initialLevel;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Count;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDCheatManager.DBD_AutoWiggle
struct UDBDCheatManager_DBD_AutoWiggle_Params
{
};

// Function DeadByDaylight.DBDCheatManager.DBD_AlwaysPounce
struct UDBDCheatManager_DBD_AlwaysPounce_Params
{
	bool                                               Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDCheatManager.DBD_AddToPlayerStat
struct UDBDCheatManager_DBD_AddToPlayerStat_Params
{
	struct FName                                       StatName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDCheatManager.DBD_AddToCharacterStat
struct UDBDCheatManager_DBD_AddToCharacterStat_Params
{
	struct FName                                       StatName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDCheatManager.DBD_AddOffering
struct UDBDCheatManager_DBD_AddOffering_Params
{
	struct FName                                       Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDCheatManager.DBD_AddHP
struct UDBDCheatManager_DBD_AddHP_Params
{
};

// Function DeadByDaylight.DBDCheatManager.DBD_AddDust
struct UDBDCheatManager_DBD_AddDust_Params
{
	int                                                Count;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDCheatManager.DBD_ActivateWeakenedMechanic
struct UDBDCheatManager_DBD_ActivateWeakenedMechanic_Params
{
	bool                                               On;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDCheatManager.DBD_ActivateEscapeDoor
struct UDBDCheatManager_DBD_ActivateEscapeDoor_Params
{
};

// Function DeadByDaylight.DBDDiceRoller.GetRollResultByTunableValue
struct UDBDDiceRoller_GetRollResultByTunableValue_Params
{
	class AActor*                                      RollingActor;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       TunableValueName;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MultiplicativeModifier;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              AdditiveModifier;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDDiceRoller.GetRollResultByDiceRollType
struct UDBDDiceRoller_GetRollResultByDiceRollType_Params
{
	class ADBDPlayer*                                  RollingPlayer;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EDiceRollType>                         DiceRollType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDDiceRoller.CalculateTickedRollResult
struct UDBDDiceRoller_CalculateTickedRollResult_Params
{
	class AActor*                                      RollingActor;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              BaseProbability;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ticks;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MultiplicativeModifier;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              AdditiveModifier;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDDiceRoller.CalculateRollResult
struct UDBDDiceRoller_CalculateRollResult_Params
{
	class AActor*                                      RollingActor;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              BaseProbability;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MultiplicativeModifier;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              AdditiveModifier;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDDiceRoller.CalculateOverTimeRollResult
struct UDBDDiceRoller_CalculateOverTimeRollResult_Params
{
	class AActor*                                      RollingActor;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              BaseProbability;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ExpectedTime;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MultiplicativeModifier;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              AdditiveModifier;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDEmblem_KillerChaser.OnChaseStart
struct UDBDEmblem_KillerChaser_OnChaseStart_Params
{
	class ACamperPlayer*                               chasedPlayer;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDEmblem_KillerDevout.OnPlayerDisconnect
struct UDBDEmblem_KillerDevout_OnPlayerDisconnect_Params
{
	class ADBDPlayer*                                  Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDEmblem_KillerMalicious.OnPlayerDisconnect
struct UDBDEmblem_KillerMalicious_OnPlayerDisconnect_Params
{
	class ADBDPlayer*                                  Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDEmblem_SurvivorEvader.OnChaseStartEvent
struct UDBDEmblem_SurvivorEvader_OnChaseStartEvent_Params
{
	class ACamperPlayer*                               chasedPlayer;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDEmblemEvaluatorComponent.OnPlayerGameplayEvent
struct UDBDEmblemEvaluatorComponent_OnPlayerGameplayEvent_Params
{
	TEnumAsByte<EDBDScoreTypes>                        ScoreType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Instigator;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDEmblemEvaluatorComponent.OnGameplayEvent
struct UDBDEmblemEvaluatorComponent_OnGameplayEvent_Params
{
	TEnumAsByte<EDBDScoreTypes>                        ScoreType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Instigator;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameState.TravelToKillerServer
struct ADBDGameState_TravelToKillerServer_Params
{
};

// Function DeadByDaylight.DBDGameState.SortOfferings
struct ADBDGameState_SortOfferings_Params
{
};

// Function DeadByDaylight.DBDGameState.ShouldDisplayMapName
struct ADBDGameState_ShouldDisplayMapName_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameState.SetupGameLoaded
struct ADBDGameState_SetupGameLoaded_Params
{
};

// Function DeadByDaylight.DBDGameState.SetSlasher
struct ADBDGameState_SetSlasher_Params
{
	class ASlasherPlayer*                              SlasherPlayer;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameState.SetPlayersReadyToStart
struct ADBDGameState_SetPlayersReadyToStart_Params
{
	bool                                               playersReadyToStart;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameState.SetKillerIntroCompletedNormalized
struct ADBDGameState_SetKillerIntroCompletedNormalized_Params
{
	float                                              completedAmount;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameState.SetGameSelectedOffering
struct ADBDGameState_SetGameSelectedOffering_Params
{
	TArray<struct FSelectedOffering>                   Offerings;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function DeadByDaylight.DBDGameState.SetGameLevelLoaded
struct ADBDGameState_SetGameLevelLoaded_Params
{
};

// Function DeadByDaylight.DBDGameState.SetDisplayMapName
struct ADBDGameState_SetDisplayMapName_Params
{
	bool                                               Display;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameState.SetBuiltLevelData
struct ADBDGameState_SetBuiltLevelData_Params
{
	struct FName                                       ThemeName;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FName                                       ThemeWeather;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class FString                                      MapName;                                                  // (Parm, ZeroConstructor)
	int                                                TileCount;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FDependency>                         LevelDependencies;                                        // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function DeadByDaylight.DBDGameState.Server_UpdateGameRole
struct ADBDGameState_Server_UpdateGameRole_Params
{
};

// Function DeadByDaylight.DBDGameState.ResetGameLevelLoaded
struct ADBDGameState_ResetGameLevelLoaded_Params
{
};

// Function DeadByDaylight.DBDGameState.RemoveTrap
struct ADBDGameState_RemoveTrap_Params
{
	class AInteractable*                               toRemove;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameState.RemoveHeartbeatEmitter
struct ADBDGameState_RemoveHeartbeatEmitter_Params
{
	class AActor*                                      toRemove;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameState.OnRep_SurvivorLeft
struct ADBDGameState_OnRep_SurvivorLeft_Params
{
	int                                                OldValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameState.OnRep_SessionId
struct ADBDGameState_OnRep_SessionId_Params
{
	struct FGuid                                       OldValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameState.OnRep_ServerJoiningData
struct ADBDGameState_OnRep_ServerJoiningData_Params
{
};

// Function DeadByDaylight.DBDGameState.OnRep_RequiredActivatedGeneratorCount
struct ADBDGameState_OnRep_RequiredActivatedGeneratorCount_Params
{
	int                                                oldRequiredActivatedGeneratorCount;                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameState.OnRep_PlayersReadyToStart
struct ADBDGameState_OnRep_PlayersReadyToStart_Params
{
	bool                                               OldValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameState.OnRep_OnLevelReadyToPlay
struct ADBDGameState_OnRep_OnLevelReadyToPlay_Params
{
	bool                                               OldValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameState.OnRep_OnLevelLoaded
struct ADBDGameState_OnRep_OnLevelLoaded_Params
{
	bool                                               OldValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameState.OnRep_OfferingSequenceReady
struct ADBDGameState_OnRep_OfferingSequenceReady_Params
{
};

// Function DeadByDaylight.DBDGameState.OnRep_HatchOpened
struct ADBDGameState_OnRep_HatchOpened_Params
{
	bool                                               OldValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameState.OnRep_GamePresetData
struct ADBDGameState_OnRep_GamePresetData_Params
{
};

// Function DeadByDaylight.DBDGameState.OnRep_EscapeDoorActivated
struct ADBDGameState_OnRep_EscapeDoorActivated_Params
{
	bool                                               OldValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameState.OnRep_ActivatedGeneratorCount
struct ADBDGameState_OnRep_ActivatedGeneratorCount_Params
{
	int                                                OldValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameState.Multicast_UpdateCharacterFromGamePreset
struct ADBDGameState_Multicast_UpdateCharacterFromGamePreset_Params
{
	class ADBDPlayerState_Menu*                        playerState_Menu;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGamePresetData                             GamePresetData;                                           // (Parm)
};

// Function DeadByDaylight.DBDGameState.Multicast_SetServerLeftGame
struct ADBDGameState_Multicast_SetServerLeftGame_Params
{
	bool                                               hasServerLeftGame;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameState.Multicast_SetLostServerConnection
struct ADBDGameState_Multicast_SetLostServerConnection_Params
{
	bool                                               hasLostServerConnection;                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameState.Multicast_SetGameLevelLoaded
struct ADBDGameState_Multicast_SetGameLevelLoaded_Params
{
};

// Function DeadByDaylight.DBDGameState.Multicast_SetGameEnded
struct ADBDGameState_Multicast_SetGameEnded_Params
{
	bool                                               hasServerLeftGame;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameState.Multicast_SetBuiltLevelData
struct ADBDGameState_Multicast_SetBuiltLevelData_Params
{
	struct FName                                       ThemeName;                                                // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FName                                       ThemeWeather;                                             // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class FString                                      MapName;                                                  // (Parm, ZeroConstructor)
	int                                                TileCount;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FDependency>                         LevelDependencies;                                        // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function DeadByDaylight.DBDGameState.Multicast_KillerServerSearchFailed
struct ADBDGameState_Multicast_KillerServerSearchFailed_Params
{
};

// Function DeadByDaylight.DBDGameState.Multicast_KillerSearchStarted
struct ADBDGameState_Multicast_KillerSearchStarted_Params
{
};

// Function DeadByDaylight.DBDGameState.Multicast_JoinKillerServerFailed
struct ADBDGameState_Multicast_JoinKillerServerFailed_Params
{
};

// Function DeadByDaylight.DBDGameState.KillerServerFound
struct ADBDGameState_KillerServerFound_Params
{
	struct FServerJoiningData                          joinParams;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function DeadByDaylight.DBDGameState.IsPlayerDistributionReady
struct ADBDGameState_IsPlayerDistributionReady_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameState.IsOnePlayerLeft
struct ADBDGameState_IsOnePlayerLeft_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameState.IsOfferingReceived
struct ADBDGameState_IsOfferingReceived_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameState.IsObsessionTargetAliveInLevel
struct ADBDGameState_IsObsessionTargetAliveInLevel_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameState.IsObsessionTargetAlive
struct ADBDGameState_IsObsessionTargetAlive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameState.IsLightingGenerated
struct ADBDGameState_IsLightingGenerated_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameState.IsLevelSetupDone
struct ADBDGameState_IsLevelSetupDone_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameState.IsLevelReadyToPlay
struct ADBDGameState_IsLevelReadyToPlay_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameState.IsIntroCompleted
struct ADBDGameState_IsIntroCompleted_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameState.IsHatchVisible
struct ADBDGameState_IsHatchVisible_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameState.IsEscapeDoorOpen
struct ADBDGameState_IsEscapeDoorOpen_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameState.IsEscapeDoorActivated
struct ADBDGameState_IsEscapeDoorActivated_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameState.IntroCompleted
struct ADBDGameState_IntroCompleted_Params
{
};

// Function DeadByDaylight.DBDGameState.GetSurvivorLeft
struct ADBDGameState_GetSurvivorLeft_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameState.GetSelectedOfferings
struct ADBDGameState_GetSelectedOfferings_Params
{
	TArray<struct FSelectedOffering>                   ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function DeadByDaylight.DBDGameState.GetSelectedOffering
struct ADBDGameState_GetSelectedOffering_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FSelectedOffering                           SelectedOffering;                                         // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameState.GetRemainingGeneratorsNeeded
struct ADBDGameState_GetRemainingGeneratorsNeeded_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameState.GetPlayerStateByIDString
struct ADBDGameState_GetPlayerStateByIDString_Params
{
	class FString                                      ID;                                                       // (Parm, ZeroConstructor)
	class ADBDPlayerState*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameState.GetPlayersReadyToStart
struct ADBDGameState_GetPlayersReadyToStart_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameState.GetPlayerRoleCounts
struct ADBDGameState_GetPlayerRoleCounts_Params
{
	int                                                survivorCount;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                killerCount;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                SpectatorCount;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameState.GetObsessionTarget
struct ADBDGameState_GetObsessionTarget_Params
{
	class ACamperPlayer*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameState.GetNumberOfOtherActiveSurvivors
struct ADBDGameState_GetNumberOfOtherActiveSurvivors_Params
{
	class ACamperPlayer*                               exception;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameState.GetNumberOfActiveSurvivors
struct ADBDGameState_GetNumberOfActiveSurvivors_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameState.GetLocalPlayerState
struct ADBDGameState_GetLocalPlayerState_Params
{
	class ADBDPlayerState*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameState.GetLocalPlayerPawn
struct ADBDGameState_GetLocalPlayerPawn_Params
{
	class ADBDPlayer*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameState.GetLocalPlayerBasePawn
struct ADBDGameState_GetLocalPlayerBasePawn_Params
{
	class APawn*                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameState.GetLevelData
struct ADBDGameState_GetLevelData_Params
{
	struct FBuiltLevelData                             ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)
};

// Function DeadByDaylight.DBDGameState.GetKillerIntroCompletedNormalized
struct ADBDGameState_GetKillerIntroCompletedNormalized_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameState.GetKiller
struct ADBDGameState_GetKiller_Params
{
	class ASlasherPlayer*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameState.GetInGamePallets
struct ADBDGameState_GetInGamePallets_Params
{
	TArray<class APallet*>                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function DeadByDaylight.DBDGameState.GetInGameGenerators
struct ADBDGameState_GetInGameGenerators_Params
{
	TArray<class AGenerator*>                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function DeadByDaylight.DBDGameState.GetHeartbeatEmittersCount
struct ADBDGameState_GetHeartbeatEmittersCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameState.GetGameLevelLoaded
struct ADBDGameState_GetGameLevelLoaded_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameState.Authority_SetSurvivorLeft
struct ADBDGameState_Authority_SetSurvivorLeft_Params
{
	int                                                survivorRemaining;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameState.Authority_SetServerJoiningData
struct ADBDGameState_Authority_SetServerJoiningData_Params
{
	struct FServerJoiningData                          joiningData;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function DeadByDaylight.DBDGameState.Authority_SetLevelReadyToPlay
struct ADBDGameState_Authority_SetLevelReadyToPlay_Params
{
};

// Function DeadByDaylight.DBDGameState.Authority_SetHatchOpen
struct ADBDGameState_Authority_SetHatchOpen_Params
{
	bool                                               OPENED;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameState.Authority_SetEscapeDoorOpened
struct ADBDGameState_Authority_SetEscapeDoorOpened_Params
{
	bool                                               OPENED;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameState.Authority_SetAllPlayerLoaded
struct ADBDGameState_Authority_SetAllPlayerLoaded_Params
{
};

// Function DeadByDaylight.DBDGameState.Authority_EvaluateObsessionTarget
struct ADBDGameState_Authority_EvaluateObsessionTarget_Params
{
	class ADBDPlayer*                                  potentialTarget;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameState.Authority_EscapeThroughHatch
struct ADBDGameState_Authority_EscapeThroughHatch_Params
{
};

// Function DeadByDaylight.DBDGameState.Authority_EnableObsession
struct ADBDGameState_Authority_EnableObsession_Params
{
};

// Function DeadByDaylight.DBDGameState.AddTrap
struct ADBDGameState_AddTrap_Params
{
	class AInteractable*                               toAdd;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameState.AddHeartbeatEmitter
struct ADBDGameState_AddHeartbeatEmitter_Params
{
	class AActor*                                      toAdd;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDGame_Lobby.DBD_ForceStartMatch
struct ADBDGame_Lobby_DBD_ForceStartMatch_Params
{
};

// Function DeadByDaylight.DBDGameFlowUtilities.TriggerWorldFlowUpdate
struct UDBDGameFlowUtilities_TriggerWorldFlowUpdate_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EWorldFlowEvent>                       worldFlowEvent;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameFlowUtilities.TriggerUIFlowUpdate
struct UDBDGameFlowUtilities_TriggerUIFlowUpdate_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EUIFlowEvent>                          uiFlowEvent;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.LevelParadise.ParadiseEntered
struct ALevelParadise_ParadiseEntered_Params
{
	struct FParadiseData                               PlayerData;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function DeadByDaylight.LevelParadise.OnInterpolationDone
struct ALevelParadise_OnInterpolationDone_Params
{
};

// Function DeadByDaylight.LevelParadise.EnterParadise
struct ALevelParadise_EnterParadise_Params
{
	struct FParadiseData                               PlayerData;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function DeadByDaylight.ScreenBase.SetFadesOut
struct UScreenBase_SetFadesOut_Params
{
	bool                                               fadesOut;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.ScreenBase.OnStart
struct UScreenBase_OnStart_Params
{
};

// Function DeadByDaylight.ScreenBase.OnNavKey
struct UScreenBase_OnNavKey_Params
{
	class FString                                      navKey;                                                   // (Parm, ZeroConstructor)
};

// Function DeadByDaylight.ScreenBase.OnEscape
struct UScreenBase_OnEscape_Params
{
};

// Function DeadByDaylight.ScreenBase.OnBack
struct UScreenBase_OnBack_Params
{
};

// Function DeadByDaylight.ScreenBase.OnAnimationUpdate
struct UScreenBase_OnAnimationUpdate_Params
{
	int                                                isAnimationDone;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.RootMovie.SetCursorAsSticky
struct URootMovie_SetCursorAsSticky_Params
{
	int                                                isSticky;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                lockVertical;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                lockHorizontal;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                moveByX;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                moveByY;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.RootMovie.RegisterView
struct URootMovie_RegisterView_Params
{
	class FString                                      screenId;                                                 // (Parm, ZeroConstructor)
	class UGFxObject*                                  ScreenObject;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.RootMovie.RegisterUIControl
struct URootMovie_RegisterUIControl_Params
{
	class UGFxObject*                                  flashObj;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.RootMovie.RegisterScreenControl
struct URootMovie_RegisterScreenControl_Params
{
	class UGFxObject*                                  flashObj;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.RootMovie.PlaySound
struct URootMovie_PlaySound_Params
{
	class FString                                      soundId;                                                  // (Parm, ZeroConstructor)
};

// Function DeadByDaylight.RootMovie.OpenLinkInBrowser
struct URootMovie_OpenLinkInBrowser_Params
{
	class FString                                      linkAddress;                                              // (Parm, ZeroConstructor)
};

// Function DeadByDaylight.RootMovie.OnScreenReady
struct URootMovie_OnScreenReady_Params
{
	class FString                                      screenId;                                                 // (Parm, ZeroConstructor)
};

// Function DeadByDaylight.RootMovie.OnScreenLeave
struct URootMovie_OnScreenLeave_Params
{
	class FString                                      screenId;                                                 // (Parm, ZeroConstructor)
};

// Function DeadByDaylight.RootMovie.OnScreenEnter
struct URootMovie_OnScreenEnter_Params
{
	class FString                                      screenId;                                                 // (Parm, ZeroConstructor)
};

// Function DeadByDaylight.RootMovie.OnMovieClosed
struct URootMovie_OnMovieClosed_Params
{
};

// Function DeadByDaylight.RootMovie.OnFlashReady
struct URootMovie_OnFlashReady_Params
{
};

// Function DeadByDaylight.RootMovie.OnAssert
struct URootMovie_OnAssert_Params
{
	int                                                Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      Message;                                                  // (Parm, ZeroConstructor)
};

// Function DeadByDaylight.DBDTimeUtilities.IsValidatedOnline
struct UDBDTimeUtilities_IsValidatedOnline_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDTimeUtilities.IsInitialized
struct UDBDTimeUtilities_IsInitialized_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDKeyDisplayInfo.IsExcludedKey
struct UDBDKeyDisplayInfo_IsExcludedKey_Params
{
	struct FKey                                        Key;                                                      // (Parm)
	bool                                               ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDKeyDisplayInfo.GetKeyDisplayInfoForInteractionType
struct UDBDKeyDisplayInfo_GetKeyDisplayInfoForInteractionType_Params
{
	class UPlayerInput*                                PlayerInput;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EPlayerRole>                           PlayerRole;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInputInteractionType>                 InteractionType;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               useGamePad;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FKeyDisplayInfo                             ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function DeadByDaylight.DBDKeyDisplayInfo.GetKeyDisplayInfo
struct UDBDKeyDisplayInfo_GetKeyDisplayInfo_Params
{
	struct FKey                                        Key;                                                      // (Parm)
	struct FKeyDisplayInfo                             ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function DeadByDaylight.DBDKeyDisplayInfo.GetFirstKeyForAction
struct UDBDKeyDisplayInfo_GetFirstKeyForAction_Params
{
	class UPlayerInput*                                PlayerInput;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ActionName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               useGamePad;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FKey                                        ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function DeadByDaylight.DBDKeyDisplayInfo.GetActionForInteractionType
struct UDBDKeyDisplayInfo_GetActionForInteractionType_Params
{
	TEnumAsByte<EPlayerRole>                           PlayerRole;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInputInteractionType>                 inputInteractionType;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               useGamePad;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ignoreInteractMash;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameInstance.StartOfferingSequence
struct UDBDGameInstance_StartOfferingSequence_Params
{
};

// Function DeadByDaylight.DBDGameInstance.SimulatePerk
struct UDBDGameInstance_SimulatePerk_Params
{
	TArray<struct FName>                               Perks;                                                    // (Parm, ZeroConstructor)
	int                                                Level;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameInstance.SimulateOfferingSequence
struct UDBDGameInstance_SimulateOfferingSequence_Params
{
	TArray<struct FName>                               Offerings;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               playSequence;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameInstance.RemoveActorKnowledgeCollection
struct UDBDGameInstance_RemoveActorKnowledgeCollection_Params
{
	class UActorKnowledgeCollection*                   collection;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameInstance.IsActorKnown
struct UDBDGameInstance_IsActorKnown_Params
{
	class ADBDPlayer*                                  knowledgePossessor;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      possiblyKnownActor;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameInstance.HasOfferingOfType
struct UDBDGameInstance_HasOfferingOfType_Params
{
	TEnumAsByte<EOfferingEffectType>                   Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                PlayerId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Tag;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameInstance.GotoSplashScreen
struct UDBDGameInstance_GotoSplashScreen_Params
{
	bool                                               showDefaultDialogueOnSplashScreen;                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameInstance.GetSacrificeSequencer
struct UDBDGameInstance_GetSacrificeSequencer_Params
{
	class USequencer*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameInstance.GetPlayerLevelManager
struct UDBDGameInstance_GetPlayerLevelManager_Params
{
	class UDBDPlayerLevelManager*                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameInstance.GetMaxSurvivorCount
struct UDBDGameInstance_GetMaxSurvivorCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameInstance.GetMapActorDB
struct UDBDGameInstance_GetMapActorDB_Params
{
	class UMapActorDB*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameInstance.GetLocalPlayerController
struct UDBDGameInstance_GetLocalPlayerController_Params
{
	class APlayerController*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameInstance.GetLocalPlayer
struct UDBDGameInstance_GetLocalPlayer_Params
{
	class ULocalPlayer*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameInstance.GetLocallyControlledCharacter
struct UDBDGameInstance_GetLocallyControlledCharacter_Params
{
	class ADBDPlayer*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameInstance.GetLocalEventManager
struct UDBDGameInstance_GetLocalEventManager_Params
{
	class ULocalEventManager*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameInstance.GetLightInterpolator
struct UDBDGameInstance_GetLightInterpolator_Params
{
	class ULightingInterpolator*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameInstance.GetLightingHelper
struct UDBDGameInstance_GetLightingHelper_Params
{
	class ULightingHelper*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameInstance.GetLevelLighting
struct UDBDGameInstance_GetLevelLighting_Params
{
	class ABaseSky*                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameInstance.GetInGameSurvivors
struct UDBDGameInstance_GetInGameSurvivors_Params
{
	TArray<class ACamperPlayer*>                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function DeadByDaylight.DBDGameInstance.GetInGamePlayers
struct UDBDGameInstance_GetInGamePlayers_Params
{
	TArray<class ADBDPlayer*>                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function DeadByDaylight.DBDGameInstance.GetInGameKillers
struct UDBDGameInstance_GetInGameKillers_Params
{
	TArray<class ASlasherPlayer*>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function DeadByDaylight.DBDGameInstance.GetInGameKiller
struct UDBDGameInstance_GetInGameKiller_Params
{
	class ASlasherPlayer*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameInstance.GetGameEventDispatcher
struct UDBDGameInstance_GetGameEventDispatcher_Params
{
	class UGameEventDispatcher*                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameInstance.GetDeadOrDisconnectedCampersCount
struct UDBDGameInstance_GetDeadOrDisconnectedCampersCount_Params
{
	class ADBDPlayerState*                             exception;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameInstance.GenerateBloodWebForCurrentCharacter
struct UDBDGameInstance_GenerateBloodWebForCurrentCharacter_Params
{
};

// Function DeadByDaylight.DBDGameInstance.ForceCloseGame
struct UDBDGameInstance_ForceCloseGame_Params
{
};

// Function DeadByDaylight.DBDGameInstance.FireSoundEvent
struct UDBDGameInstance_FireSoundEvent_Params
{
	class AActor*                                      Instigator;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               shouldTrack;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              audibleRange;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class ADBDPlayer*                                  instigatingPlayer;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               isQuickAction;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameInstance.EndLoadingScreen
struct UDBDGameInstance_EndLoadingScreen_Params
{
};

// Function DeadByDaylight.DBDGameInstance.DBDToggleLightingLoaded
struct UDBDGameInstance_DBDToggleLightingLoaded_Params
{
};

// Function DeadByDaylight.DBDGameInstance.DBDResetSaveData
struct UDBDGameInstance_DBDResetSaveData_Params
{
};

// Function DeadByDaylight.DBDGameInstance.DBDLogFindSessions
struct UDBDGameInstance_DBDLogFindSessions_Params
{
	int                                                searchType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Rank;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ignoreVersion;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameInstance.DBDForceSave
struct UDBDGameInstance_DBDForceSave_Params
{
};

// Function DeadByDaylight.DBDGameInstance.DBDForceLoad
struct UDBDGameInstance_DBDForceLoad_Params
{
};

// Function DeadByDaylight.DBDGameInstance.DBDDeleteLocalSaveFile
struct UDBDGameInstance_DBDDeleteLocalSaveFile_Params
{
};

// Function DeadByDaylight.DBDGameInstance.DBDApplyOfferingModification
struct UDBDGameInstance_DBDApplyOfferingModification_Params
{
	float                                              lightModifier;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              fogModifier;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameInstance.DBD_UpdateSteamInventory
struct UDBDGameInstance_DBD_UpdateSteamInventory_Params
{
};

// Function DeadByDaylight.DBDGameInstance.DBD_ToggleOnlineRole
struct UDBDGameInstance_DBD_ToggleOnlineRole_Params
{
};

// Function DeadByDaylight.DBDGameInstance.DBD_TestTickedDiceRoll
struct UDBDGameInstance_DBD_TestTickedDiceRoll_Params
{
	float                                              BaseProbability;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ticks;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MultiplicativeModifier;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              AdditiveModifier;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameInstance.DBD_TestSaveFile
struct UDBDGameInstance_DBD_TestSaveFile_Params
{
	class FString                                      Name;                                                     // (Parm, ZeroConstructor)
};

// Function DeadByDaylight.DBDGameInstance.DBD_TestRegion
struct UDBDGameInstance_DBD_TestRegion_Params
{
};

// Function DeadByDaylight.DBDGameInstance.DBD_TestDiceRoll
struct UDBDGameInstance_DBD_TestDiceRoll_Params
{
	float                                              BaseProbability;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MultiplicativeModifier;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              AdditiveModifier;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameInstance.DBD_StartQuickPlay
struct UDBDGameInstance_DBD_StartQuickPlay_Params
{
};

// Function DeadByDaylight.DBDGameInstance.DBD_ShowErrorPopupAndGoBackToSplashScreen
struct UDBDGameInstance_DBD_ShowErrorPopupAndGoBackToSplashScreen_Params
{
};

// Function DeadByDaylight.DBDGameInstance.DBD_ShowErrorPopup
struct UDBDGameInstance_DBD_ShowErrorPopup_Params
{
};

// Function DeadByDaylight.DBDGameInstance.DBD_SetStatsUploadEnabled
struct UDBDGameInstance_DBD_SetStatsUploadEnabled_Params
{
	bool                                               Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameInstance.DBD_SetFearMarketDate
struct UDBDGameInstance_DBD_SetFearMarketDate_Params
{
	class FString                                      dateString;                                               // (Parm, ZeroConstructor)
};

// Function DeadByDaylight.DBDGameInstance.DBD_SetCursorStickySpeed
struct UDBDGameInstance_DBD_SetCursorStickySpeed_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameInstance.DBD_SetCursorStickIgnore
struct UDBDGameInstance_DBD_SetCursorStickIgnore_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameInstance.DBD_SetCursorDefaultSpeed
struct UDBDGameInstance_DBD_SetCursorDefaultSpeed_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameInstance.DBD_SendFriendInvite
struct UDBDGameInstance_DBD_SendFriendInvite_Params
{
};

// Function DeadByDaylight.DBDGameInstance.DBD_ResetInventory
struct UDBDGameInstance_DBD_ResetInventory_Params
{
};

// Function DeadByDaylight.DBDGameInstance.DBD_ResetCurrentAchievementStats
struct UDBDGameInstance_DBD_ResetCurrentAchievementStats_Params
{
	bool                                               andUpload;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               andUpdateData;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameInstance.DBD_ResetCurrentAchievementStat
struct UDBDGameInstance_DBD_ResetCurrentAchievementStat_Params
{
	struct FName                                       StatName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               andUpload;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameInstance.DBD_ResetAllRituals
struct UDBDGameInstance_DBD_ResetAllRituals_Params
{
};

// Function DeadByDaylight.DBDGameInstance.DBD_RemoveRitual
struct UDBDGameInstance_DBD_RemoveRitual_Params
{
	struct FName                                       toRemove;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameInstance.DBD_PrintAudioConfig
struct UDBDGameInstance_DBD_PrintAudioConfig_Params
{
};

// Function DeadByDaylight.DBDGameInstance.DBD_PIXEndCapture
struct UDBDGameInstance_DBD_PIXEndCapture_Params
{
};

// Function DeadByDaylight.DBDGameInstance.DBD_PIXBeginCapture
struct UDBDGameInstance_DBD_PIXBeginCapture_Params
{
};

// Function DeadByDaylight.DBDGameInstance.DBD_LogBloodWebDefinition
struct UDBDGameInstance_DBD_LogBloodWebDefinition_Params
{
};

// Function DeadByDaylight.DBDGameInstance.DBD_LeaveMatch
struct UDBDGameInstance_DBD_LeaveMatch_Params
{
};

// Function DeadByDaylight.DBDGameInstance.DBD_LaunchSurivorTutorial
struct UDBDGameInstance_DBD_LaunchSurivorTutorial_Params
{
};

// Function DeadByDaylight.DBDGameInstance.DBD_LaunchKillerTutorial
struct UDBDGameInstance_DBD_LaunchKillerTutorial_Params
{
};

// Function DeadByDaylight.DBDGameInstance.DBD_GetRegion
struct UDBDGameInstance_DBD_GetRegion_Params
{
};

// Function DeadByDaylight.DBDGameInstance.DBD_GenerateNewRitual
struct UDBDGameInstance_DBD_GenerateNewRitual_Params
{
	struct FName                                       Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameInstance.DBD_GenerateNewRandomRitual
struct UDBDGameInstance_DBD_GenerateNewRandomRitual_Params
{
};

// Function DeadByDaylight.DBDGameInstance.DBD_GenerateBloodWeb
struct UDBDGameInstance_DBD_GenerateBloodWeb_Params
{
	int                                                Level;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameInstance.DBD_DumpSessions
struct UDBDGameInstance_DBD_DumpSessions_Params
{
};

// Function DeadByDaylight.DBDGameInstance.DBD_DisplayCurrentAchievementStat
struct UDBDGameInstance_DBD_DisplayCurrentAchievementStat_Params
{
	struct FName                                       StatName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameInstance.DBD_DestroySteamInventory
struct UDBDGameInstance_DBD_DestroySteamInventory_Params
{
};

// Function DeadByDaylight.DBDGameInstance.DBD_ClearInventory
struct UDBDGameInstance_DBD_ClearInventory_Params
{
};

// Function DeadByDaylight.DBDGameInstance.DBD_ClaimRitualRewardAtIndex
struct UDBDGameInstance_DBD_ClaimRitualRewardAtIndex_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameInstance.DBD_ClaimRitualReward
struct UDBDGameInstance_DBD_ClaimRitualReward_Params
{
	struct FName                                       Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameInstance.DBD_CheckForNewContent
struct UDBDGameInstance_DBD_CheckForNewContent_Params
{
	class FString                                      debugGameVersion;                                         // (Parm, ZeroConstructor)
	bool                                               forceDisplay;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameInstance.DBD_ChangeSteamOverlayPosition
struct UDBDGameInstance_DBD_ChangeSteamOverlayPosition_Params
{
	int                                                Position;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                VerticalOffset;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                horizontalOffset;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameInstance.DBD_AssignNewRitual
struct UDBDGameInstance_DBD_AssignNewRitual_Params
{
};

// Function DeadByDaylight.DBDGameInstance.DBD_AnalyticsTest
struct UDBDGameInstance_DBD_AnalyticsTest_Params
{
};

// Function DeadByDaylight.DBDGameInstance.DBD_AnalyticsReset
struct UDBDGameInstance_DBD_AnalyticsReset_Params
{
};

// Function DeadByDaylight.DBDGameInstance.DBD_AddToRitual
struct UDBDGameInstance_DBD_AddToRitual_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameInstance.DBD_AddToAchievementStat
struct UDBDGameInstance_DBD_AddToAchievementStat_Params
{
	struct FName                                       StatName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameInstance.DBD_AddSlasherPips
struct UDBDGameInstance_DBD_AddSlasherPips_Params
{
	int                                                Count;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameInstance.DBD_AddPips
struct UDBDGameInstance_DBD_AddPips_Params
{
	int                                                camperPipCount;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                slasherPipCount;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameInstance.DBD_AddPerkToInventory
struct UDBDGameInstance_DBD_AddPerkToInventory_Params
{
	struct FName                                       PerkID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameInstance.DBD_AddOfferingToInventory
struct UDBDGameInstance_DBD_AddOfferingToInventory_Params
{
	struct FName                                       ItemId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameInstance.DBD_AddItemToInventory
struct UDBDGameInstance_DBD_AddItemToInventory_Params
{
	struct FName                                       ItemId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameInstance.DBD_AddItemAddonToInventory
struct UDBDGameInstance_DBD_AddItemAddonToInventory_Params
{
	struct FName                                       ItemAddonID;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameInstance.DBD_AddFearTokens
struct UDBDGameInstance_DBD_AddFearTokens_Params
{
	int                                                Count;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameInstance.DBD_AddEverythingToInventory
struct UDBDGameInstance_DBD_AddEverythingToInventory_Params
{
};

// Function DeadByDaylight.DBDGameInstance.DBD_AddCamperPips
struct UDBDGameInstance_DBD_AddCamperPips_Params
{
	int                                                Count;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameInstance.DBD_AddBloodPoints
struct UDBDGameInstance_DBD_AddBloodPoints_Params
{
	int                                                Count;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameInstance.DBD_AddAllPerksToInventory
struct UDBDGameInstance_DBD_AddAllPerksToInventory_Params
{
	int                                                amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameInstance.DBD_AddAllItemsAddonsOfferingsToInventory
struct UDBDGameInstance_DBD_AddAllItemsAddonsOfferingsToInventory_Params
{
	int                                                amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDGameInstance.BeginLoadingScreen
struct UDBDGameInstance_BeginLoadingScreen_Params
{
	class FString                                      MapName;                                                  // (Parm, ZeroConstructor)
};

// Function DeadByDaylight.DBDGameInstance.AddActorKnowledgeCollection
struct UDBDGameInstance_AddActorKnowledgeCollection_Params
{
	class UActorKnowledgeCollection*                   collection;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DeadByDaylight.TutorialsUtilities.GetTutorialsUtilities
struct ATutorialsUtilities_GetTutorialsUtilities_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class ATutorialsUtilities*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.TutorialGameState.TutorialEndReached
struct ATutorialGameState_TutorialEndReached_Params
{
};

// Function DeadByDaylight.TutorialGameState.SetEscapeRequirementsVisibility
struct ATutorialGameState_SetEscapeRequirementsVisibility_Params
{
	bool                                               IsVisible;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.TutorialGameState.IsTutorialStarted
struct ATutorialGameState_IsTutorialStarted_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.TutorialGameState.CompleteLocallyControlledCharacterIntros
struct ATutorialGameState_CompleteLocallyControlledCharacterIntros_Params
{
};

// Function DeadByDaylight.DBDGameUserSettings.SaveSettings
struct UDBDGameUserSettings_SaveSettings_Params
{
};

// Function DeadByDaylight.DBDHud.RemoveStatusViewOnDestroy
struct UDBDHud_RemoveStatusViewOnDestroy_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDMaterialBlueprintLibrary.SetVectorParameterValueOnMeshComponent
struct UDBDMaterialBlueprintLibrary_SetVectorParameterValueOnMeshComponent_Params
{
	class UMeshComponent*                              Mesh;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       ParameterName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDMaterialBlueprintLibrary.SetTransformParameterValueOnMeshComponent
struct UDBDMaterialBlueprintLibrary_SetTransformParameterValueOnMeshComponent_Params
{
	class UMeshComponent*                              Mesh;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       ParameterName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  Value;                                                    // (Parm, IsPlainOldData)
};

// Function DeadByDaylight.DBDMaterialBlueprintLibrary.SetTransformParameterValueOnMaterialDynamic
struct UDBDMaterialBlueprintLibrary_SetTransformParameterValueOnMaterialDynamic_Params
{
	class UMaterialInstanceDynamic*                    Material;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ParameterName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  Value;                                                    // (Parm, IsPlainOldData)
};

// Function DeadByDaylight.DBDMaterialBlueprintLibrary.SetTransformParameterInverseValueOnMaterialDynamic
struct UDBDMaterialBlueprintLibrary_SetTransformParameterInverseValueOnMaterialDynamic_Params
{
	class UMaterialInstanceDynamic*                    Material;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ParameterName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  Value;                                                    // (Parm, IsPlainOldData)
};

// Function DeadByDaylight.DBDMaterialBlueprintLibrary.CreateDynamicMaterialInstanceForParticleSystem
struct UDBDMaterialBlueprintLibrary_CreateDynamicMaterialInstanceForParticleSystem_Params
{
	class UParticleSystemComponent*                    System;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class UMaterialInstanceDynamic*>            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function DeadByDaylight.DBDMathBlueprintLibrary.VectorIntersect
struct UDBDMathBlueprintLibrary_VectorIntersect_Params
{
	struct FVector                                     OriginA;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     ExtentA;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     OriginB;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     ExtentB;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDMathBlueprintLibrary.VectorAbsoluteValue
struct UDBDMathBlueprintLibrary_VectorAbsoluteValue_Params
{
	struct FVector                                     A;                                                        // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDMathBlueprintLibrary.TransformToMatrix
struct UDBDMathBlueprintLibrary_TransformToMatrix_Params
{
	struct FTransform                                  A;                                                        // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	TArray<struct FLinearColor>                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function DeadByDaylight.DBDObserverPlayer.Server_PlayerReady
struct ADBDObserverPlayer_Server_PlayerReady_Params
{
};

// Function DeadByDaylight.DBDOuterlineComponent.SetIntensity
struct UDBDOuterlineComponent_SetIntensity_Params
{
	float                                              Intensity;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDOutlineComponent.SetTargetColor
struct UDBDOutlineComponent_SetTargetColor_Params
{
	struct FLinearColor                                Color;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDOutlineComponent.SetFadeTexture
struct UDBDOutlineComponent_SetFadeTexture_Params
{
	class UTexture*                                    inFadeTexture;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDOutlineComponent.SetFadeIntensity
struct UDBDOutlineComponent_SetFadeIntensity_Params
{
	float                                              fadeIntensity;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDOutlineComponent.RefreshOutlineComponent
struct UDBDOutlineComponent_RefreshOutlineComponent_Params
{
};

// Function DeadByDaylight.DBDPlayerController_Menu.TogglePlayerReadyState
struct ADBDPlayerController_Menu_TogglePlayerReadyState_Params
{
};

// Function DeadByDaylight.DBDPlayerController_Menu.SetPlayerReady
struct ADBDPlayerController_Menu_SetPlayerReady_Params
{
	bool                                               IsReady;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayerController_Menu.Server_SetReadyToTravel
struct ADBDPlayerController_Menu_Server_SetReadyToTravel_Params
{
};

// Function DeadByDaylight.DBDPlayerController_Menu.Server_SetPlayerReady
struct ADBDPlayerController_Menu_Server_SetPlayerReady_Params
{
	bool                                               IsReady;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayerController_Menu.Server_SetPlayerLoadout
struct ADBDPlayerController_Menu_Server_SetPlayerLoadout_Params
{
	struct FPlayerLoadoutData                          desiredLoadout;                                           // (Parm)
};

// Function DeadByDaylight.DBDPlayerController_Menu.Server_SetEquipedPerks
struct ADBDPlayerController_Menu_Server_SetEquipedPerks_Params
{
	TArray<struct FName>                               perkIds;                                                  // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
	TArray<int>                                        perkLevels;                                               // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
	bool                                               callOnRep;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayerController_Menu.Server_SetCustomizationMesh
struct ADBDPlayerController_Menu_Server_SetCustomizationMesh_Params
{
	struct FName                                       combinedItemId;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayerController_Menu.Server_SetCharacterLevel
struct ADBDPlayerController_Menu_Server_SetCharacterLevel_Params
{
	int                                                CharacterLevel;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                PrestigeLevel;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               callOnRep;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDPlayerController_Menu.Server_SetCharacterData
struct ADBDPlayerController_Menu_Server_SetCharacterData_Params
{
	int                                                CharacterIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FPlayerDataSync                             PlayerDataSync;                                           // (ConstParm, Parm, ReferenceParm)
};

// Function DeadByDaylight.DBDSpringArmComponent.IgnoreActor
struct UDBDSpringArmComponent_IgnoreActor_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bShouldIgnore;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDSpringArmComponent.ClearIgnoreActors
struct UDBDSpringArmComponent_ClearIgnoreActors_Params
{
};

// Function DeadByDaylight.DBDSurfaceTypeName.Convert
struct UDBDSurfaceTypeName_Convert_Params
{
	TEnumAsByte<EPhysicalSurface>                      surfaceType;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDTimerComponent.Update
struct UDBDTimerComponent_Update_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDTimerComponent.Stop
struct UDBDTimerComponent_Stop_Params
{
};

// Function DeadByDaylight.DBDTimerComponent.ResetTo
struct UDBDTimerComponent_ResetTo_Params
{
	float                                              Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDTimerComponent.Reset
struct UDBDTimerComponent_Reset_Params
{
};

// Function DeadByDaylight.DBDTimerComponent.IsDone
struct UDBDTimerComponent_IsDone_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDTimerComponent.GetTimeLeft
struct UDBDTimerComponent_GetTimeLeft_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDTimerComponent.GetTimeElapsed
struct UDBDTimerComponent_GetTimeElapsed_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDTimerComponent.GetStartTime
struct UDBDTimerComponent_GetStartTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDTimerComponent.GetPercentTimeLeft
struct UDBDTimerComponent_GetPercentTimeLeft_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDTimerComponent.GetPercentTimeElapsed
struct UDBDTimerComponent_GetPercentTimeElapsed_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDUtilTimer.Update
struct UDBDUtilTimer_Update_Params
{
	struct FDBDTimer                                   Timer;                                                    // (Parm, OutParm, ReferenceParm)
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDUtilTimer.Stop
struct UDBDUtilTimer_Stop_Params
{
	struct FDBDTimer                                   Timer;                                                    // (Parm, OutParm, ReferenceParm)
};

// Function DeadByDaylight.DBDUtilTimer.ResetTo
struct UDBDUtilTimer_ResetTo_Params
{
	struct FDBDTimer                                   Timer;                                                    // (Parm, OutParm, ReferenceParm)
	float                                              Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DBDUtilTimer.Reset
struct UDBDUtilTimer_Reset_Params
{
	struct FDBDTimer                                   Timer;                                                    // (Parm, OutParm, ReferenceParm)
};

// Function DeadByDaylight.DBDUtilTimer.IsDone
struct UDBDUtilTimer_IsDone_Params
{
	struct FDBDTimer                                   Timer;                                                    // (Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDUtilTimer.GetTimeLeft
struct UDBDUtilTimer_GetTimeLeft_Params
{
	struct FDBDTimer                                   Timer;                                                    // (Parm, OutParm, ReferenceParm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDUtilTimer.GetTimeElapsed
struct UDBDUtilTimer_GetTimeElapsed_Params
{
	struct FDBDTimer                                   Timer;                                                    // (Parm, OutParm, ReferenceParm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDUtilTimer.GetStartTime
struct UDBDUtilTimer_GetStartTime_Params
{
	struct FDBDTimer                                   Timer;                                                    // (Parm, OutParm, ReferenceParm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDUtilTimer.GetPercentTimeLeft
struct UDBDUtilTimer_GetPercentTimeLeft_Params
{
	struct FDBDTimer                                   Timer;                                                    // (Parm, OutParm, ReferenceParm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.DBDUtilTimer.GetPercentTimeElapsed
struct UDBDUtilTimer_GetPercentTimeElapsed_Params
{
	struct FDBDTimer                                   Timer;                                                    // (Parm, OutParm, ReferenceParm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.EffectsLocator.OnLostActor
struct AEffectsLocator_OnLostActor_Params
{
	class AActor*                                      lostActor;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.EffectsLocator.OnLeaveCollisionArea
struct AEffectsLocator_OnLeaveCollisionArea_Params
{
	class AActor*                                      OverlappedActor;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.EffectsLocator.OnFoundActor
struct AEffectsLocator_OnFoundActor_Params
{
	class AActor*                                      foundActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.EffectsLocator.OnEnterCollisionArea
struct AEffectsLocator_OnEnterCollisionArea_Params
{
	class AActor*                                      OverlappedActor;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.EffectsLocator.OnActorTick
struct AEffectsLocator_OnActorTick_Params
{
	class UMaterialInstanceDynamic*                    actorMaterialInstanceDynamic;                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.EventGeneratorComponent.OnGeneratorRepaired
struct UEventGeneratorComponent_OnGeneratorRepaired_Params
{
};

// Function DeadByDaylight.ExposerCirclingComponent.SetIsCircling
struct UExposerCirclingComponent_SetIsCircling_Params
{
	bool                                               circling;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.ExposerCirclingComponent.Reset
struct UExposerCirclingComponent_Reset_Params
{
};

// Function DeadByDaylight.ExposerInteriorZoneComponent.AddExposerSpawnPoint
struct UExposerInteriorZoneComponent_AddExposerSpawnPoint_Params
{
	class USceneComponent*                             Point;                                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DeadByDaylight.Firecracker.ShouldDeafen
struct AFirecracker_ShouldDeafen_Params
{
	class ADBDPlayer*                                  Player;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              outDuration;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.Firecracker.ShouldBlind
struct AFirecracker_ShouldBlind_Params
{
	class ADBDPlayer*                                  Player;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              outDuration;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.Firecracker.OnFuseBurnUpdate
struct AFirecracker_OnFuseBurnUpdate_Params
{
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              fuseTimeLeftPercent;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.Firecracker.OnFuseBurnExit
struct AFirecracker_OnFuseBurnExit_Params
{
};

// Function DeadByDaylight.Firecracker.OnFuseBurnEnter
struct AFirecracker_OnFuseBurnEnter_Params
{
};

// Function DeadByDaylight.Firecracker.OnExplode
struct AFirecracker_OnExplode_Params
{
};

// Function DeadByDaylight.Firecracker.OnEffectsInitialized
struct AFirecracker_OnEffectsInitialized_Params
{
};

// Function DeadByDaylight.Firecracker.Multicast_InitFromSpawner
struct AFirecracker_Multicast_InitFromSpawner_Params
{
	class ACollectable*                                spawner;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.Firecracker.HasModifierOfType
struct AFirecracker_HasModifierOfType_Params
{
	struct FGameplayTag                                Type;                                                     // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.Firecracker.HasFlag
struct AFirecracker_HasFlag_Params
{
	struct FGameplayTag                                flag;                                                     // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.Firecracker.GetPlayerOwner
struct AFirecracker_GetPlayerOwner_Params
{
	class ADBDPlayer*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.Firecracker.GetModifierValue
struct AFirecracker_GetModifierValue_Params
{
	struct FGameplayTag                                Type;                                                     // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.Firecracker.GetExplosionRange
struct AFirecracker_GetExplosionRange_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.Firecracker.GetExplosionEffectDuration
struct AFirecracker_GetExplosionEffectDuration_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.Firecracker.GetExplosionDelay
struct AFirecracker_GetExplosionDelay_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.Firecracker.GetExploded
struct AFirecracker_GetExploded_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.Firecracker.GetEffects
struct AFirecracker_GetEffects_Params
{
	TArray<class UGameplayModifierContainer*>          ReturnValue;                                              // (ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function DeadByDaylight.Firecracker.GetEffectArea
struct AFirecracker_GetEffectArea_Params
{
	class UPrimitiveComponent*                         ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function DeadByDaylight.Firecracker.GetDeafnessEffectDuration
struct AFirecracker_GetDeafnessEffectDuration_Params
{
	class ADBDPlayer*                                  Player;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.Firecracker.GetBlindnessEffectDuration
struct AFirecracker_GetBlindnessEffectDuration_Params
{
	class ADBDPlayer*                                  Player;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.FirecrackerEffectHandlerComponent.SetFirecrackerInRange
struct UFirecrackerEffectHandlerComponent_SetFirecrackerInRange_Params
{
	class AFirecracker*                                Firecracker;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               inRange;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.FirecrackerEffectHandlerComponent.OnFirecrackerDestroyed
struct UFirecrackerEffectHandlerComponent_OnFirecrackerDestroyed_Params
{
	class AActor*                                      DestroyedActor;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.FlashLightComponent.UsingCheapSpotLightOcclusion
struct UFlashLightComponent_UsingCheapSpotLightOcclusion_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.FlashLightComponent.Server_UpdateTargetLitCharge
struct UFlashLightComponent_Server_UpdateTargetLitCharge_Params
{
	class AInteractable*                               Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.FlashLightComponent.Server_StopBlindCharge
struct UFlashLightComponent_Server_StopBlindCharge_Params
{
	class AActor*                                      effector;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.FlashLightComponent.Server_StartBlindCharge
struct UFlashLightComponent_Server_StartBlindCharge_Params
{
	class AActor*                                      effector;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.FlashLightComponent.OnUseReleased
struct UFlashLightComponent_OnUseReleased_Params
{
};

// Function DeadByDaylight.FlashLightComponent.OnUse
struct UFlashLightComponent_OnUse_Params
{
};

// Function DeadByDaylight.FlashLightComponent.IsSlasherBlinded
struct UFlashLightComponent_IsSlasherBlinded_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.FlashLightComponent.IsInUse
struct UFlashLightComponent_IsInUse_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.FlashLightComponent.GetOcclusionDistance
struct UFlashLightComponent_GetOcclusionDistance_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.FlashLightComponent.GetMaxAimingDistance
struct UFlashLightComponent_GetMaxAimingDistance_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.FlashLightComponent.GetEffectiveTimeToInvisibilityBurnoutModifier
struct UFlashLightComponent_GetEffectiveTimeToInvisibilityBurnoutModifier_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.FlashLightComponent.GetEffectiveTimeToBlindModifier
struct UFlashLightComponent_GetEffectiveTimeToBlindModifier_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.FlashLightComponent.GetEffectiveBlindnessDuration
struct UFlashLightComponent_GetEffectiveBlindnessDuration_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.FlashLightComponent.GetEffectiveBeamLength
struct UFlashLightComponent_GetEffectiveBeamLength_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.FlashLightComponent.GetEffectiveBeamHalfAngle
struct UFlashLightComponent_GetEffectiveBeamHalfAngle_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.FlashLightComponent.GetEffectiveAccuracy
struct UFlashLightComponent_GetEffectiveAccuracy_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.FlashLightReceiverComponent.RemoveFlashLight
struct UFlashLightReceiverComponent_RemoveFlashLight_Params
{
	class UFlashLightComponent*                        flashLight;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DeadByDaylight.FlashLightReceiverComponent.IsInAnyFlashLightZone
struct UFlashLightReceiverComponent_IsInAnyFlashLightZone_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.FlashLightReceiverComponent.IsActorInAnyFlashLightZone
struct UFlashLightReceiverComponent_IsActorInAnyFlashLightZone_Params
{
	class AActor*                                      Target;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.FlashLightReceiverComponent.AddFlashLight
struct UFlashLightReceiverComponent_AddFlashLight_Params
{
	class UFlashLightComponent*                        flashLight;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DeadByDaylight.FootSteps.OnSoundTriggered
struct AFootSteps_OnSoundTriggered_Params
{
	class AActor*                                      originator;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               shouldTrack;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              audibleRange;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.OnlineSystemHandler.ReservationComplete
struct UOnlineSystemHandler_ReservationComplete_Params
{
	int                                                result;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.OnlineSystemHandler.OnHostConnectionFailure
struct UOnlineSystemHandler_OnHostConnectionFailure_Params
{
};

// Function DeadByDaylight.OnlineSystemHandler.JoinSessionOnBeaconDestroyed
struct UOnlineSystemHandler_JoinSessionOnBeaconDestroyed_Params
{
	class AActor*                                      DestroyedActor;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.Perk.Multicast_InitializePerk
struct UPerk_Multicast_InitializePerk_Params
{
	struct FName                                       PerkID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                PerkLevel;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.Perk.GetPerkLevel
struct UPerk_GetPerkLevel_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.Perk.GetInventoryItemType
struct UPerk_GetInventoryItemType_Params
{
	TEnumAsByte<EInventoryItemType>                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.Perk.GetGameplayModifierData
struct UPerk_GetGameplayModifierData_Params
{
	struct FGameplayModifierData                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DeadByDaylight.Perk.GetConstGameplayModifierData
struct UPerk_GetConstGameplayModifierData_Params
{
	struct FGameplayModifierData                       ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)
};

// Function DeadByDaylight.HexPerk.OnInitialized_Internal
struct UHexPerk_OnInitialized_Internal_Params
{
};

// Function DeadByDaylight.HexPerk.OnGameplayEvent
struct UHexPerk_OnGameplayEvent_Params
{
	TEnumAsByte<EDBDScoreTypes>                        gameplayEventType;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Instigator;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.HexPerk.Multicast_SetTotemActor
struct UHexPerk_Multicast_SetTotemActor_Params
{
	class ATotem*                                      aTotemActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.HexPerk.IsCurseRevealedToPlayer
struct UHexPerk_IsCurseRevealedToPlayer_Params
{
	int                                                playerUniqueID;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.HexPerk.FireCursedStatusOnLocalPlayer
struct UHexPerk_FireCursedStatusOnLocalPlayer_Params
{
};

// Function DeadByDaylight.HexPerk.Authority_SetCurseRevealedToPlayer
struct UHexPerk_Authority_SetCurseRevealedToPlayer_Params
{
	int                                                playerUniqueID;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.HexPerk.Authority_BindToDullTotem
struct UHexPerk_Authority_BindToDullTotem_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.StakeOutPerk.Server_ConsumeToken
struct UStakeOutPerk_Server_ConsumeToken_Params
{
};

// Function DeadByDaylight.StakeOutPerk.Local_BroadcastConsumeToken
struct UStakeOutPerk_Local_BroadcastConsumeToken_Params
{
};

// Function DeadByDaylight.SurveillancePerk.HandleGeneratorIsDamagedChanged
struct USurveillancePerk_HandleGeneratorIsDamagedChanged_Params
{
	class AGenerator*                                  Generator;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.StatusEffect.ShouldDisplayStatusEffectIcon
struct UStatusEffect_ShouldDisplayStatusEffectIcon_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.StatusEffect.SetShouldDisplay
struct UStatusEffect_SetShouldDisplay_Params
{
	bool                                               On;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.StatusEffect.OnInitialized_Internal
struct UStatusEffect_OnInitialized_Internal_Params
{
};

// Function DeadByDaylight.StatusEffect.Multicast_SetRemainingLifetime
struct UStatusEffect_Multicast_SetRemainingLifetime_Params
{
	float                                              lifetime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.StatusEffect.Multicast_InitializeStatusEffect
struct UStatusEffect_Multicast_InitializeStatusEffect_Params
{
	struct FName                                       statusEffectID;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class ADBDPlayer*                                  originatingPlayer;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              customParam;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UGameplayModifierContainer*                  originatingEffect;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DeadByDaylight.StatusEffect.InitializeLifetime
struct UStatusEffect_InitializeLifetime_Params
{
	float                                              lifetime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.StatusEffect.GetStatusEffectCooldownRate
struct UStatusEffect_GetStatusEffectCooldownRate_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.StatusEffect.GetShouldDisplay
struct UStatusEffect_GetShouldDisplay_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.StatusEffect.GetOriginatingPlayer
struct UStatusEffect_GetOriginatingPlayer_Params
{
	class ADBDPlayer*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.StatusEffect.GetGameplayModifierData
struct UStatusEffect_GetGameplayModifierData_Params
{
	struct FGameplayModifierData                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DeadByDaylight.StatusEffect.GetConstGameplayModifierData
struct UStatusEffect_GetConstGameplayModifierData_Params
{
	struct FGameplayModifierData                       ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)
};

// Function DeadByDaylight.StatusEffect.FireActiveStatusEffectEvent
struct UStatusEffect_FireActiveStatusEffectEvent_Params
{
	float                                              percentage;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                LevelToDisplay;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.StatusEffect.BroadcastOriginatorGameEventNotification
struct UStatusEffect_BroadcastOriginatorGameEventNotification_Params
{
};

// Function DeadByDaylight.StatusEffect.BroadcastGameEventNotification
struct UStatusEffect_BroadcastGameEventNotification_Params
{
	struct FGameplayNotificationData                   notificationData;                                         // (Parm)
	bool                                               addToHistory;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.StatusEffect.Authority_SetRemainingLifetime
struct UStatusEffect_Authority_SetRemainingLifetime_Params
{
	float                                              lifetime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.StatusEffect.Authority_RemoveSelf
struct UStatusEffect_Authority_RemoveSelf_Params
{
};

// Function DeadByDaylight.Bloodlust.Multicast_ResetBloodlust
struct UBloodlust_Multicast_ResetBloodlust_Params
{
};

// Function DeadByDaylight.Bloodlust.GetBloodlustTime
struct UBloodlust_GetBloodlustTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.GameplayModifierFunctionLibrary.SetPlayerGameplayModifier
struct UGameplayModifierFunctionLibrary_SetPlayerGameplayModifier_Params
{
	class ADBDPlayer*                                  targetPlayer;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag                                ModifierType;                                             // (Parm)
	float                                              ModifierValue;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.GameplayModifierFunctionLibrary.SetPlayerGameplayFlag
struct UGameplayModifierFunctionLibrary_SetPlayerGameplayFlag_Params
{
	class ADBDPlayer*                                  targetPlayer;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag                                flagType;                                                 // (Parm)
};

// Function DeadByDaylight.GameplayModifierFunctionLibrary.ClearPlayerGameplayModifier
struct UGameplayModifierFunctionLibrary_ClearPlayerGameplayModifier_Params
{
	class ADBDPlayer*                                  targetPlayer;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag                                ModifierType;                                             // (Parm)
};

// Function DeadByDaylight.GameplayModifierFunctionLibrary.ClearPlayerGameplayFlag
struct UGameplayModifierFunctionLibrary_ClearPlayerGameplayFlag_Params
{
	class ADBDPlayer*                                  targetPlayer;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag                                flagType;                                                 // (Parm)
};

// Function DeadByDaylight.GameplayModifierFunctionLibrary.ClearAllPlayerGameplayModifiers
struct UGameplayModifierFunctionLibrary_ClearAllPlayerGameplayModifiers_Params
{
	class ADBDPlayer*                                  targetPlayer;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.GameplayModifierFunctionLibrary.ClearAllPlayerGameplayFlags
struct UGameplayModifierFunctionLibrary_ClearAllPlayerGameplayFlags_Params
{
	class ADBDPlayer*                                  targetPlayer;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.TimerGate.Update
struct ATimerGate_Update_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.TimerGate.SetValues
struct ATimerGate_SetValues_Params
{
	float                                              TimerDuration;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              RushGain;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              RushBlockDuration;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.TimerGate.Rushed
struct ATimerGate_Rushed_Params
{
	bool                                               success;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.TimerGate.Reset
struct ATimerGate_Reset_Params
{
};

// Function DeadByDaylight.TimerGate.RemoveTime
struct ATimerGate_RemoveTime_Params
{
	float                                              Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.TimerGate.AddTime
struct ATimerGate_AddTime_Params
{
	float                                              Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.GateFactory.GetGate
struct AGateFactory_GetGate_Params
{
	TEnumAsByte<EGateType>                             GateType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class AGate*                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.GeneratorDrivenActor.SetSpawnedObject
struct AGeneratorDrivenActor_SetSpawnedObject_Params
{
	class AGenerator*                                  Generator;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.GeneratorDrivenActor.OnInitGeneratorDrivenActor
struct AGeneratorDrivenActor_OnInitGeneratorDrivenActor_Params
{
	class AGenerator*                                  Generator;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.GeneratorDrivenActor.OnActivateGeneratorDrivenActor
struct AGeneratorDrivenActor_OnActivateGeneratorDrivenActor_Params
{
};

// Function DeadByDaylight.GeneratorDrivenActor.Multicast_ActivationChecked
struct AGeneratorDrivenActor_Multicast_ActivationChecked_Params
{
	bool                                               activated;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.CrowBomb.TriggerTakeOff
struct ACrowBomb_TriggerTakeOff_Params
{
	struct FVector                                     triggerLocation;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.CrowBomb.TriggerLand
struct ACrowBomb_TriggerLand_Params
{
};

// Function DeadByDaylight.HookAnalyticsBlueprintLibrary.IncrementHookSpawned
struct UHookAnalyticsBlueprintLibrary_IncrementHookSpawned_Params
{
};

// Function DeadByDaylight.Generator.SetShowRegressionOutline
struct AGenerator_SetShowRegressionOutline_Params
{
	bool                                               showRegressionOutline;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.Generator.SetGeneratorRegressionOutline
struct AGenerator_SetGeneratorRegressionOutline_Params
{
	bool                                               shouldShowRegressionOutline;                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.Generator.SetComplete
struct AGenerator_SetComplete_Params
{
	bool                                               complete;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.Generator.OnEscapeDoorActivated
struct AGenerator_OnEscapeDoorActivated_Params
{
};

// Function DeadByDaylight.Generator.GetMapActorComponent
struct AGenerator_GetMapActorComponent_Params
{
	class UMapActorComponent*                          ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function DeadByDaylight.Generator.GetIsDamaged
struct AGenerator_GetIsDamaged_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.Generator.BroadcastIsDamagedChangedEvent
struct AGenerator_BroadcastIsDamagedChangedEvent_Params
{
};

// Function DeadByDaylight.Generator.BroadcastGeneratorRepairedBySurvivor
struct AGenerator_BroadcastGeneratorRepairedBySurvivor_Params
{
	class ADBDPlayer*                                  repairingSurvivor;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.Generator.BroadcastGeneratorRepaired
struct AGenerator_BroadcastGeneratorRepaired_Params
{
};

// Function DeadByDaylight.EscapeDoor.OnRep_Activated
struct AEscapeDoor_OnRep_Activated_Params
{
	bool                                               oldActivated;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.EscapeDoor.OnExitActivationChanged
struct AEscapeDoor_OnExitActivationChanged_Params
{
	bool                                               activated;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.Locker.UpdateDelayedDoorOpen
struct ALocker_UpdateDelayedDoorOpen_Params
{
};

// Function DeadByDaylight.Locker.IsSurvivorInLockerDead
struct ALocker_IsSurvivorInLockerDead_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.MeatHook.OnTickStruggle
struct AMeatHook_OnTickStruggle_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.MeatHook.OnStruggleExit
struct AMeatHook_OnStruggleExit_Params
{
};

// Function DeadByDaylight.MeatHook.OnStruggleEnter
struct AMeatHook_OnStruggleEnter_Params
{
};

// Function DeadByDaylight.MeatHook.OnSacrificeOut
struct AMeatHook_OnSacrificeOut_Params
{
};

// Function DeadByDaylight.MeatHook.OnSacrificeIn
struct AMeatHook_OnSacrificeIn_Params
{
};

// Function DeadByDaylight.MeatHook.OnReactionIn
struct AMeatHook_OnReactionIn_Params
{
};

// Function DeadByDaylight.MeatHook.OnReaction
struct AMeatHook_OnReaction_Params
{
};

// Function DeadByDaylight.MeatHook.OnHookingExit
struct AMeatHook_OnHookingExit_Params
{
};

// Function DeadByDaylight.MeatHook.OnHookingEnter
struct AMeatHook_OnHookingEnter_Params
{
};

// Function DeadByDaylight.MeatHook.OnHookedSurvivorAttacked
struct AMeatHook_OnHookedSurvivorAttacked_Params
{
};

// Function DeadByDaylight.MeatHook.OnHookedIdle
struct AMeatHook_OnHookedIdle_Params
{
};

// Function DeadByDaylight.MeatHook.OnHookedExit
struct AMeatHook_OnHookedExit_Params
{
};

// Function DeadByDaylight.MeatHook.OnHookedEnter
struct AMeatHook_OnHookedEnter_Params
{
};

// Function DeadByDaylight.MeatHook.OnEscapeAttemptSuccessful
struct AMeatHook_OnEscapeAttemptSuccessful_Params
{
	class ACamperPlayer*                               survivor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.MeatHook.OnAutoRepair
struct AMeatHook_OnAutoRepair_Params
{
};

// Function DeadByDaylight.MeatHook.Multicast_SetIsSacrificed
struct AMeatHook_Multicast_SetIsSacrificed_Params
{
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.MeatHook.Multicast_SetIsSabotaged
struct AMeatHook_Multicast_SetIsSabotaged_Params
{
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.MeatHook.Multicast_SetHookedSurvivor
struct AMeatHook_Multicast_SetHookedSurvivor_Params
{
	class ACamperPlayer*                               survivor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.MeatHook.Multicast_EscapeAttemptResult
struct AMeatHook_Multicast_EscapeAttemptResult_Params
{
	bool                                               result;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.MeatHook.GetMontagePlayer
struct AMeatHook_GetMontagePlayer_Params
{
	class UMontagePlayer*                              ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function DeadByDaylight.MeatHook.GetMapActorNative
struct AMeatHook_GetMapActorNative_Params
{
	class UMapActorComponent*                          ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function DeadByDaylight.MeatHook.GetIsSacrificed
struct AMeatHook_GetIsSacrificed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.MeatHook.GetIsSabotaged
struct AMeatHook_GetIsSabotaged_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.MeatHook.GetIsBroken
struct AMeatHook_GetIsBroken_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.MeatHook.GetHookedSurvivor
struct AMeatHook_GetHookedSurvivor_Params
{
	class ACamperPlayer*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.MeatHook.CanUnhookSurvivor
struct AMeatHook_CanUnhookSurvivor_Params
{
	class ACamperPlayer*                               survivor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.MeatHook.CanSurvivorStruggle
struct AMeatHook_CanSurvivorStruggle_Params
{
	class ACamperPlayer*                               survivor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.MeatHook.CanSurvivorAttemptEscape
struct AMeatHook_CanSurvivorAttemptEscape_Params
{
	class ACamperPlayer*                               survivor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.MeatHook.CanHookSurvivor
struct AMeatHook_CanHookSurvivor_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.MeatHook.CanBeSabotaged
struct AMeatHook_CanBeSabotaged_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.MeatHook.Authority_SignalUnhookingEnter
struct AMeatHook_Authority_SignalUnhookingEnter_Params
{
};

// Function DeadByDaylight.MeatHook.Authority_SignalUnhookingCharged
struct AMeatHook_Authority_SignalUnhookingCharged_Params
{
};

// Function DeadByDaylight.MeatHook.Authority_SignalUnhookingAborted
struct AMeatHook_Authority_SignalUnhookingAborted_Params
{
};

// Function DeadByDaylight.MeatHook.Authority_SignalSurvivorAttemptingEscapeCharged
struct AMeatHook_Authority_SignalSurvivorAttemptingEscapeCharged_Params
{
};

// Function DeadByDaylight.MeatHook.Authority_SignalSurvivorAttemptingEscapeAborted
struct AMeatHook_Authority_SignalSurvivorAttemptingEscapeAborted_Params
{
};

// Function DeadByDaylight.MeatHook.Authority_SignalSurvivorAttemptingEscape
struct AMeatHook_Authority_SignalSurvivorAttemptingEscape_Params
{
};

// Function DeadByDaylight.MeatHook.Authority_SetIsSacrificed
struct AMeatHook_Authority_SetIsSacrificed_Params
{
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.MeatHook.Authority_SetIsSabotaged
struct AMeatHook_Authority_SetIsSabotaged_Params
{
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.MeatHook.Authority_SetHookedSurvivor
struct AMeatHook_Authority_SetHookedSurvivor_Params
{
	class ACamperPlayer*                               survivor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.Pallet.UpdateIllusionaryPallet
struct APallet_UpdateIllusionaryPallet_Params
{
	class USceneComponent*                             IllusionaryPallet;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             SKPlankbool;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DeadByDaylight.Pallet.ResetPallet
struct APallet_ResetPallet_Params
{
};

// Function DeadByDaylight.Pallet.Multicast_ResetPallet
struct APallet_Multicast_ResetPallet_Params
{
};

// Function DeadByDaylight.ReverseBearTrap.StopMontage
struct AReverseBearTrap_StopMontage_Params
{
};

// Function DeadByDaylight.ReverseBearTrap.StopExecutionTimer
struct AReverseBearTrap_StopExecutionTimer_Params
{
};

// Function DeadByDaylight.ReverseBearTrap.ShouldUpdateExecutionTimer
struct AReverseBearTrap_ShouldUpdateExecutionTimer_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.ReverseBearTrap.SetVisible
struct AReverseBearTrap_SetVisible_Params
{
	bool                                               Visible;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.ReverseBearTrap.SetKeyID
struct AReverseBearTrap_SetKeyID_Params
{
	int                                                keyID;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.ReverseBearTrap.ResetExecutionTimer
struct AReverseBearTrap_ResetExecutionTimer_Params
{
	float                                              Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.ReverseBearTrap.OnWarningLevelChanged
struct AReverseBearTrap_OnWarningLevelChanged_Params
{
	int                                                previousWarningLevel;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                currentWarningLevel;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.ReverseBearTrap.OnExitWarningZone
struct AReverseBearTrap_OnExitWarningZone_Params
{
};

// Function DeadByDaylight.ReverseBearTrap.OnEnterWarningZone
struct AReverseBearTrap_OnEnterWarningZone_Params
{
};

// Function DeadByDaylight.ReverseBearTrap.OnDetachSurvivor
struct AReverseBearTrap_OnDetachSurvivor_Params
{
	class ACamperPlayer*                               survivor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.ReverseBearTrap.OnAttachSurvivor
struct AReverseBearTrap_OnAttachSurvivor_Params
{
	class ACamperPlayer*                               survivor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.ReverseBearTrap.NotifyDetachStarted
struct AReverseBearTrap_NotifyDetachStarted_Params
{
	class ACamperPlayer*                               survivor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.ReverseBearTrap.IsInWarningZone
struct AReverseBearTrap_IsInWarningZone_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.ReverseBearTrap.IsExecutionTimerDone
struct AReverseBearTrap_IsExecutionTimerDone_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.ReverseBearTrap.IsExecutionTimerActive
struct AReverseBearTrap_IsExecutionTimerActive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.ReverseBearTrap.HasDetachStarted
struct AReverseBearTrap_HasDetachStarted_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.ReverseBearTrap.GetWarningLevel
struct AReverseBearTrap_GetWarningLevel_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.ReverseBearTrap.GetKeyID
struct AReverseBearTrap_GetKeyID_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.ReverseBearTrap.GetExecutionTimerTimeLeft
struct AReverseBearTrap_GetExecutionTimerTimeLeft_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.ReverseBearTrap.GetExecutionTimerPercentTimeElapsed
struct AReverseBearTrap_GetExecutionTimerPercentTimeElapsed_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.ReverseBearTrap.GetAttachedSurvivor
struct AReverseBearTrap_GetAttachedSurvivor_Params
{
	class ACamperPlayer*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.ReverseBearTrap.DetachSurvivor
struct AReverseBearTrap_DetachSurvivor_Params
{
	class ACamperPlayer*                               survivor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.ReverseBearTrap.CanExecute
struct AReverseBearTrap_CanExecute_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.ReverseBearTrap.AttachSurvivor
struct AReverseBearTrap_AttachSurvivor_Params
{
	class ACamperPlayer*                               survivor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.Searchable.SpawnObject
struct ASearchable_SpawnObject_Params
{
	class ADBDPlayer*                                  Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class ACollectable*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.Totem.OnBoundToHex
struct ATotem_OnBoundToHex_Params
{
};

// Function DeadByDaylight.Totem.Multicast_BindToHex
struct ATotem_Multicast_BindToHex_Params
{
	struct FName                                       hexPerkID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.Totem.HasHex
struct ATotem_HasHex_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.OnInterruptorUpdateStart
struct UInteractionDefinition_OnInterruptorUpdateStart_Params
{
	class UInterruptionDefinition*                     currentInterruption;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ADBDPlayer*                                  interruptor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class ADBDPlayer*                                  interruptee;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.OnInteractionUpdateTick
struct UInteractionDefinition_OnInteractionUpdateTick_Params
{
	class ADBDPlayer*                                  Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.OnInteractionUpdateStart
struct UInteractionDefinition_OnInteractionUpdateStart_Params
{
	class ADBDPlayer*                                  Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.OnInteractionUpdateMontageReachedMiddle
struct UInteractionDefinition_OnInteractionUpdateMontageReachedMiddle_Params
{
	class ADBDPlayer*                                  Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.OnInteractionUpdateEnd
struct UInteractionDefinition_OnInteractionUpdateEnd_Params
{
	class ADBDPlayer*                                  Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.OnInteractionInterruptStarted
struct UInteractionDefinition_OnInteractionInterruptStarted_Params
{
	class ADBDPlayer*                                  Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UInterruptionDefinition*                     currentInterruption;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ADBDPlayer*                                  interruptingPlayer;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.OnInteractionInterruptStart
struct UInteractionDefinition_OnInteractionInterruptStart_Params
{
	class ADBDPlayer*                                  Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UInterruptionDefinition*                     currentInterruption;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ADBDPlayer*                                  interruptingPlayer;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.OnInteractionInterruptEnd
struct UInteractionDefinition_OnInteractionInterruptEnd_Params
{
	class ADBDPlayer*                                  Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UInterruptionDefinition*                     currentInterruption;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ADBDPlayer*                                  interruptingPlayer;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.OnInteractionInit
struct UInteractionDefinition_OnInteractionInit_Params
{
	class ADBDPlayer*                                  Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.OnInteractionFinished
struct UInteractionDefinition_OnInteractionFinished_Params
{
	class ADBDPlayer*                                  Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               hasInteractionStarted;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.OnInteractionExitStart
struct UInteractionDefinition_OnInteractionExitStart_Params
{
	class ADBDPlayer*                                  Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.OnInteractionExitEnd
struct UInteractionDefinition_OnInteractionExitEnd_Params
{
	class ADBDPlayer*                                  Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.OnInteractionEnterTick
struct UInteractionDefinition_OnInteractionEnterTick_Params
{
	class ADBDPlayer*                                  Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.OnInteractionEnterStart
struct UInteractionDefinition_OnInteractionEnterStart_Params
{
	class ADBDPlayer*                                  Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              actualSnapTime;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.OnInteractionEnterFailed
struct UInteractionDefinition_OnInteractionEnterFailed_Params
{
	class ADBDPlayer*                                  Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.OnInteractionEnterEnd
struct UInteractionDefinition_OnInteractionEnterEnd_Params
{
	class ADBDPlayer*                                  Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.OnInteractionCancelled
struct UInteractionDefinition_OnInteractionCancelled_Params
{
	class ADBDPlayer*                                  Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.OnInteractionAnimNotifyEvent
struct UInteractionDefinition_OnInteractionAnimNotifyEvent_Params
{
	struct FName                                       NotifyId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class ADBDPlayer*                                  Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.IsSupportedCharacterType
struct UInteractionDefinition_IsSupportedCharacterType_Params
{
	class ADBDPlayer*                                  Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.IsInterruptionPossible
struct UInteractionDefinition_IsInterruptionPossible_Params
{
	class ADBDPlayer*                                  interruptor;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class ADBDPlayer*                                  interruptee;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UInterruptionDefinition*                     interruption;                                             // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.IsInteractionPossibleClient
struct UInteractionDefinition_IsInteractionPossibleClient_Params
{
	class ADBDPlayer*                                  Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInputInteractionType>                 InteractionType;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.IsInteractionPossibleBP
struct UInteractionDefinition_IsInteractionPossibleBP_Params
{
	class ADBDPlayer*                                  Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInputInteractionType>                 InteractionType;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.IsInteractionDone
struct UInteractionDefinition_IsInteractionDone_Params
{
	class ADBDPlayer*                                  Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInputInteractionType>                 InteractionType;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.IsInputPressed
struct UInteractionDefinition_IsInputPressed_Params
{
	class ADBDPlayer*                                  Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.IsCharacterFacingInteractorDirection
struct UInteractionDefinition_IsCharacterFacingInteractorDirection_Params
{
	class ADBDPlayer*                                  Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.IsCancelable
struct UInteractionDefinition_IsCancelable_Params
{
	class ADBDPlayer*                                  Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.GetUpdateMontage
struct UInteractionDefinition_GetUpdateMontage_Params
{
	class ADBDPlayer*                                  Player;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FAnimationMontageDescriptor                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DeadByDaylight.InteractionDefinition.GetUpdateAnimationPlayRate
struct UInteractionDefinition_GetUpdateAnimationPlayRate_Params
{
	class ADBDPlayer*                                  Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.GetUpdateAnimationPlayBackDefinition
struct UInteractionDefinition_GetUpdateAnimationPlayBackDefinition_Params
{
	class ADBDPlayer*                                  Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Follower;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FMontagePlaybackDefinition                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DeadByDaylight.InteractionDefinition.GetSnapTimeAtStart
struct UInteractionDefinition_GetSnapTimeAtStart_Params
{
	class ADBDPlayer*                                  Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.GetSnapTime
struct UInteractionDefinition_GetSnapTime_Params
{
	class ADBDPlayer*                                  Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.GetSnapSocketName
struct UInteractionDefinition_GetSnapSocketName_Params
{
	class ADBDPlayer*                                  Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.GetSnapPointRotationAtStart
struct UInteractionDefinition_GetSnapPointRotationAtStart_Params
{
	class ADBDPlayer*                                  Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.GetSnapPointRotation
struct UInteractionDefinition_GetSnapPointRotation_Params
{
	class ADBDPlayer*                                  Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.GetSnapPointPositionAtStart
struct UInteractionDefinition_GetSnapPointPositionAtStart_Params
{
	class ADBDPlayer*                                  Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.GetSnapPointPosition
struct UInteractionDefinition_GetSnapPointPosition_Params
{
	class ADBDPlayer*                                  Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.GetSnapDistanceAtStart
struct UInteractionDefinition_GetSnapDistanceAtStart_Params
{
	class ADBDPlayer*                                  Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.GetSnapDistance
struct UInteractionDefinition_GetSnapDistance_Params
{
	class ADBDPlayer*                                  Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.GetPlayerDependancy
struct UInteractionDefinition_GetPlayerDependancy_Params
{
	class ADBDPlayer*                                  interactingPlayer;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class ADBDPlayer*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.GetNavigationSpeedUpdate
struct UInteractionDefinition_GetNavigationSpeedUpdate_Params
{
	float                                              Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class ADBDPlayer*                                  Player;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.GetNavigationSpeedExit
struct UInteractionDefinition_GetNavigationSpeedExit_Params
{
	float                                              Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class ADBDPlayer*                                  Player;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.GetNavigationSpeedEnter
struct UInteractionDefinition_GetNavigationSpeedEnter_Params
{
	float                                              Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class ADBDPlayer*                                  Player;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.GetInterruptionDefinitions
struct UInteractionDefinition_GetInterruptionDefinitions_Params
{
	TArray<class UInterruptionDefinition*>             ReturnValue;                                              // (ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function DeadByDaylight.InteractionDefinition.GetInteractor
struct UInteractionDefinition_GetInteractor_Params
{
	class UInteractor*                                 ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.GetInteractionTime
struct UInteractionDefinition_GetInteractionTime_Params
{
	class ADBDPlayer*                                  Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.GetInteractionText
struct UInteractionDefinition_GetInteractionText_Params
{
	class ADBDPlayer*                                  Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function DeadByDaylight.InteractionDefinition.GetInteractionSpeedModifier
struct UInteractionDefinition_GetInteractionSpeedModifier_Params
{
	class ADBDPlayer*                                  Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.GetInteractionExitTime
struct UInteractionDefinition_GetInteractionExitTime_Params
{
	class ADBDPlayer*                                  Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.GetInteractionDescriptionText
struct UInteractionDefinition_GetInteractionDescriptionText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DeadByDaylight.InteractionDefinition.GetInteractable
struct UInteractionDefinition_GetInteractable_Params
{
	class AInteractable*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.GetFocalPointPosition
struct UInteractionDefinition_GetFocalPointPosition_Params
{
	class ADBDPlayer*                                  Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.GetExitMontage
struct UInteractionDefinition_GetExitMontage_Params
{
	class ADBDPlayer*                                  Player;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FAnimationMontageDescriptor                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DeadByDaylight.InteractionDefinition.GetExitAnimationPlayBackDefinition
struct UInteractionDefinition_GetExitAnimationPlayBackDefinition_Params
{
	class ADBDPlayer*                                  Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Follower;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FMontagePlaybackDefinition                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DeadByDaylight.InteractionDefinition.GetEnterMontage
struct UInteractionDefinition_GetEnterMontage_Params
{
	class ADBDPlayer*                                  Player;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FAnimationMontageDescriptor                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DeadByDaylight.InteractionDefinition.GetEnterAnimationPlayBackDefinition
struct UInteractionDefinition_GetEnterAnimationPlayBackDefinition_Params
{
	class ADBDPlayer*                                  Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Follower;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FMontagePlaybackDefinition                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DeadByDaylight.InteractionDefinition.GetAllowNavigation
struct UInteractionDefinition_GetAllowNavigation_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.GetActualSnapPointPositionAtStart
struct UInteractionDefinition_GetActualSnapPointPositionAtStart_Params
{
	class ADBDPlayer*                                  Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.GetActualSnapPointPosition
struct UInteractionDefinition_GetActualSnapPointPosition_Params
{
	class ADBDPlayer*                                  Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.GetActorsToIgnoreOverlap
struct UInteractionDefinition_GetActorsToIgnoreOverlap_Params
{
	TArray<class AActor*>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function DeadByDaylight.InteractionDefinition.GetActorHeightDelta
struct UInteractionDefinition_GetActorHeightDelta_Params
{
	class ADBDPlayer*                                  Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.EndOverlapCallback
struct UInteractionDefinition_EndOverlapCallback_Params
{
	class UPrimitiveComponent*                         HitComponent;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.DoesPlayerHaveClearPath
struct UInteractionDefinition_DoesPlayerHaveClearPath_Params
{
	class ADBDPlayer*                                  Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.CompleteCharge
struct UInteractionDefinition_CompleteCharge_Params
{
};

// Function DeadByDaylight.InteractionDefinition.CanOverrideInteraction
struct UInteractionDefinition_CanOverrideInteraction_Params
{
	class UInteractionDefinition*                      Interaction;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.BeginOverlapCallback
struct UInteractionDefinition_BeginOverlapCallback_Params
{
	class UPrimitiveComponent*                         HitComponent;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.AttachToZone
struct UInteractionDefinition_AttachToZone_Params
{
	class UPrimitiveComponent*                         zone;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.AttachToInteractor
struct UInteractionDefinition_AttachToInteractor_Params
{
	class UInteractor*                                 Interactor;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DeadByDaylight.InteractionDefinition.AddMutuallyExclusiveInteraction
struct UInteractionDefinition_AddMutuallyExclusiveInteraction_Params
{
	class UInteractionDefinition*                      Interaction;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DeadByDaylight.ChargeableInteractionDefinition.SetChargeableComponent
struct UChargeableInteractionDefinition_SetChargeableComponent_Params
{
	class UChargeableComponent*                        ChargeableComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DeadByDaylight.ChargeableInteractionDefinition.OnSkillCheckResponseAuthorityBP
struct UChargeableInteractionDefinition_OnSkillCheckResponseAuthorityBP_Params
{
	class ADBDPlayer*                                  Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               success;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Bonus;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               hadInput;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESkillCheckCustomType>                 Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.ChargeableInteractionDefinition.OnSkillCheckResponseAuthority
struct UChargeableInteractionDefinition_OnSkillCheckResponseAuthority_Params
{
	bool                                               success;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Bonus;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class ADBDPlayer*                                  Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               TriggerLoudNoise;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               hadInput;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESkillCheckCustomType>                 Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.ChargeableInteractionDefinition.OnSkillCheckResponseAestheticBP
struct UChargeableInteractionDefinition_OnSkillCheckResponseAestheticBP_Params
{
	class ADBDPlayer*                                  Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               success;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Bonus;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               hadInput;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESkillCheckCustomType>                 Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.ChargeableInteractionDefinition.OnSkillCheckResponseAesthetic
struct UChargeableInteractionDefinition_OnSkillCheckResponseAesthetic_Params
{
	bool                                               success;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Bonus;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class ADBDPlayer*                                  Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               TriggerLoudNoise;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               hadInput;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESkillCheckCustomType>                 Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.ChargeableInteractionDefinition.OnInteractionCompletionStateChanged
struct UChargeableInteractionDefinition_OnInteractionCompletionStateChanged_Params
{
	class ADBDPlayer*                                  Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               complete;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.ChargeableInteractionDefinition.OnChargeableChangedBP
struct UChargeableInteractionDefinition_OnChargeableChangedBP_Params
{
	class UChargeableComponent*                        oldChargeable;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UChargeableComponent*                        newChargeable;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DeadByDaylight.ChargeableInteractionDefinition.IsChargeComplete
struct UChargeableInteractionDefinition_IsChargeComplete_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.ChargeableInteractionDefinition.HasSkillCheckHappened
struct UChargeableInteractionDefinition_HasSkillCheckHappened_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.ChargeableInteractionDefinition.GetTunableValue
struct UChargeableInteractionDefinition_GetTunableValue_Params
{
	struct FName                                       TunableValueID;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DefaultValue;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.ChargeableInteractionDefinition.GetTotalChargeModifier
struct UChargeableInteractionDefinition_GetTotalChargeModifier_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.ChargeableInteractionDefinition.GetSuccessProbability
struct UChargeableInteractionDefinition_GetSuccessProbability_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.ChargeableInteractionDefinition.GetSkillCheckProbability
struct UChargeableInteractionDefinition_GetSkillCheckProbability_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.ChargeableInteractionDefinition.GetSkillCheckFailureTimePenalty
struct UChargeableInteractionDefinition_GetSkillCheckFailureTimePenalty_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.ChargeableInteractionDefinition.GetSkillCheckFailurePercentPenalty
struct UChargeableInteractionDefinition_GetSkillCheckFailurePercentPenalty_Params
{
	class ADBDPlayer*                                  Player;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.ChargeableInteractionDefinition.GetSkillCheckDifficulityModifier
struct UChargeableInteractionDefinition_GetSkillCheckDifficulityModifier_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.ChargeableInteractionDefinition.GetSkillCheckCharge
struct UChargeableInteractionDefinition_GetSkillCheckCharge_Params
{
	class ADBDPlayer*                                  Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               success;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Bonus;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESkillCheckCustomType>                 Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.ChargeableInteractionDefinition.GetPipsPassed
struct UChargeableInteractionDefinition_GetPipsPassed_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.ChargeableInteractionDefinition.GetPerkMultiplier
struct UChargeableInteractionDefinition_GetPerkMultiplier_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.ChargeableInteractionDefinition.GetOwningDBDPlayer
struct UChargeableInteractionDefinition_GetOwningDBDPlayer_Params
{
	class ADBDPlayer*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.ChargeableInteractionDefinition.GetMultiplicativeLuckBonus
struct UChargeableInteractionDefinition_GetMultiplicativeLuckBonus_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.ChargeableInteractionDefinition.GetMaxCharge
struct UChargeableInteractionDefinition_GetMaxCharge_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.ChargeableInteractionDefinition.GetItemEfficiencyModifier
struct UChargeableInteractionDefinition_GetItemEfficiencyModifier_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.ChargeableInteractionDefinition.GetGoodSkillCheckSuccessPercentReward
struct UChargeableInteractionDefinition_GetGoodSkillCheckSuccessPercentReward_Params
{
	class ADBDPlayer*                                  Player;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.ChargeableInteractionDefinition.GetChargeAmountForTime
struct UChargeableInteractionDefinition_GetChargeAmountForTime_Params
{
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.ChargeableInteractionDefinition.GetChargeableComponent
struct UChargeableInteractionDefinition_GetChargeableComponent_Params
{
	class UChargeableComponent*                        ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function DeadByDaylight.ChargeableInteractionDefinition.GetBonusSkillCheckZoneSizeModifier
struct UChargeableInteractionDefinition_GetBonusSkillCheckZoneSizeModifier_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.ChargeableInteractionDefinition.GetBonusSkillCheckSuccessPercentReward
struct UChargeableInteractionDefinition_GetBonusSkillCheckSuccessPercentReward_Params
{
	class ADBDPlayer*                                  Player;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.ChargeableInteractionDefinition.GetAdditiveLuckBonus
struct UChargeableInteractionDefinition_GetAdditiveLuckBonus_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.ChargeableInteractionDefinition.Authority_ChargeWithItem
struct UChargeableInteractionDefinition_Authority_ChargeWithItem_Params
{
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class ACollectable*                                Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.ChargeableInteractionDefinition.AddCharge
struct UChargeableInteractionDefinition_AddCharge_Params
{
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.InteractionProficiency.GetValue
struct UInteractionProficiency_GetValue_Params
{
	class UChargeableInteractionDefinition*            chargeableInteraction;                                    // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionProficiency.GetType
struct UInteractionProficiency_GetType_Params
{
	float                                              Value;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EStatusEffectType>                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionProficiency.GetLevel
struct UInteractionProficiency_GetLevel_Params
{
	class UChargeableInteractionDefinition*            chargeableInteraction;                                    // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionProficiency.GetIsActive
struct UInteractionProficiency_GetIsActive_Params
{
	class UChargeableInteractionDefinition*            chargeableInteraction;                                    // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.Interactor.Multicast_ReservationStatus
struct UInteractor_Multicast_ReservationStatus_Params
{
	class ADBDPlayer*                                  Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Lock;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.Interactor.Multicast_LockStatus
struct UInteractor_Multicast_LockStatus_Params
{
	class ADBDPlayer*                                  Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UInteractionDefinition*                      currentInteraction;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               Lock;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.Interactor.IsInterruptionPossible
struct UInteractor_IsInterruptionPossible_Params
{
	class ADBDPlayer*                                  interruptor;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class ADBDPlayer*                                  interruptee;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UInteractionDefinition*                      definition;                                               // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UInterruptionDefinition*                     interruption;                                             // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.Interactor.IsInteracting
struct UInteractor_IsInteracting_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.Interactor.GetInteractionDefinitions
struct UInteractor_GetInteractionDefinitions_Params
{
	TArray<class UInteractionDefinition*>              ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function DeadByDaylight.Interactor.GetInteractingPlayer
struct UInteractor_GetInteractingPlayer_Params
{
	class ADBDPlayer*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.Interactor.GetInteractable
struct UInteractor_GetInteractable_Params
{
	class AInteractable*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.Interactor.GetCurrentInteraction
struct UInteractor_GetCurrentInteraction_Params
{
	class UInteractionDefinition*                      ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function DeadByDaylight.Interactor.CanPerformInteraction
struct UInteractor_CanPerformInteraction_Params
{
	class ADBDPlayer*                                  Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UInteractionDefinition*                      definition;                                               // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.Interactor.BPPostInitializeComponents
struct UInteractor_BPPostInitializeComponents_Params
{
};

// Function DeadByDaylight.InterruptionDefinition.SetInterruptorSnapPoint
struct UInterruptionDefinition_SetInterruptorSnapPoint_Params
{
	struct FTransform                                  Point;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function DeadByDaylight.InterruptionDefinition.SetInterrupteeSnapPoint
struct UInterruptionDefinition_SetInterrupteeSnapPoint_Params
{
	struct FTransform                                  Point;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function DeadByDaylight.InterruptionDefinition.OnInterruptionUpdateStart
struct UInterruptionDefinition_OnInterruptionUpdateStart_Params
{
	class ADBDPlayer*                                  interruptor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class ADBDPlayer*                                  interruptee;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.InterruptionDefinition.OnInterruptionExitEnd
struct UInterruptionDefinition_OnInterruptionExitEnd_Params
{
	class ADBDPlayer*                                  interruptor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class ADBDPlayer*                                  interruptee;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.InterruptionDefinition.OnInterruptionEnterStart
struct UInterruptionDefinition_OnInterruptionEnterStart_Params
{
	class ADBDPlayer*                                  interruptor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class ADBDPlayer*                                  interruptee;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.InterruptionDefinition.IsUsingMontageFollower
struct UInterruptionDefinition_IsUsingMontageFollower_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InterruptionDefinition.IsUsingAttack
struct UInterruptionDefinition_IsUsingAttack_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InterruptionDefinition.IsInterruptionPossible
struct UInterruptionDefinition_IsInterruptionPossible_Params
{
	class ADBDPlayer*                                  interruptor;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class ADBDPlayer*                                  interruptee;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InterruptionDefinition.InteractionCheckHeightDelta
struct UInterruptionDefinition_InteractionCheckHeightDelta_Params
{
	class ADBDPlayer*                                  interruptor;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class ADBDPlayer*                                  interruptee;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InterruptionDefinition.GetInterruptionSnapPointRotationForInterruptor
struct UInterruptionDefinition_GetInterruptionSnapPointRotationForInterruptor_Params
{
	class ADBDPlayer*                                  interruptor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class ADBDPlayer*                                  interruptee;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InterruptionDefinition.GetInterruptionSnapPointRotationForInterruptee
struct UInterruptionDefinition_GetInterruptionSnapPointRotationForInterruptee_Params
{
	class ADBDPlayer*                                  interruptor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class ADBDPlayer*                                  interruptee;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InterruptionDefinition.GetInterruptionSnapPointPositionForInterruptor
struct UInterruptionDefinition_GetInterruptionSnapPointPositionForInterruptor_Params
{
	class ADBDPlayer*                                  interruptor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class ADBDPlayer*                                  interruptee;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InterruptionDefinition.GetInterruptionSnapPointPositionForInterruptee
struct UInterruptionDefinition_GetInterruptionSnapPointPositionForInterruptee_Params
{
	class ADBDPlayer*                                  interruptor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class ADBDPlayer*                                  interruptee;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InterruptionDefinition.GetInteractionDefinition
struct UInterruptionDefinition_GetInteractionDefinition_Params
{
	class UInteractionDefinition*                      ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function DeadByDaylight.InterruptionDefinition.GetInteractable
struct UInterruptionDefinition_GetInteractable_Params
{
	class AInteractable*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InterruptionDefinition.CanInterruptWhileCarrying
struct UInterruptionDefinition_CanInterruptWhileCarrying_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.ItemVfx.SetEmittersVisibility
struct AItemVfx_SetEmittersVisibility_Params
{
	bool                                               Visible;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.ItemVfx.OnAttackEnd
struct AItemVfx_OnAttackEnd_Params
{
};

// Function DeadByDaylight.ItemVfx.OnAttackBegin
struct AItemVfx_OnAttackBegin_Params
{
};

// Function DeadByDaylight.ItemVfx.AttachToSkeletalMesh
struct AItemVfx_AttachToSkeletalMesh_Params
{
	class USkeletalMeshComponent*                      SkeletonPart;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DeadByDaylight.LightFollower.SetLeader
struct ULightFollower_SetLeader_Params
{
	class ULightComponent*                             leader;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              maxIntensity;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.LightFollower.AddFollower
struct ULightFollower_AddFollower_Params
{
	class ULightComponent*                             Follower;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DeadByDaylight.LightingHelper.SetPlayerExposureOffset
struct ULightingHelper_SetPlayerExposureOffset_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.LightingHelper.DBD_ModifyExposure
struct ULightingHelper_DBD_ModifyExposure_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.LightingInterpolator.LerpSkylight
struct ULightingInterpolator_LerpSkylight_Params
{
	class USkyLightComponent*                          Target;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkyLightComponent*                          A;                                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkyLightComponent*                          B;                                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Alpha;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.LightingInterpolator.LerpLight
struct ULightingInterpolator_LerpLight_Params
{
	class ULightComponent*                             Target;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ULightComponent*                             A;                                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ULightComponent*                             B;                                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Alpha;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.LightingInterpolator.LerpHeightFog
struct ULightingInterpolator_LerpHeightFog_Params
{
	class UExponentialHeightFogComponent*              Target;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UExponentialHeightFogComponent*              A;                                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UExponentialHeightFogComponent*              B;                                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Alpha;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.LobbyLevel.SetLobbySubLevelLoaded
struct ALobbyLevel_SetLobbySubLevelLoaded_Params
{
};

// Function DeadByDaylight.LobbyLevel.GetMainLobbySubLevelName
struct ALobbyLevel_GetMainLobbySubLevelName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.OfflineLobbyLevel.CheckDestroyingPawns
struct AOfflineLobbyLevel_CheckDestroyingPawns_Params
{
	class AActor*                                      DestroyedActor;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.LocalPlayerTrackerComponent.TriggerOnLocallyObservedChanged
struct ULocalPlayerTrackerComponent_TriggerOnLocallyObservedChanged_Params
{
};

// Function DeadByDaylight.LoudNoiseHUDIndicator.AddTrackedNoise
struct ULoudNoiseHUDIndicator_AddTrackedNoise_Params
{
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.MapActorComponent.Multicast_SetDetectionEnabled
struct UMapActorComponent_Multicast_SetDetectionEnabled_Params
{
	bool                                               Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.MapActorComponent.IsKnownBy
struct UMapActorComponent_IsKnownBy_Params
{
	class ADBDPlayer*                                  Character;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.MapActorComponent.GetDetectionEnabled
struct UMapActorComponent_GetDetectionEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.MapActorDB.GetUniqueRandom
struct UMapActorDB_GetUniqueRandom_Params
{
	TArray<TEnumAsByte<EMapActorCategory>>             Categories;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                Count;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function DeadByDaylight.MapActorDB.GetRandom
struct UMapActorDB_GetRandom_Params
{
	TEnumAsByte<EMapActorCategory>                     Category;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.MapActorDetectorComponent.SetDetectionPrimitive
struct UMapActorDetectorComponent_SetDetectionPrimitive_Params
{
	class UPrimitiveComponent*                         Primitive;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DeadByDaylight.MapActorDetectorComponent.OnOverlapEnter
struct UMapActorDetectorComponent_OnOverlapEnter_Params
{
	class UPrimitiveComponent*                         HitComponent;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function DeadByDaylight.MaterialHelper.UpdateMaterials
struct UMaterialHelper_UpdateMaterials_Params
{
};

// Function DeadByDaylight.MaterialHelper.SetVectorParameter
struct UMaterialHelper_SetVectorParameter_Params
{
	struct FName                                       ParameterName;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NewValue;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function DeadByDaylight.MaterialHelper.SetTextureParameter
struct UMaterialHelper_SetTextureParameter_Params
{
	struct FName                                       ParameterName;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture*                                    NewTexture;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.MaterialHelper.SetScalarParameter
struct UMaterialHelper_SetScalarParameter_Params
{
	struct FName                                       ParameterName;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              NewValue;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.MaterialHelper.SetRenderInCustomDepth
struct UMaterialHelper_SetRenderInCustomDepth_Params
{
	bool                                               RenderInCustomDepth;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.MaterialHelper.SetRenderInCustomColourNoDepth
struct UMaterialHelper_SetRenderInCustomColourNoDepth_Params
{
	bool                                               RenderInCustomColour;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.MaterialHelper.SetReceivesDecals
struct UMaterialHelper_SetReceivesDecals_Params
{
	bool                                               ReceivesDecals;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.MaterialHelper.SetMaterial
struct UMaterialHelper_SetMaterial_Params
{
	class FString                                      GroupName;                                                // (Parm, ZeroConstructor)
};

// Function DeadByDaylight.MaterialHelper.SetColourParameter
struct UMaterialHelper_SetColourParameter_Params
{
	struct FName                                       ParameterName;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                NewValue;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.MaterialHelper.SetCastCinematicShadows
struct UMaterialHelper_SetCastCinematicShadows_Params
{
	bool                                               CastCinematicShadows;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.MaterialHelper.ResetMaterials
struct UMaterialHelper_ResetMaterials_Params
{
};

// Function DeadByDaylight.MaterialHelper.RefreshMeshes
struct UMaterialHelper_RefreshMeshes_Params
{
};

// Function DeadByDaylight.MaterialHelper.RefreshMesh
struct UMaterialHelper_RefreshMesh_Params
{
	class UMeshComponent*                              mc;                                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DeadByDaylight.OfferingCard.PlayAnim
struct AOfferingCard_PlayAnim_Params
{
	TEnumAsByte<EOfferingAnimState>                    State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.OfferingSequenceManager.FadeInScreen
struct AOfferingSequenceManager_FadeInScreen_Params
{
};

// Function DeadByDaylight.OfferingSequenceAssets.PlaySmoke
struct AOfferingSequenceAssets_PlaySmoke_Params
{
};

// Function DeadByDaylight.OfferingSequenceAssets.PlayFadeOut
struct AOfferingSequenceAssets_PlayFadeOut_Params
{
};

// Function DeadByDaylight.OfferingSequenceAssets.PlayFadeIn
struct AOfferingSequenceAssets_PlayFadeIn_Params
{
};

// Function DeadByDaylight.BearTrapOutlineUpdateStrategy.SetOwningBearTrapMapActorComponent
struct UBearTrapOutlineUpdateStrategy_SetOwningBearTrapMapActorComponent_Params
{
	class UMapActorComponent*                          MapActorComponent;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DeadByDaylight.BearTrapOutlineUpdateStrategy.SetOwningBearTrapIsBroken
struct UBearTrapOutlineUpdateStrategy_SetOwningBearTrapIsBroken_Params
{
	bool                                               isBroken;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.RBTOutlineUpdateStrategy.IsRevealedToLocalPlayer_BP
struct URBTOutlineUpdateStrategy_IsRevealedToLocalPlayer_BP_Params
{
	class ADBDPlayer*                                  Player;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.VaultableOutlineUpdateStrategy.SetCanBeRevealedToLocalPlayer
struct UVaultableOutlineUpdateStrategy_SetCanBeRevealedToLocalPlayer_Params
{
	bool                                               canBeRevealedToLocalPlayer;                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.GeneratorOutlineUpdateStrategy.SetRevealedColorToSurvivor
struct UGeneratorOutlineUpdateStrategy_SetRevealedColorToSurvivor_Params
{
	struct FLinearColor                                newColor;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function DeadByDaylight.GeneratorOutlineUpdateStrategy.SetRevealedColorToSlasher
struct UGeneratorOutlineUpdateStrategy_SetRevealedColorToSlasher_Params
{
	struct FLinearColor                                newColor;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function DeadByDaylight.GeneratorOutlineUpdateStrategy.ResetRevealedColorToSlasher
struct UGeneratorOutlineUpdateStrategy_ResetRevealedColorToSlasher_Params
{
};

// Function DeadByDaylight.SurvivorOutlineUpdateStrategy.SetTrappedIconActive
struct USurvivorOutlineUpdateStrategy_SetTrappedIconActive_Params
{
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.SurvivorOutlineUpdateStrategy.IsActivelyHidingAuraFromKiller
struct USurvivorOutlineUpdateStrategy_IsActivelyHidingAuraFromKiller_Params
{
	class ACamperPlayer*                               subject;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class ASlasherPlayer*                              witness;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.PerkManager.HasPerkModifierOfType
struct UPerkManager_HasPerkModifierOfType_Params
{
	struct FGameplayTag                                Type;                                                     // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.PerkManager.HasPerkFlag
struct UPerkManager_HasPerkFlag_Params
{
	struct FGameplayTag                                flag;                                                     // (Parm)
	TEnumAsByte<EGameplayModifierSource>               Filter;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.PerkManager.HasAnyEffectWithID
struct UPerkManager_HasAnyEffectWithID_Params
{
	struct FName                                       ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.PerkManager.HasAnyAddonWithTag
struct UPerkManager_HasAnyAddonWithTag_Params
{
	struct FName                                       Tag;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.PerkManager.HasAllCharacterPerksEquipped
struct UPerkManager_HasAllCharacterPerksEquipped_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.PerkManager.GetStatusEffect
struct UPerkManager_GetStatusEffect_Params
{
	struct FName                                       ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UStatusEffect*                               ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function DeadByDaylight.PerkManager.GetSourceWithModifier
struct UPerkManager_GetSourceWithModifier_Params
{
	struct FGameplayTag                                Type;                                                     // (Parm)
	TEnumAsByte<EGameplayModifierSource>               Filter;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UGameplayModifierContainer*                  ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function DeadByDaylight.PerkManager.GetSourceWithFlag
struct UPerkManager_GetSourceWithFlag_Params
{
	struct FGameplayTag                                flag;                                                     // (Parm)
	TEnumAsByte<EGameplayModifierSource>               Filter;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UGameplayModifierContainer*                  ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function DeadByDaylight.PerkManager.GetPerkModifierMinValue
struct UPerkManager_GetPerkModifierMinValue_Params
{
	struct FGameplayTag                                Type;                                                     // (Parm)
	float                                              startValue;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.PerkManager.GetPerkModifierMaxValue
struct UPerkManager_GetPerkModifierMaxValue_Params
{
	struct FGameplayTag                                Type;                                                     // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.PerkManager.GetPerkModifier
struct UPerkManager_GetPerkModifier_Params
{
	struct FGameplayTag                                Type;                                                     // (Parm)
	TEnumAsByte<EGameplayModifierSource>               Filter;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.PerkManager.GetPerk
struct UPerkManager_GetPerk_Params
{
	struct FName                                       ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UPerk*                                       ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function DeadByDaylight.PerkManager.GetMultiplicativeModifierValueWithCompoundNegative
struct UPerkManager_GetMultiplicativeModifierValueWithCompoundNegative_Params
{
	struct FGameplayTag                                Type;                                                     // (Parm)
	TEnumAsByte<EGameplayModifierSource>               Filter;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.PerkManager.GetMultiplicativeModifierValue
struct UPerkManager_GetMultiplicativeModifierValue_Params
{
	struct FGameplayTag                                Type;                                                     // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.PigAnalytics.RecordRBTSearch
struct UPigAnalytics_RecordRBTSearch_Params
{
	class ACamperPlayer*                               searchingPlayer;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               success;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.PigAnalytics.OnRBTAttached_Analytics
struct UPigAnalytics_OnRBTAttached_Analytics_Params
{
	class ASlasherPlayer*                              attacher;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class ACamperPlayer*                               attachee;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.PigAnalytics.IncrementRBTTimerActived
struct UPigAnalytics_IncrementRBTTimerActived_Params
{
	class ACamperPlayer*                               attachedPlayer;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.PigAnalytics.IncrementRBTKilledCount
struct UPigAnalytics_IncrementRBTKilledCount_Params
{
	class ACamperPlayer*                               playerKilled;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               killedByExecutionZone;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.SkillCheck.ShouldDeactivateSkillCheckOnInteractionEnd
struct USkillCheck_ShouldDeactivateSkillCheckOnInteractionEnd_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.SkillCheck.Server_SetInteraction
struct USkillCheck_Server_SetInteraction_Params
{
	class UChargeableInteractionDefinition*            Interaction;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DeadByDaylight.SkillCheck.Server_OnSkillCheckSuccess
struct USkillCheck_Server_OnSkillCheckSuccess_Params
{
	bool                                               Bonus;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESkillCheckCustomType>                 Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.SkillCheck.Server_OnSkillCheckFailure
struct USkillCheck_Server_OnSkillCheckFailure_Params
{
	bool                                               hadInput;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESkillCheckCustomType>                 Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.SkillCheck.Multicast_SkillCheckResponse
struct USkillCheck_Multicast_SkillCheckResponse_Params
{
	bool                                               hadInput;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               success;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Bonus;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESkillCheckCustomType>                 Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               TriggerLoudNoise;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class UChargeableInteractionDefinition*            Interaction;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DeadByDaylight.SkillCheck.ActivateSkillCheck
struct USkillCheck_ActivateSkillCheck_Params
{
	class UInteractionDefinition*                      Interaction;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.SkillCheck.ActivateCustomSkillCheck
struct USkillCheck_ActivateCustomSkillCheck_Params
{
	TEnumAsByte<ESkillCheckCustomType>                 Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.PlayerInteractionHandler.UnPauseSkillCheckTimer
struct UPlayerInteractionHandler_UnPauseSkillCheckTimer_Params
{
};

// Function DeadByDaylight.PlayerInteractionHandler.TriggerSkillCheck
struct UPlayerInteractionHandler_TriggerSkillCheck_Params
{
};

// Function DeadByDaylight.PlayerInteractionHandler.StartCustomSkillCheck
struct UPlayerInteractionHandler_StartCustomSkillCheck_Params
{
	TEnumAsByte<ESkillCheckCustomType>                 Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.PlayerInteractionHandler.SetSkillCheckTimer
struct UPlayerInteractionHandler_SetSkillCheckTimer_Params
{
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.PlayerInteractionHandler.SetScanForInteractionsEnabled
struct UPlayerInteractionHandler_SetScanForInteractionsEnabled_Params
{
	bool                                               Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.PlayerInteractionHandler.Server_StoreInterruption_Interruptor
struct UPlayerInteractionHandler_Server_StoreInterruption_Interruptor_Params
{
	class ADBDPlayer*                                  interruptionOtherParty;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UInterruptionDefinition*                     InterruptionDefinition;                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DeadByDaylight.PlayerInteractionHandler.Server_StoreInteraction
struct UPlayerInteractionHandler_Server_StoreInteraction_Params
{
	TEnumAsByte<EInputInteractionType>                 InteractionType;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class UInteractionDefinition*                      Interaction;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DeadByDaylight.PlayerInteractionHandler.Server_RequestInterruption_Interruptor
struct UPlayerInteractionHandler_Server_RequestInterruption_Interruptor_Params
{
};

// Function DeadByDaylight.PlayerInteractionHandler.Server_RequestInteraction
struct UPlayerInteractionHandler_Server_RequestInteraction_Params
{
};

// Function DeadByDaylight.PlayerInteractionHandler.Server_EndInteraction
struct UPlayerInteractionHandler_Server_EndInteraction_Params
{
	class UInteractionDefinition*                      Interaction;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DeadByDaylight.PlayerInteractionHandler.Server_DebugRequestInteraction
struct UPlayerInteractionHandler_Server_DebugRequestInteraction_Params
{
	class FString                                      interactionName;                                          // (Parm, ZeroConstructor)
	class FString                                      InteractorName;                                           // (Parm, ZeroConstructor)
	class FString                                      interactableName;                                         // (Parm, ZeroConstructor)
};

// Function DeadByDaylight.PlayerInteractionHandler.Server_AnswerInterruption_Interruptee
struct UPlayerInteractionHandler_Server_AnswerInterruption_Interruptee_Params
{
	bool                                               success;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.PlayerInteractionHandler.ResetSuccessiveSkillCheckCount
struct UPlayerInteractionHandler_ResetSuccessiveSkillCheckCount_Params
{
};

// Function DeadByDaylight.PlayerInteractionHandler.RemoveInteraction
struct UPlayerInteractionHandler_RemoveInteraction_Params
{
	class UInteractionDefinition*                      Interaction;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DeadByDaylight.PlayerInteractionHandler.PauseSkillCheckTimer
struct UPlayerInteractionHandler_PauseSkillCheckTimer_Params
{
};

// Function DeadByDaylight.PlayerInteractionHandler.NumInteractionsInZone
struct UPlayerInteractionHandler_NumInteractionsInZone_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.PlayerInteractionHandler.Multicast_StoreInterruption_Interruptor
struct UPlayerInteractionHandler_Multicast_StoreInterruption_Interruptor_Params
{
	class ADBDPlayer*                                  interruptionOtherParty;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UInterruptionDefinition*                     InterruptionDefinition;                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DeadByDaylight.PlayerInteractionHandler.Multicast_StoreInteraction
struct UPlayerInteractionHandler_Multicast_StoreInteraction_Params
{
	TEnumAsByte<EInputInteractionType>                 InteractionType;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class UInteractionDefinition*                      Interaction;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DeadByDaylight.PlayerInteractionHandler.Multicast_RequestInterruption_Interruptee
struct UPlayerInteractionHandler_Multicast_RequestInterruption_Interruptee_Params
{
	class ADBDPlayer*                                  interruptionOtherParty;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UInterruptionDefinition*                     InterruptionDefinition;                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DeadByDaylight.PlayerInteractionHandler.Multicast_InterruptionRequestResult_Interruptor
struct UPlayerInteractionHandler_Multicast_InterruptionRequestResult_Interruptor_Params
{
	bool                                               success;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.PlayerInteractionHandler.Multicast_InteractionRequestResult
struct UPlayerInteractionHandler_Multicast_InteractionRequestResult_Params
{
	bool                                               success;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.PlayerInteractionHandler.IncrementSuccessiveSkillCheckCount
struct UPlayerInteractionHandler_IncrementSuccessiveSkillCheckCount_Params
{
};

// Function DeadByDaylight.PlayerInteractionHandler.HasAvailableInteraction
struct UPlayerInteractionHandler_HasAvailableInteraction_Params
{
	TEnumAsByte<EInputInteractionType>                 InteractionType;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.PlayerInteractionHandler.HasActiveSkillCheck
struct UPlayerInteractionHandler_HasActiveSkillCheck_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.PlayerInteractionHandler.GetMultiplicativeSkillCheckProbabilityModifier
struct UPlayerInteractionHandler_GetMultiplicativeSkillCheckProbabilityModifier_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.PlayerInteractionHandler.GetCurrentInteraction
struct UPlayerInteractionHandler_GetCurrentInteraction_Params
{
	class UInteractionDefinition*                      ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function DeadByDaylight.PlayerInteractionHandler.GetAvailableInteraction
struct UPlayerInteractionHandler_GetAvailableInteraction_Params
{
	TEnumAsByte<EInputInteractionType>                 InteractionType;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class UInteractionDefinition*                      ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function DeadByDaylight.PlayerInteractionHandler.GetAdditiveSkillCheckProbabilityModifier
struct UPlayerInteractionHandler_GetAdditiveSkillCheckProbabilityModifier_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.PlayerInteractionHandler.ForceBeginSkillCheckProgress
struct UPlayerInteractionHandler_ForceBeginSkillCheckProgress_Params
{
};

// Function DeadByDaylight.PlayerInteractionHandler.Client_NotifyChargeCompleted
struct UPlayerInteractionHandler_Client_NotifyChargeCompleted_Params
{
	class UInteractionDefinition*                      Interaction;                                              // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DeadByDaylight.PlayerInteractionHandler.CleanInteractionArray
struct UPlayerInteractionHandler_CleanInteractionArray_Params
{
	class AActor*                                      DestroyedActor;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.PlayerInteractionHandler.CanPerformInteraction
struct UPlayerInteractionHandler_CanPerformInteraction_Params
{
	class FString                                      interactionName;                                          // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.PlayerInteractionHandler.Broadcast_Multicast_ConfirmChargedCompleted
struct UPlayerInteractionHandler_Broadcast_Multicast_ConfirmChargedCompleted_Params
{
	bool                                               chargeComplete;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.PlayerInteractionHandler.Broadcast_InteractionPlayerProperties_Multicast
struct UPlayerInteractionHandler_Broadcast_InteractionPlayerProperties_Multicast_Params
{
	struct FInteractionPlayerProperties                playerProperties;                                         // (Parm)
};

// Function DeadByDaylight.PlayerInteractionHandler.Broadcast_InteractionPlayerProperties
struct UPlayerInteractionHandler_Broadcast_InteractionPlayerProperties_Params
{
	struct FInteractionPlayerProperties                playerProperties;                                         // (Parm)
};

// Function DeadByDaylight.PlayerInteractionHandler.Broadcast_ConfirmChargedCompleted
struct UPlayerInteractionHandler_Broadcast_ConfirmChargedCompleted_Params
{
	bool                                               chargeComplete;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.PlayerInteractionHandler.Authority_ClearPlayerDependency
struct UPlayerInteractionHandler_Authority_ClearPlayerDependency_Params
{
	class ADBDPlayer*                                  playerDependency;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.PlayerInteractionHandler.Authority_ClearPlayerDependencies
struct UPlayerInteractionHandler_Authority_ClearPlayerDependencies_Params
{
};

// Function DeadByDaylight.PlayerInteractionHandler.AddInteraction
struct UPlayerInteractionHandler_AddInteraction_Params
{
	class UInteractionDefinition*                      Interaction;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DeadByDaylight.ProceduralLevelBuilder.SyncSeeds
struct AProceduralLevelBuilder_SyncSeeds_Params
{
};

// Function DeadByDaylight.ProceduralLevelBuilder.StartGenerationOnSyncerReady
struct AProceduralLevelBuilder_StartGenerationOnSyncerReady_Params
{
};

// Function DeadByDaylight.ProceduralLevelBuilder.SpawnActor
struct AProceduralLevelBuilder_SpawnActor_Params
{
	class UClass*                                      ActorClass;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETileSpawnPointType>                   spawnPointType;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.ProceduralLevelBuilder.OfferingAdjustFog
struct AProceduralLevelBuilder_OfferingAdjustFog_Params
{
	float                                              Modifier;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.ProceduralLevelBuilder.Multicast_DebugShareGenerationData
struct AProceduralLevelBuilder_Multicast_DebugShareGenerationData_Params
{
	struct FGenerationParams                           usedParams;                                               // (Parm)
};

// Function DeadByDaylight.ProceduralLevelBuilder.BuildFromSeed
struct AProceduralLevelBuilder_BuildFromSeed_Params
{
};

// Function DeadByDaylight.ProjectedUserInterface.UpdateMouseInput
struct AProjectedUserInterface_UpdateMouseInput_Params
{
};

// Function DeadByDaylight.ProjectedUserInterface.InitializeComponents
struct AProjectedUserInterface_InitializeComponents_Params
{
	class UStaticMeshComponent*                        projectionPanel;                                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DeadByDaylight.PulldownAnalytics.IncrementPalletStun
struct UPulldownAnalytics_IncrementPalletStun_Params
{
	class ACamperPlayer*                               survivor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.PulldownAnalytics.IncrementPalletSpawned
struct UPulldownAnalytics_IncrementPalletSpawned_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.PulldownAnalytics.IncrementPalletDrop
struct UPulldownAnalytics_IncrementPalletDrop_Params
{
	class ACamperPlayer*                               survivor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.PulldownAnalytics.IncrementPalletDestroy
struct UPulldownAnalytics_IncrementPalletDestroy_Params
{
	class ASlasherPlayer*                              killer;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.RitualHandlerComponent.ReceiveGameEvent
struct URitualHandlerComponent_ReceiveGameEvent_Params
{
	TEnumAsByte<EDBDScoreTypes>                        ScoreType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Instigator;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.GenericPopupScreen.OnChoiceSelected
struct UGenericPopupScreen_OnChoiceSelected_Params
{
	int                                                selectedButtonType;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.CharacterInfoScreen.OnBackButtonClick
struct UCharacterInfoScreen_OnBackButtonClick_Params
{
};

// Function DeadByDaylight.CreditsScreen.SetCreditsHtml
struct UCreditsScreen_SetCreditsHtml_Params
{
	class FString                                      CreditsHtml;                                              // (Parm, ZeroConstructor)
};

// Function DeadByDaylight.CreditsScreen.ScrollCreditsScreen
struct UCreditsScreen_ScrollCreditsScreen_Params
{
	float                                              scrollAmount;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.DailyRitualsScreen.OnRemoveRitual
struct UDailyRitualsScreen_OnRemoveRitual_Params
{
	class FString                                      ID;                                                       // (Parm, ZeroConstructor)
};

// Function DeadByDaylight.DailyRitualsScreen.OnClosed
struct UDailyRitualsScreen_OnClosed_Params
{
};

// Function DeadByDaylight.DailyRitualsScreen.OnClaimRitual
struct UDailyRitualsScreen_OnClaimRitual_Params
{
	class FString                                      ID;                                                       // (Parm, ZeroConstructor)
};

// Function DeadByDaylight.DailyRitualsScreen.OnClaimAllRituals
struct UDailyRitualsScreen_OnClaimAllRituals_Params
{
};

// Function DeadByDaylight.HudScreen.OnTutorialTallyNext
struct UHudScreen_OnTutorialTallyNext_Params
{
};

// Function DeadByDaylight.HudScreen.OnTutorialTallyLeave
struct UHudScreen_OnTutorialTallyLeave_Params
{
};

// Function DeadByDaylight.HudScreen.OnTutorialNotificationClosedByUserInput
struct UHudScreen_OnTutorialNotificationClosedByUserInput_Params
{
};

// Function DeadByDaylight.HudScreen.OnQuitGameButtonClick
struct UHudScreen_OnQuitGameButtonClick_Params
{
};

// Function DeadByDaylight.HudScreen.OnPreviousButtonClick
struct UHudScreen_OnPreviousButtonClick_Params
{
};

// Function DeadByDaylight.HudScreen.OnNextButtonClick
struct UHudScreen_OnNextButtonClick_Params
{
};

// Function DeadByDaylight.HudScreen.OnLeaveButtonClick
struct UHudScreen_OnLeaveButtonClick_Params
{
};

// Function DeadByDaylight.HudScreen.OnCancelQuitGameButtonClick
struct UHudScreen_OnCancelQuitGameButtonClick_Params
{
};

// Function DeadByDaylight.LegalMenuScreen.OnDeclineClick
struct ULegalMenuScreen_OnDeclineClick_Params
{
};

// Function DeadByDaylight.LegalMenuScreen.OnAcceptClick
struct ULegalMenuScreen_OnAcceptClick_Params
{
};

// Function DeadByDaylight.LoadingScreen.ShowLoadingTip
struct ULoadingScreen_ShowLoadingTip_Params
{
	struct FHintData                                   tipData;                                                  // (Parm)
};

// Function DeadByDaylight.LoadingScreen.ShowLoadingProgressBar
struct ULoadingScreen_ShowLoadingProgressBar_Params
{
	bool                                               show;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.LoadingScreen.ShowLoadingImageTips
struct ULoadingScreen_ShowLoadingImageTips_Params
{
	bool                                               IsKiller;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.LoadingScreen.SetLoadingProgressValue
struct ULoadingScreen_SetLoadingProgressValue_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.MatchManagementScreen.OnToggleMatchAccessibility
struct UMatchManagementScreen_OnToggleMatchAccessibility_Params
{
};

// Function DeadByDaylight.MatchManagementScreen.OnRemoveMap
struct UMatchManagementScreen_OnRemoveMap_Params
{
	class FString                                      MapId;                                                    // (Parm, ZeroConstructor)
};

// Function DeadByDaylight.MatchManagementScreen.OnPerksSettingsChange
struct UMatchManagementScreen_OnPerksSettingsChange_Params
{
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.MatchManagementScreen.OnOfferingsSettingsChange
struct UMatchManagementScreen_OnOfferingsSettingsChange_Params
{
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.MatchManagementScreen.OnItemsAndAddonsSettingsChange
struct UMatchManagementScreen_OnItemsAndAddonsSettingsChange_Params
{
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.MatchManagementScreen.OnChooseMapButtonClick
struct UMatchManagementScreen_OnChooseMapButtonClick_Params
{
};

// Function DeadByDaylight.MatchManagementScreen.OnBackToOverviewButtonClick
struct UMatchManagementScreen_OnBackToOverviewButtonClick_Params
{
};

// Function DeadByDaylight.MatchManagementScreen.OnBackButtonClick
struct UMatchManagementScreen_OnBackButtonClick_Params
{
};

// Function DeadByDaylight.MatchManagementScreen.OnApplyChangesClicked
struct UMatchManagementScreen_OnApplyChangesClicked_Params
{
};

// Function DeadByDaylight.MatchManagementScreen.OnAllowDlcSettingsClick
struct UMatchManagementScreen_OnAllowDlcSettingsClick_Params
{
};

// Function DeadByDaylight.MatchManagementScreen.OnAddMap
struct UMatchManagementScreen_OnAddMap_Params
{
	class FString                                      MapId;                                                    // (Parm, ZeroConstructor)
};

// Function DeadByDaylight.NavigationScreen.OnToggleChatVisibility
struct UNavigationScreen_OnToggleChatVisibility_Params
{
};

// Function DeadByDaylight.NavigationScreen.OnStartButtonClick
struct UNavigationScreen_OnStartButtonClick_Params
{
};

// Function DeadByDaylight.NavigationScreen.OnSettingsClick
struct UNavigationScreen_OnSettingsClick_Params
{
};

// Function DeadByDaylight.NavigationScreen.OnSendChatMsgButtonClick
struct UNavigationScreen_OnSendChatMsgButtonClick_Params
{
	class FString                                      Message;                                                  // (Parm, ZeroConstructor)
};

// Function DeadByDaylight.NavigationScreen.OnReadyButtonClick
struct UNavigationScreen_OnReadyButtonClick_Params
{
};

// Function DeadByDaylight.NavigationScreen.OnPlayerInfoClick
struct UNavigationScreen_OnPlayerInfoClick_Params
{
	int                                                PlayerId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.NavigationScreen.OnMatchManagementButtonClick
struct UNavigationScreen_OnMatchManagementButtonClick_Params
{
};

// Function DeadByDaylight.NavigationScreen.OnInviteFriendClick
struct UNavigationScreen_OnInviteFriendClick_Params
{
};

// Function DeadByDaylight.NavigationScreen.OnDailyRitualsClick
struct UNavigationScreen_OnDailyRitualsClick_Params
{
};

// Function DeadByDaylight.NavigationScreen.OnChatInputMouseOver
struct UNavigationScreen_OnChatInputMouseOver_Params
{
	int                                                isMouseOver;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.NavigationScreen.OnCharacterInfoClick
struct UNavigationScreen_OnCharacterInfoClick_Params
{
};

// Function DeadByDaylight.NavigationScreen.OnCancelButtonClick
struct UNavigationScreen_OnCancelButtonClick_Params
{
};

// Function DeadByDaylight.OverlayMenuScreen.OnTutorialLevelSelected
struct UOverlayMenuScreen_OnTutorialLevelSelected_Params
{
	class FString                                      tutorialLevelId;                                          // (Parm, ZeroConstructor)
};

// Function DeadByDaylight.OverlayMenuScreen.OnTopicVideoPositioned
struct UOverlayMenuScreen_OnTopicVideoPositioned_Params
{
	float                                              stageX;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              stageY;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              stageWidth;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              stageHeight;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.OverlayMenuScreen.OnTopicVideoChanged
struct UOverlayMenuScreen_OnTopicVideoChanged_Params
{
	class FString                                      VideoID;                                                  // (Parm, ZeroConstructor)
};

// Function DeadByDaylight.OverlayMenuScreen.OnSurvivorMouseSensitivityChanged
struct UOverlayMenuScreen_OnSurvivorMouseSensitivityChanged_Params
{
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.OverlayMenuScreen.OnSurvivorControllerSensitivityChanged
struct UOverlayMenuScreen_OnSurvivorControllerSensitivityChanged_Params
{
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.OverlayMenuScreen.OnSelectTab
struct UOverlayMenuScreen_OnSelectTab_Params
{
	int                                                tabIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.OverlayMenuScreen.OnResolutionClick
struct UOverlayMenuScreen_OnResolutionClick_Params
{
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.OverlayMenuScreen.OnResetDefaults
struct UOverlayMenuScreen_OnResetDefaults_Params
{
	class FString                                      keyBindingsData;                                          // (Parm, ZeroConstructor)
	int                                                mustBeGamepadKey;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.OverlayMenuScreen.OnRequestKeyInput
struct UOverlayMenuScreen_OnRequestKeyInput_Params
{
	class FString                                      Name;                                                     // (Parm, ZeroConstructor)
	bool                                               isAxis;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Scale;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      Key;                                                      // (Parm, ZeroConstructor)
};

// Function DeadByDaylight.OverlayMenuScreen.OnQuitGameButtonClick
struct UOverlayMenuScreen_OnQuitGameButtonClick_Params
{
};

// Function DeadByDaylight.OverlayMenuScreen.OnQuitButtonClick
struct UOverlayMenuScreen_OnQuitButtonClick_Params
{
};

// Function DeadByDaylight.OverlayMenuScreen.OnQualitySetIndex
struct UOverlayMenuScreen_OnQualitySetIndex_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.OverlayMenuScreen.OnPlayerInfoClick
struct UOverlayMenuScreen_OnPlayerInfoClick_Params
{
	class FString                                      PlayerId;                                                 // (Parm, ZeroConstructor)
};

// Function DeadByDaylight.OverlayMenuScreen.OnMuteOnFocusLostClick
struct UOverlayMenuScreen_OnMuteOnFocusLostClick_Params
{
};

// Function DeadByDaylight.OverlayMenuScreen.OnMenuMusicVolumeClick
struct UOverlayMenuScreen_OnMenuMusicVolumeClick_Params
{
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.OverlayMenuScreen.OnMainVolumeClick
struct UOverlayMenuScreen_OnMainVolumeClick_Params
{
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.OverlayMenuScreen.OnLanguageChange
struct UOverlayMenuScreen_OnLanguageChange_Params
{
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.OverlayMenuScreen.OnKillerMouseSensitivityChanged
struct UOverlayMenuScreen_OnKillerMouseSensitivityChanged_Params
{
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.OverlayMenuScreen.OnKillerControllerSensitivityChanged
struct UOverlayMenuScreen_OnKillerControllerSensitivityChanged_Params
{
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.OverlayMenuScreen.OnInvertYClick
struct UOverlayMenuScreen_OnInvertYClick_Params
{
};

// Function DeadByDaylight.OverlayMenuScreen.OnHideTutorialClick
struct UOverlayMenuScreen_OnHideTutorialClick_Params
{
};

// Function DeadByDaylight.OverlayMenuScreen.OnHeadphonesClick
struct UOverlayMenuScreen_OnHeadphonesClick_Params
{
};

// Function DeadByDaylight.OverlayMenuScreen.OnFullScreenClick
struct UOverlayMenuScreen_OnFullScreenClick_Params
{
};

// Function DeadByDaylight.OverlayMenuScreen.OnBackButtonClick
struct UOverlayMenuScreen_OnBackButtonClick_Params
{
};

// Function DeadByDaylight.OverlayMenuScreen.OnAutoAdjustClick
struct UOverlayMenuScreen_OnAutoAdjustClick_Params
{
};

// Function DeadByDaylight.PanelScreen.OnWebNodeSelected
struct UPanelScreen_OnWebNodeSelected_Params
{
	int                                                ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                nodeDepth;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.PanelScreen.OnWebBuilt
struct UPanelScreen_OnWebBuilt_Params
{
};

// Function DeadByDaylight.PanelScreen.OnStoreButtonClick
struct UPanelScreen_OnStoreButtonClick_Params
{
};

// Function DeadByDaylight.PanelScreen.OnSideTabButtonClick
struct UPanelScreen_OnSideTabButtonClick_Params
{
	int                                                tabIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.PanelScreen.OnRoleButtonClick
struct UPanelScreen_OnRoleButtonClick_Params
{
};

// Function DeadByDaylight.PanelScreen.OnReservedBloodPoints
struct UPanelScreen_OnReservedBloodPoints_Params
{
	int                                                BloodPoints;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               fullCost;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.PanelScreen.OnRegenerateButtonClick
struct UPanelScreen_OnRegenerateButtonClick_Params
{
	int                                                levelUp;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.PanelScreen.OnPrestigeUp
struct UPanelScreen_OnPrestigeUp_Params
{
};

// Function DeadByDaylight.PanelScreen.OnLoadoutSlotButtonClick
struct UPanelScreen_OnLoadoutSlotButtonClick_Params
{
	int                                                SlotIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.PanelScreen.OnItemUnselected
struct UPanelScreen_OnItemUnselected_Params
{
	int                                                ItemIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.PanelScreen.OnItemSelected
struct UPanelScreen_OnItemSelected_Params
{
	int                                                ItemIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.PanelScreen.OnConfirmCollectSelectedNode
struct UPanelScreen_OnConfirmCollectSelectedNode_Params
{
};

// Function DeadByDaylight.PanelScreen.OnCharInfoClick
struct UPanelScreen_OnCharInfoClick_Params
{
};

// Function DeadByDaylight.PanelScreen.OnCharacterSlotButtonClick
struct UPanelScreen_OnCharacterSlotButtonClick_Params
{
	int                                                CharacterIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.PanelScreen.OnCategoryIndexSelected
struct UPanelScreen_OnCategoryIndexSelected_Params
{
	int                                                categoryIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.PanelScreen.OnAvailableItemSelected
struct UPanelScreen_OnAvailableItemSelected_Params
{
	int                                                ItemIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.RoleSelectionScreen.OnChangeUserButtonClick
struct URoleSelectionScreen_OnChangeUserButtonClick_Params
{
};

// Function DeadByDaylight.RoleSelectionScreen.OnButtonSelected
struct URoleSelectionScreen_OnButtonSelected_Params
{
	int                                                buttonId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.SplashScreen.ShowSaveGamePopup
struct USplashScreen_ShowSaveGamePopup_Params
{
};

// Function DeadByDaylight.SplashScreen.ShowPressKeyState
struct USplashScreen_ShowPressKeyState_Params
{
};

// Function DeadByDaylight.SplashScreen.ShowLoadingState
struct USplashScreen_ShowLoadingState_Params
{
};

// Function DeadByDaylight.SplashScreen.SetVersionText
struct USplashScreen_SetVersionText_Params
{
	class FString                                      versionText;                                              // (Parm, ZeroConstructor)
};

// Function DeadByDaylight.SplashScreen.OnSaveGamePopupComplete
struct USplashScreen_OnSaveGamePopupComplete_Params
{
};

// Function DeadByDaylight.SplashScreen.OnKeyPressed
struct USplashScreen_OnKeyPressed_Params
{
};

// Function DeadByDaylight.SplashScreen.HidePressKeyState
struct USplashScreen_HidePressKeyState_Params
{
};

// Function DeadByDaylight.StoreScreen.OnUnlockWithCurrency
struct UStoreScreen_OnUnlockWithCurrency_Params
{
	int                                                currencyId;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      combinedItem;                                             // (Parm, ZeroConstructor)
};

// Function DeadByDaylight.StoreScreen.OnTabSelected
struct UStoreScreen_OnTabSelected_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.StoreScreen.OnStorySelected
struct UStoreScreen_OnStorySelected_Params
{
};

// Function DeadByDaylight.StoreScreen.OnStoreItemSelected
struct UStoreScreen_OnStoreItemSelected_Params
{
	class FString                                      combinedItemId;                                           // (Parm, ZeroConstructor)
};

// Function DeadByDaylight.StoreScreen.OnStoreItemLinkSelected
struct UStoreScreen_OnStoreItemLinkSelected_Params
{
	class FString                                      combinedItemId;                                           // (Parm, ZeroConstructor)
};

// Function DeadByDaylight.StoreScreen.OnStoreCharacterSelected
struct UStoreScreen_OnStoreCharacterSelected_Params
{
	int                                                CharacterIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.StoreScreen.OnStoreCatalogCategorySelected
struct UStoreScreen_OnStoreCatalogCategorySelected_Params
{
	TEnumAsByte<ECustomizationCategory>                Category;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.StoreScreen.OnSearchInputChanged
struct UStoreScreen_OnSearchInputChanged_Params
{
	class FString                                      searchInput;                                              // (Parm, ZeroConstructor)
};

// Function DeadByDaylight.StoreScreen.OnRotateCharacter
struct UStoreScreen_OnRotateCharacter_Params
{
	float                                              mouseDistanceChange;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.StoreScreen.OnNotEnoughTokens
struct UStoreScreen_OnNotEnoughTokens_Params
{
};

// Function DeadByDaylight.StoreScreen.OnMarketSlotButtonClick
struct UStoreScreen_OnMarketSlotButtonClick_Params
{
	int                                                SlotIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.StoreScreen.OnFiltersUpdated
struct UStoreScreen_OnFiltersUpdated_Params
{
	bool                                               All;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               rarityCommon;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               rarityUncommon;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               rarityRare;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               rarityVeryRare;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               rarityUltraRare;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               includeAllOwnedItems;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.StoreScreen.OnFeaturedButtonSelected
struct UStoreScreen_OnFeaturedButtonSelected_Params
{
	int                                                linkIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.StoreScreen.OnEquipItem
struct UStoreScreen_OnEquipItem_Params
{
	class FString                                      combinedItemId;                                           // (Parm, ZeroConstructor)
};

// Function DeadByDaylight.StoreScreen.OnCatalogSelected
struct UStoreScreen_OnCatalogSelected_Params
{
};

// Function DeadByDaylight.StoreScreen.OnBuyCurrencyBundle
struct UStoreScreen_OnBuyCurrencyBundle_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.SystemPromptsScreen.OnTextInputMouseOver
struct USystemPromptsScreen_OnTextInputMouseOver_Params
{
	int                                                isMouseOver;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.SystemPromptsScreen.OnSystemPromptsEnd
struct USystemPromptsScreen_OnSystemPromptsEnd_Params
{
};

// Function DeadByDaylight.SystemPromptsScreen.OnReplyLegalTerms
struct USystemPromptsScreen_OnReplyLegalTerms_Params
{
	int                                                accepted;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.SystemPromptsScreen.OnConfirmReportPlayer
struct USystemPromptsScreen_OnConfirmReportPlayer_Params
{
	class FString                                      Category;                                                 // (Parm, ZeroConstructor)
	class FString                                      Comment;                                                  // (Parm, ZeroConstructor)
};

// Function DeadByDaylight.SystemPromptsScreen.OnConfirmBuyMarketItem
struct USystemPromptsScreen_OnConfirmBuyMarketItem_Params
{
};

// Function DeadByDaylight.TallyScreen.OnSpectateButtonClick
struct UTallyScreen_OnSpectateButtonClick_Params
{
};

// Function DeadByDaylight.TallyScreen.OnShowSlasherInfos
struct UTallyScreen_OnShowSlasherInfos_Params
{
};

// Function DeadByDaylight.TallyScreen.OnReportPlayerButtonClick
struct UTallyScreen_OnReportPlayerButtonClick_Params
{
	class FString                                      plateformAccountId;                                       // (Parm, ZeroConstructor)
	class FString                                      MirrorsId;                                                // (Parm, ZeroConstructor)
	class FString                                      PlayerName;                                               // (Parm, ZeroConstructor)
	int                                                IsKiller;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.TallyScreen.OnRateMatch
struct UTallyScreen_OnRateMatch_Params
{
	int                                                rateValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.TallyScreen.OnPlayerInfoClick
struct UTallyScreen_OnPlayerInfoClick_Params
{
	class FString                                      PlayerId;                                                 // (Parm, ZeroConstructor)
};

// Function DeadByDaylight.TallyScreen.OnLevelingSequenceComplete
struct UTallyScreen_OnLevelingSequenceComplete_Params
{
};

// Function DeadByDaylight.TallyScreen.OnLeaveButtonClick
struct UTallyScreen_OnLeaveButtonClick_Params
{
};

// Function DeadByDaylight.TallyScreen.OnBloodwebButtonClick
struct UTallyScreen_OnBloodwebButtonClick_Params
{
};

// Function DeadByDaylight.ScreenSpaceLocationComponent.HasValidPosition
struct UScreenSpaceLocationComponent_HasValidPosition_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.ScreenSpaceLocationComponent.GetCurrentResolution
struct UScreenSpaceLocationComponent_GetCurrentResolution_Params
{
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.SeasonManager.GetOldSlasherPips
struct ASeasonManager_GetOldSlasherPips_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.SeasonManager.GetOldCamperPips
struct ASeasonManager_GetOldCamperPips_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.SelectiveVisibilityComponent.Local_SetVisibility
struct USelectiveVisibilityComponent_Local_SetVisibility_Params
{
	bool                                               bNewVisibility;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bPropagateToChildren;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.Sequencer.Unregister
struct USequencer_Unregister_Params
{
	class AActor*                                      Step;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.Sequencer.Register
struct USequencer_Register_Params
{
	class AActor*                                      Step;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.Sequencer.CleanSequence
struct USequencer_CleanSequence_Params
{
	class AActor*                                      DestroyedActor;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.SlaveAnimInstance.SetMasterMesh
struct USlaveAnimInstance_SetMasterMesh_Params
{
	class USkeletalMeshComponent*                      masterMesh;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DeadByDaylight.SlaveAnimInstance.GetMasterMesh
struct USlaveAnimInstance_GetMasterMesh_Params
{
	class USkeletalMeshComponent*                      ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function DeadByDaylight.StalkedComponent.SetChargeableComponent
struct UStalkedComponent_SetChargeableComponent_Params
{
	class UChargeableComponent*                        ChargeableComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DeadByDaylight.StalkedComponent.OnPlayerDisconnect
struct UStalkedComponent_OnPlayerDisconnect_Params
{
	class ADBDPlayer*                                  Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.StalkedComponent.IsStalkHighlightVisible
struct UStalkedComponent_IsStalkHighlightVisible_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.StalkedComponent.IsOutlineVisible
struct UStalkedComponent_IsOutlineVisible_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.StalkedComponent.IsBeingStalked
struct UStalkedComponent_IsBeingStalked_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.StalkedComponent.GetStalkPoints
struct UStalkedComponent_GetStalkPoints_Params
{
	class ADBDPlayer*                                  caller;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.StalkedComponent.GetPercentStalkPoints
struct UStalkedComponent_GetPercentStalkPoints_Params
{
	class ADBDPlayer*                                  caller;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.StalkedComponent.GetOutlineVisibleRange
struct UStalkedComponent_GetOutlineVisibleRange_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.StalkedComponent.GetMaxStalkPoints
struct UStalkedComponent_GetMaxStalkPoints_Params
{
	class ADBDPlayer*                                  caller;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.StalkedComponent.GetChargeableComponent
struct UStalkedComponent_GetChargeableComponent_Params
{
	class UChargeableComponent*                        ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function DeadByDaylight.StalkedComponent.CanBeStandingKilled
struct UStalkedComponent_CanBeStandingKilled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.StalkerComponent.Update
struct UStalkerComponent_Update_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class ADBDPlayer*                                  Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EDetectionZone>                        stalkerDetectionZone;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.StalkerComponent.OnPlayerDisconnect
struct UStalkerComponent_OnPlayerDisconnect_Params
{
	class ADBDPlayer*                                  Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.StalkerComponent.NotifyKill
struct UStalkerComponent_NotifyKill_Params
{
	class ADBDPlayer*                                  killedPlayer;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.StalkerComponent.IsStalkingSomeone
struct UStalkerComponent_IsStalkingSomeone_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.StalkerComponent.IsAtLastStalkTier
struct UStalkerComponent_IsAtLastStalkTier_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.StalkerComponent.HasMaxStalkPoints
struct UStalkerComponent_HasMaxStalkPoints_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.StalkerComponent.GetTotalStalkingPoints
struct UStalkerComponent_GetTotalStalkingPoints_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.StalkerComponent.GetRequirementForTier
struct UStalkerComponent_GetRequirementForTier_Params
{
	int                                                tier;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.StalkerComponent.GetPercentStalkingPointsInCurrentTier
struct UStalkerComponent_GetPercentStalkingPointsInCurrentTier_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.StalkerComponent.GetPercentStalkingPoints
struct UStalkerComponent_GetPercentStalkingPoints_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.StalkerComponent.GetMaxStalkTier
struct UStalkerComponent_GetMaxStalkTier_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.StalkerComponent.GetMaxStalkingPoints
struct UStalkerComponent_GetMaxStalkingPoints_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.StalkerComponent.GetEvilWithinScoreMultiplier
struct UStalkerComponent_GetEvilWithinScoreMultiplier_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.StalkerComponent.GetCurrentTier
struct UStalkerComponent_GetCurrentTier_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.StalkerComponent.CanStandKill
struct UStalkerComponent_CanStandKill_Params
{
	class ADBDPlayer*                                  Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.StalkerComponent.CanStalk
struct UStalkerComponent_CanStalk_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.StalkerComponent.Broadcast_Tier
struct UStalkerComponent_Broadcast_Tier_Params
{
	int                                                previousTier;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                currentTier;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsFirstTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.StalkerComponent.Broadcast_SetStalkPoints
struct UStalkerComponent_Broadcast_SetStalkPoints_Params
{
	float                                              stalkPoints;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.StalkerComponent.Broadcast_Multicast_Tier
struct UStalkerComponent_Broadcast_Multicast_Tier_Params
{
	int                                                previousTier;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                currentTier;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsFirstTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.StalkerComponent.Broadcast_Multicast_SetStalkPoints
struct UStalkerComponent_Broadcast_Multicast_SetStalkPoints_Params
{
	float                                              stalkPoints;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.StalkerComponent.Broadcast_BeingStalked_Server
struct UStalkerComponent_Broadcast_BeingStalked_Server_Params
{
	class ADBDPlayer*                                  Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               beingStalked;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.StalkerComponent.Broadcast_BeingStalked_Multicast
struct UStalkerComponent_Broadcast_BeingStalked_Multicast_Params
{
	class ADBDPlayer*                                  Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               beingStalked;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.StalkerComponent.Broadcast_AddStalkPointsToPlayer_Server
struct UStalkerComponent_Broadcast_AddStalkPointsToPlayer_Server_Params
{
	class ADBDPlayer*                                  Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              stalkPoints;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.StalkerComponent.Broadcast_AddStalkPointsToPlayer_Multicast
struct UStalkerComponent_Broadcast_AddStalkPointsToPlayer_Multicast_Params
{
	class ADBDPlayer*                                  Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              stalkPoints;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.StartScreenBase.TravelToMenu
struct AStartScreenBase_TravelToMenu_Params
{
};

// Function DeadByDaylight.StartScreenBase.BeginDestroyTravelSequence
struct AStartScreenBase_BeginDestroyTravelSequence_Params
{
};

// Function DeadByDaylight.StateMachine.Server_SetStateStack
struct UStateMachine_Server_SetStateStack_Params
{
	TArray<uint16_t>                                   netStateIDStack;                                          // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function DeadByDaylight.StateMachine.NetIDStackChanged
struct UStateMachine_NetIDStackChanged_Params
{
};

// Function DeadByDaylight.StateMachine.Multicast_SetStateStack
struct UStateMachine_Multicast_SetStateStack_Params
{
	TArray<uint16_t>                                   netStateIDStack;                                          // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function DeadByDaylight.StillnessTrackerComponent.StartTracking
struct UStillnessTrackerComponent_StartTracking_Params
{
};

// Function DeadByDaylight.CamperStillnessTrackerComponent.OnOverlapExit
struct UCamperStillnessTrackerComponent_OnOverlapExit_Params
{
	class UPrimitiveComponent*                         HitComponent;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.CamperStillnessTrackerComponent.OnOverlapEnter
struct UCamperStillnessTrackerComponent_OnOverlapEnter_Params
{
	class UPrimitiveComponent*                         HitComponent;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function DeadByDaylight.CamperStillnessTrackerComponent.OnLevelReadyToPlay
struct UCamperStillnessTrackerComponent_OnLevelReadyToPlay_Params
{
};

// Function DeadByDaylight.CamperStillnessTrackerComponent.ExitInteriorZone
struct UCamperStillnessTrackerComponent_ExitInteriorZone_Params
{
	class UExposerInteriorZoneComponent*               zone;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DeadByDaylight.CamperStillnessTrackerComponent.EnterInteriorZone
struct UCamperStillnessTrackerComponent_EnterInteriorZone_Params
{
	class UExposerInteriorZoneComponent*               zone;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DeadByDaylight.SurvivorInteractionAnalytics.RecordHealSuccess
struct USurvivorInteractionAnalytics_RecordHealSuccess_Params
{
	class ACamperPlayer*                               survivor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.SurvivorInteractionAnalytics.RecordHatchEscape
struct USurvivorInteractionAnalytics_RecordHatchEscape_Params
{
	class ACamperPlayer*                               survivor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.SurvivorInteractionAnalytics.IncrementUnhookCount
struct USurvivorInteractionAnalytics_IncrementUnhookCount_Params
{
	class ACamperPlayer*                               survivor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.SurvivorInteractionAnalytics.IncrementHealCount
struct USurvivorInteractionAnalytics_IncrementHealCount_Params
{
	class ACamperPlayer*                               survivor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.Tile.OnSetSpawnObject
struct ATile_OnSetSpawnObject_Params
{
	class UTileSpawnPoint*                             TileSpawnPoint;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      spawnedObject;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.Tile.OnRep_Initialized
struct ATile_OnRep_Initialized_Params
{
	bool                                               OldValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.Tile.InitOnSpawned
struct ATile_InitOnSpawned_Params
{
};

// Function DeadByDaylight.TimerGateDecrease.Update
struct ATimerGateDecrease_Update_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.TrapPlacerComponent.IsPlacementValid
struct UTrapPlacerComponent_IsPlacementValid_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.TriggerableWorldObjectComponent.SetGuaranteedTriggerVolume
struct UTriggerableWorldObjectComponent_SetGuaranteedTriggerVolume_Params
{
	class UPrimitiveComponent*                         Volume;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DeadByDaylight.TriggerableWorldObjectComponent.SetConditionalTriggerVolume
struct UTriggerableWorldObjectComponent_SetConditionalTriggerVolume_Params
{
	class UPrimitiveComponent*                         Volume;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DeadByDaylight.TriggerableWorldObjectComponent.Multicast_OnTriggerReset
struct UTriggerableWorldObjectComponent_Multicast_OnTriggerReset_Params
{
};

// Function DeadByDaylight.TriggerableWorldObjectComponent.Multicast_OnTriggered
struct UTriggerableWorldObjectComponent_Multicast_OnTriggered_Params
{
	class AActor*                                      Instigator;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     triggerLocation;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.TriggerableWorldObjectComponent.GetConditionalModifiers
struct UTriggerableWorldObjectComponent_GetConditionalModifiers_Params
{
	class ADBDPlayer*                                  Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              outAdditive;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              outMultiplicative;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.TriggerableWorldObjectComponent.CanPlayerTriggerGuaranteed
struct UTriggerableWorldObjectComponent_CanPlayerTriggerGuaranteed_Params
{
	class ADBDPlayer*                                  Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.TriggerableWorldObjectComponent.CanPlayerTriggerConditional
struct UTriggerableWorldObjectComponent_CanPlayerTriggerConditional_Params
{
	class ADBDPlayer*                                  Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.TriggerableWorldObjectComponent.Authority_Trigger
struct UTriggerableWorldObjectComponent_Authority_Trigger_Params
{
	class AActor*                                      Instigator;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     triggerLocation;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.TriggerableWorldObjectComponent.Authority_ResetTrigger
struct UTriggerableWorldObjectComponent_Authority_ResetTrigger_Params
{
};

// Function DeadByDaylight.TriggerableWorldObjectComponent.Authority_GuaranteedVolumeOverlap
struct UTriggerableWorldObjectComponent_Authority_GuaranteedVolumeOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      Other;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  HitResult;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function DeadByDaylight.TriplanarDecalComponent.UpdateTriplanarDecal
struct UTriplanarDecalComponent_UpdateTriplanarDecal_Params
{
};

// Function DeadByDaylight.TutorialFunctionLibrary.IsInTutorial
struct UTutorialFunctionLibrary_IsInTutorial_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.TutorialFunctionLibrary.GetTutorialGameState
struct UTutorialFunctionLibrary_GetTutorialGameState_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class ATutorialGameState*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.TutorialFunctionLibrary.GetTutorialGameMode
struct UTutorialFunctionLibrary_GetTutorialGameMode_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class ATutorialGameMode*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.VaultableComponent.SignalVault
struct UVaultableComponent_SignalVault_Params
{
	class ADBDPlayer*                                  survivor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.VaultableComponent.OnChaseEnded
struct UVaultableComponent_OnChaseEnded_Params
{
	class ACamperPlayer*                               survivor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.WorldRunawayMeshComponent.SetShouldRunAwayWithRandomDelay
struct UWorldRunawayMeshComponent_SetShouldRunAwayWithRandomDelay_Params
{
	bool                                               should;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              delayRange;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.WorldRunawayMeshComponent.SetShouldRunAwayWithDelay
struct UWorldRunawayMeshComponent_SetShouldRunAwayWithDelay_Params
{
	bool                                               should;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.WorldRunawayMeshComponent.SetShouldRunAway
struct UWorldRunawayMeshComponent_SetShouldRunAway_Params
{
	bool                                               should;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.WorldRunawayMeshComponent.GetShouldRunAway
struct UWorldRunawayMeshComponent_GetShouldRunAway_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.WorldRunawayMeshComponent.GetRunawayMustTickDuration
struct UWorldRunawayMeshComponent_GetRunawayMustTickDuration_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.WorldRunawayMeshComponent.GetReturnMustTickDuration
struct UWorldRunawayMeshComponent_GetReturnMustTickDuration_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.LevelCrowWRMeshComponent.SetVisibilityHeight
struct ULevelCrowWRMeshComponent_SetVisibilityHeight_Params
{
	float                                              InVisibilityHeight;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.ZoneDetectorComponent.OnOverlapExit
struct UZoneDetectorComponent_OnOverlapExit_Params
{
	class UPrimitiveComponent*                         HitComponent;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadByDaylight.ZoneDetectorComponent.OnOverlapEnter
struct UZoneDetectorComponent_OnOverlapEnter_Params
{
	class UPrimitiveComponent*                         HitComponent;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
