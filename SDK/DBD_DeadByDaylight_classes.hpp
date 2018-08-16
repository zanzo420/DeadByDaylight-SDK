#pragma once

// DeadByDaylight (2.0.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DBD_DeadByDaylight_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class DeadByDaylight.DBDHostSettingsParamsBase
// 0x0008 (0x0030 - 0x0028)
class UDBDHostSettingsParamsBase : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.DBDHostSettingsParamsBase");
		return ptr;
	}

};


// Class DeadByDaylight.DBDHostSettingsParamsSessionInvalid
// 0x0000 (0x0030 - 0x0030)
class UDBDHostSettingsParamsSessionInvalid : public UDBDHostSettingsParamsBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.DBDHostSettingsParamsSessionInvalid");
		return ptr;
	}

};


// Class DeadByDaylight.DBDHostSettingsParamsJoinabilityPreset
// 0x0008 (0x0038 - 0x0030)
class UDBDHostSettingsParamsJoinabilityPreset : public UDBDHostSettingsParamsBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.DBDHostSettingsParamsJoinabilityPreset");
		return ptr;
	}

};


// Class DeadByDaylight.DBDHostSettingsParamsJoinabilityCustom
// 0x0008 (0x0038 - 0x0030)
class UDBDHostSettingsParamsJoinabilityCustom : public UDBDHostSettingsParamsBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.DBDHostSettingsParamsJoinabilityCustom");
		return ptr;
	}

};


// Class DeadByDaylight.DBDHostSettingsParamsRanking
// 0x0010 (0x0040 - 0x0030)
class UDBDHostSettingsParamsRanking : public UDBDHostSettingsParamsBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.DBDHostSettingsParamsRanking");
		return ptr;
	}

};


// Class DeadByDaylight.DBDServerInstance
// 0x00C0 (0x00E8 - 0x0028)
class UDBDServerInstance : public UObject
{
public:
	unsigned char                                      UnknownData00[0x88];                                      // 0x0028(0x0088) MISSED OFFSET
	TArray<class UDBDHostSettingsParamsBase*>          _pendingSessionUpdates;                                   // 0x00B0(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData01[0x20];                                      // 0x00C0(0x0020) MISSED OFFSET
	TWeakObjectPtr<class UDBDGameInstance>             _gameInstance;                                            // 0x00E0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.DBDServerInstance");
		return ptr;
	}

};


// Class DeadByDaylight.DBDAnalytics
// 0x0000 (0x0028 - 0x0028)
class UDBDAnalytics : public UBHVRAnalytics
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.DBDAnalytics");
		return ptr;
	}


	void STATIC_RecordGameProgress(const class FString& InProgressType);
};


// Class DeadByDaylight.DBDBloodWebDefinition
// 0x00F0 (0x0118 - 0x0028)
class UDBDBloodWebDefinition : public UObject
{
public:
	unsigned char                                      UnknownData00[0xF0];                                      // 0x0028(0x00F0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.DBDBloodWebDefinition");
		return ptr;
	}

};


// Class DeadByDaylight.RitualEvaluatorBase
// 0x0000 (0x0028 - 0x0028)
class URitualEvaluatorBase : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.RitualEvaluatorBase");
		return ptr;
	}


	bool EvaluateEvent(TEnumAsByte<EDBDScoreTypes> event, class AActor* Instigator, class AActor* Target);
};


// Class DeadByDaylight.FearMarketManager
// 0x0238 (0x0260 - 0x0028)
class UFearMarketManager : public UObject
{
public:
	struct FFearMarketItemInstance                     PendingPurchaseFearMarketItem;                            // 0x0028(0x0018)
	unsigned char                                      UnknownData00[0x100];                                     // 0x0040(0x0100) MISSED OFFSET
	struct FFearMarketOfferingInstance                 _existingFearMarket;                                      // 0x0140(0x0020)
	TWeakObjectPtr<class UDBDGameInstance>             _gameInstance;                                            // 0x0160(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0xF8];                                      // 0x0168(0x00F8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.FearMarketManager");
		return ptr;
	}


	void ReceivedFearMarketData(bool success);
};


// Class DeadByDaylight.DBDPersistentData
// 0x09B8 (0x09E0 - 0x0028)
class UDBDPersistentData : public UObject
{
public:
	struct FGamePersistentData                         _gamePersistentData;                                      // 0x0028(0x00F0) (Transient)
	TArray<class FString>                              _keepDataIDs;                                             // 0x0118(0x0010) (ZeroConstructor, Transient)
	TMap<class FString, struct FPlayerPersistentData>  _playerIdToPersistentDataMap;                             // 0x0128(0x0050) (ZeroConstructor, Transient)
	struct FPlayerPersistentData                       _localPlayerPersistentData;                               // 0x0178(0x04C8) (Transient)
	TMap<class FString, struct FCachedPlayerScoreData> _cachedPlayerScoreMap;                                    // 0x0640(0x0050) (ZeroConstructor, Transient)
	TArray<struct FCloudInventoryItem>                 _cloudInventory;                                          // 0x0690(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData00[0x340];                                     // 0x06A0(0x0340) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.DBDPersistentData");
		return ptr;
	}

};


// Class DeadByDaylight.GameEventDispatcher
// 0x0050 (0x0078 - 0x0028)
class UGameEventDispatcher : public UObject
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0028(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.GameEventDispatcher");
		return ptr;
	}


	void UnregisterListener(const struct FGameEventDispatcherHandle& GameEventDispatcherHandle);
	void RemotelyDispatch(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData);
	void RegisterListener(const struct FGameEventDispatcherHandle& GameEventDispatcherHandle);
	void LocallyDispatch(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData);
};


// Class DeadByDaylight.GameEventTracker
// 0x0098 (0x00C0 - 0x0028)
class UGameEventTracker : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnGameplayEvent;                                          // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnGameflowEvent;                                          // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x78];                                      // 0x0048(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.GameEventTracker");
		return ptr;
	}


	void FireGameflowEvent(TEnumAsByte<EDBDScoreTypes> EventType, float amount, class ADBDPlayerState* Instigator, const struct FName& Data);
	void FireGameEvent(TEnumAsByte<EDBDScoreTypes> EventType, float amount, class AActor* Instigator, class AActor* Target);
	void FireAnalyticEvent(const class FString& EventName);
};


// Class DeadByDaylight.StatusView
// 0x0070 (0x03F0 - 0x0380)
class AStatusView : public AActor
{
public:
	bool                                               IsActive;                                                 // 0x0380(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0381(0x0003) MISSED OFFSET
	int                                                Level;                                                    // 0x0384(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PercentageFill;                                           // 0x0388(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsClockwiseTimer;                                         // 0x038C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x5B];                                      // 0x038D(0x005B) MISSED OFFSET
	class ADBDPlayer*                                  _localDBDPlayer;                                          // 0x03E8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.StatusView");
		return ptr;
	}


	void ResetView(class ADBDPlayer* DBDPlayer);
	void FireNotification(const struct FStatusViewSource& StatusViewSource);
};


// Class DeadByDaylight.GameplayModifierCondition
// 0x0008 (0x00F0 - 0x00E8)
class UGameplayModifierCondition : public UActorComponent
{
public:
	class UGameplayModifierContainer*                  _owningGameplayModifier;                                  // 0x00E8(0x0008) (ExportObject, Net, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.GameplayModifierCondition");
		return ptr;
	}


	void SetOwningGameplayModifier(class UGameplayModifierContainer* OwningGameplayModifier);
	bool IsApplicable();
	class ADBDPlayer* GetOwningPlayer();
	class UGameplayModifierContainer* GetOwningGameplayModifier();
};


// Class DeadByDaylight.GameplayModifierContainer
// 0x00A0 (0x0188 - 0x00E8)
class UGameplayModifierContainer : public UActorComponent
{
public:
	bool                                               UseApplyFunction;                                         // 0x00E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00E9(0x0007) MISSED OFFSET
	struct FName                                       ID;                                                       // 0x00F0(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData)
	struct FDBDTimer                                   HUDIconTimer;                                             // 0x00F8(0x0020) (BlueprintVisible, Transient)
	struct FDBDTimer                                   CooldownTimer;                                            // 0x0118(0x0020) (BlueprintVisible, Transient)
	TArray<class UGameplayModifierCondition*>          _conditionsInner;                                         // 0x0138(0x0010) (ExportObject, Net, ZeroConstructor, Transient)
	TArray<struct FName>                               _tags;                                                    // 0x0148(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData01[0x19];                                      // 0x0158(0x0019) MISSED OFFSET
	bool                                               BroadcastStatusView;                                      // 0x0171(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x0172(0x0006) MISSED OFFSET
	struct FName                                       StatusViewID;                                             // 0x0178(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               BroadcastWhenApplicable;                                  // 0x0180(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BroadcastOnTimer;                                         // 0x0181(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BroadcastCooldownTimer;                                   // 0x0182(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BroadcastInactiveCooldownTimer;                           // 0x0183(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BroadcastAlways;                                          // 0x0184(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0185(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.GameplayModifierContainer");
		return ptr;
	}


	void UpdateCooldownTimer(float DeltaTime);
	void UnlistenToGameEvent(TEnumAsByte<EDBDScoreTypes> EventType);
	void UnlistenToAllGameEvents(TEnumAsByte<EDBDScoreTypes> EventType);
	void TriggerTimerActivePerkEvent(float duration);
	void SetModifierValue(const struct FGameplayTag& Type, float GameplayModifierValue);
	void SetFlag(const struct FGameplayTag& flag, bool flagValue);
	void RemoveModifier(const struct FGameplayTag& Type);
	void RemoveAllModifiers();
	void RemoveAllFlags();
	void OnStatusEffectInitialized(class UStatusEffect* effect);
	void OnListenedGameEvent(TEnumAsByte<EDBDScoreTypes> EventType, float amount, class AActor* Instigator, class AActor* Target);
	void OnLevelReadyToPlay();
	void OnInitialized_Internal();
	void OnInitialized();
	void OnGameEvent(TEnumAsByte<EDBDScoreTypes> EventType, float amount, class AActor* Instigator, class AActor* Target);
	void OnApplyEnd();
	void OnApplyBegin();
	void Multicast_TriggerCooldownTimer(float cooldownTime);
	void ListenToGameEvent(TEnumAsByte<EDBDScoreTypes> EventType);
	bool IsStatusViewActive();
	bool IsApplicable();
	void InstantiateGameplayModifierConditions();
	bool HasModifierOfType(const struct FGameplayTag& Type);
	bool HasFlag(const struct FGameplayTag& flag);
	float GetPercentageFill();
	class ADBDPlayer* GetOwningPlayer();
	class UGameplayModifierContainer* GetOriginatingEffect();
	float GetModifierValue(const struct FGameplayTag& Type);
	int GetLevelToDisplay();
	TEnumAsByte<EInventoryItemType> GetInventoryItemType();
	int GetIconFilePathIndex();
	struct FGameplayModifierData GetGameplayModifierData();
	struct FGameplayModifierData GetConstGameplayModifierData();
	class UGameplayModifierCondition* GetCondition(int Index);
	void FireActiveStatusViewEvent(const struct FName& StatusViewID, const struct FName& uniqueSourceID, const struct FStatusViewSource& StatusViewSource);
	void FireActivePerkEvent(float percentage, int chargeCount);
	class FString STATIC_ConvertEGameplayModifierTypeToGamePlayTag(const class FString& DefaultValue);
	class FString STATIC_ConvertEGameplayModifierFlagToGamePlayTag(const class FString& DefaultValue);
	void Authority_TriggerCooldownTimer(float coolddownTime);
	void Apply(float DeltaTime);
	class UGameplayModifierCondition* AddCondition(class UClass* conditionType);
};


// Class DeadByDaylight.GameplayNotificationManager
// 0x0088 (0x00B0 - 0x0028)
class UGameplayNotificationManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x88];                                      // 0x0028(0x0088) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.GameplayNotificationManager");
		return ptr;
	}


	void FireGameplayNotification(const struct FGameplayNotificationData& notificationData, bool addToHistory);
};


// Class DeadByDaylight.DBDPlayerState
// 0x0610 (0x0A20 - 0x0410)
class ADBDPlayerState : public APlayerState
{
public:
	unsigned char                                      UnknownData00[0x310];                                     // 0x0410(0x0310) MISSED OFFSET
	bool                                               GameLevelLoaded;                                          // 0x0720(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0721(0x0007) MISSED OFFSET
	class FString                                      MirrorsId;                                                // 0x0728(0x0010) (Net, ZeroConstructor, Transient)
	class FString                                      PlatformAccountId;                                        // 0x0738(0x0010) (Net, ZeroConstructor, Transient)
	bool                                               IsPlayerReady;                                            // 0x0748(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0749(0x0003) MISSED OFFSET
	int                                                SelectedCamperIndex;                                      // 0x074C(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	TEnumAsByte<EPlayerRole>                           GameRole;                                                 // 0x0750(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0751(0x0003) MISSED OFFSET
	int                                                SelectedSlasherIndex;                                     // 0x0754(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	struct FCamperStateData                            CamperData;                                               // 0x0758(0x0020) (BlueprintVisible, BlueprintReadOnly, Net, Transient)
	class URitualHandlerComponent*                     RitualHandler;                                            // 0x0778(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UActivityTrackerComponent*                   ActivityTracker;                                          // 0x0780(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UDBDEmblemEvaluatorComponent*                EmblemEvaluator;                                          // 0x0788(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	struct FSlasherStateData                           SlasherData;                                              // 0x0790(0x0020) (Net)
	struct FPlayerStateData                            PlayerData;                                               // 0x07B0(0x0048) (Net)
	struct FSkillCheckInteractionData                  SkillCheckInteractionData;                                // 0x07F8(0x0020) (Net)
	bool                                               IsReadyToTravel;                                          // 0x0818(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0819(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnPlayerGameplayEvent;                                    // 0x0820(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	TMap<struct FName, struct FScoreEventArray>        _scoreEvents;                                             // 0x0830(0x0050) (ZeroConstructor)
	struct FUserGameStats                              _cachedUserGameStats;                                     // 0x0880(0x00B0)
	TArray<struct FOngoingScoreData>                   _ongoingScoreEvents;                                      // 0x0930(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData05[0x8];                                       // 0x0940(0x0008) MISSED OFFSET
	struct FDBDRecentGameplayEvents                    _recentGameplayEvents;                                    // 0x0948(0x0050)
	unsigned char                                      UnknownData06[0x1];                                       // 0x0998(0x0001) MISSED OFFSET
	bool                                               _inParadise;                                              // 0x0999(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x56];                                      // 0x099A(0x0056) MISSED OFFSET
	class UGameplayNotificationManager*                _gameplayNotificationManager;                             // 0x09F0(0x0008) (ZeroConstructor, IsPlainOldData)
	class UAchievementHandlerComponent*                _achievementHandler;                                      // 0x09F8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UCharacterStatsHandlerComponent*             _characterStatsHandler;                                   // 0x0A00(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData08[0x18];                                      // 0x0A08(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.DBDPlayerState");
		return ptr;
	}


	void UpdateSkillCheckInteractionData(float Progress);
	void UpdateOngoingScores();
	void SetSkillCheckInteractionData(const struct FSkillCheckInteractionData& skillCheckData);
	void SetPlayerGameState(TEnumAsByte<EGameState> newGameState);
	void SetKillerJoiningState(TEnumAsByte<EKillerJoiningState> State);
	void Server_SetSelectedCharacterId(TEnumAsByte<EPlayerRole> forRole, int ID, bool updateDisplayData);
	void Server_SetSelectedCharacterCustomization(TEnumAsByte<EPlayerRole> forRole, int ID, TArray<struct FName> customizationItemIds, bool updateDisplayData);
	void Server_SetPlayerGameState(TEnumAsByte<EGameState> newGameState);
	void Server_SetGameRole(TEnumAsByte<EPlayerRole> newPlayerRole);
	void Server_RemotelyDispatchGameEvent(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData);
	void Server_KillerServerJoined(bool succeeded);
	void OnRep_DisplayData();
	void Multicast_UpdateSkillCheckInteractionData(float Progress);
	void Multicast_SetSkillCheckInteractionData(const struct FSkillCheckInteractionData& skillCheckInteraction);
	void Multicast_SetSelectedCharacterId(TEnumAsByte<EPlayerRole> forRole, int ID, bool updateDisplayData);
	void Multicast_SetSelectedCharacterCustomization(TEnumAsByte<EPlayerRole> forRole, int ID, TArray<struct FName> customizationItemIds, bool updateDisplayData);
	void Multicast_SetPlayerGameState(TEnumAsByte<EGameState> newGameState);
	void Multicast_SetInParadise(bool KILLED);
	void Multicast_SetEquipment(TEnumAsByte<ELoadoutSlot> Slot, const struct FName& ItemId, bool callOnRep);
	void Multicast_SetAsLeftMatch();
	void Multicast_ScoreEvent(const struct FScoreEvent& ScoreEvent);
	void Multicast_RemotelyDispatchGameEvent(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData);
	void Multicast_FireGameplayEvent(TEnumAsByte<EDBDScoreTypes> playerGameplayEventType, float amount, class AActor* effector, class AActor* Target);
	void LogCurrentLoadout();
	TEnumAsByte<EKillerJoiningState> KillerJoiningState();
	bool IsEscaped();
	bool HasHappened(TEnumAsByte<EDBDScoreTypes> gameplayEventType, float maxSecondsAgo);
	class UGameplayNotificationManager* GetGameplayNotificationManager();
	int GetCurrentCharacterID();
	void FireScoreEvent(TEnumAsByte<EDBDScoreTypes> ScoreType, float PercentToAward);
	void FireActiveStatusViewEvent(const struct FName& StatusViewID, const struct FName& uniqueSourceID, const struct FStatusViewSource& StatusViewSource);
	void FireActiveStatusEffectEvent(const struct FName& statusEffectID, float percentage, int iconFilePathIndex, int LevelToDisplay);
	void FireActivePerkEvent(const struct FName& PerkID, int LevelToDisplay, int iconFilePathIndex, float percentage, int chargeCount);
	void Client_SetInParadise(bool KILLED);
	void Client_SetGameRole(TEnumAsByte<EPlayerRole> newRole);
	void Client_RemoveItemFromInventory(const struct FName& toRemove, bool updateLoadout);
	void Authority_HandleScoring(TEnumAsByte<EDBDScoreTypes> ScoreType, float PercentToAward);
	void Authority_ForceEndOngoingScoreEvent(TEnumAsByte<EDBDScoreTypes> ScoreType);
	void Authority_ForceCancelOngoingScoreEvent(TEnumAsByte<EDBDScoreTypes> ScoreType);
};


// Class DeadByDaylight.AchievementHandlerComponent
// 0x0000 (0x00E8 - 0x00E8)
class UAchievementHandlerComponent : public UActorComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.AchievementHandlerComponent");
		return ptr;
	}


	void ReceiveGameEvent(TEnumAsByte<EDBDScoreTypes> ScoreType, float amount, class AActor* Instigator, class AActor* Target);
};


// Class DeadByDaylight.ActivityTrackerComponent
// 0x0030 (0x0118 - 0x00E8)
class UActivityTrackerComponent : public UActorComponent
{
public:
	TArray<struct FTrackedActivityEvent>               TrackedEvents;                                            // 0x00E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TWeakObjectPtr<class ADBDPlayerState>              _player;                                                  // 0x00F8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0100(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.ActivityTrackerComponent");
		return ptr;
	}

};


// Class DeadByDaylight.ActorClipperComponent
// 0x0070 (0x0158 - 0x00E8)
class UActorClipperComponent : public UActorComponent
{
public:
	class UShapeComponent*                             Shape;                                                    // 0x00E8(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FName>                               _tags;                                                    // 0x00F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TMap<class AActor*, struct FClippedActor>          _clippedActors;                                           // 0x0100(0x0050) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0150(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.ActorClipperComponent");
		return ptr;
	}


	void SetClippingEnabled(bool Enabled);
	void OnOverlapExit(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void OnOverlapEnter(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
};


// Class DeadByDaylight.ActorComponentExt
// 0x0000 (0x0028 - 0x0028)
class UActorComponentExt : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.ActorComponentExt");
		return ptr;
	}


	bool STATIC_IsLocallyObserved(class UActorComponent* ActorComponent);
	bool STATIC_IsLocallyControlled(class UActorComponent* ActorComponent);
	bool STATIC_HasAuthority(class UActorComponent* ActorComponent);
	class AActor* STATIC_GetValidatedOwner(class UActorComponent* ActorComponent);
	class ACamperPlayer* STATIC_GetOwningSurvivor(class UActorComponent* ActorComponent);
	class ADBDPlayer* STATIC_GetOwningPlayer(class UActorComponent* ActorComponent);
	class ASlasherPlayer* STATIC_GetOwningKiller(class UActorComponent* ActorComponent);
};


// Class DeadByDaylight.WeightedElement
// 0x0000 (0x0028 - 0x0028)
class UWeightedElement : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.WeightedElement");
		return ptr;
	}

};


// Class DeadByDaylight.MapData
// 0x0030 (0x0058 - 0x0028)
class UMapData : public UDataAsset
{
public:
	struct FName                                       ThemeName;                                                // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       ThemeWeather;                                             // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                MapWidth;                                                 // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MapHeight;                                                // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<struct FTileProperties>                     MapTileProperties;                                        // 0x0040(0x0010) (ZeroConstructor)
	class UProceduralGenerationData*                   _proceduralGenerationData;                                // 0x0050(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.MapData");
		return ptr;
	}

};


// Class DeadByDaylight.SpawnElement
// 0x0000 (0x0028 - 0x0028)
class USpawnElement : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.SpawnElement");
		return ptr;
	}

};


// Class DeadByDaylight.TileSpawnPoint
// 0x0060 (0x02F0 - 0x0290)
class UTileSpawnPoint : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0290(0x0010) MISSED OFFSET
	TEnumAsByte<ETileSpawnPointType>                   TileSpawnPointType;                                       // 0x02A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x02A1(0x0007) MISSED OFFSET
	TArray<class UClass*>                              ObjectSpawnModifier;                                      // 0x02A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              Weight;                                                   // 0x02B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x02BC(0x0004) MISSED OFFSET
	TAssetPtr<class UClass>                            Visualization;                                            // 0x02C0(0x0020) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData03[0x8];                                       // 0x02E0(0x0008) MISSED OFFSET
	class AActor*                                      _spawnedObject;                                           // 0x02E8(0x0008) (Net, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.TileSpawnPoint");
		return ptr;
	}


	void OnRep_SpawnObject();
	class AActor* GetSpawnedObject();
};


// Class DeadByDaylight.ActorDependency
// 0x0010 (0x00F8 - 0x00E8)
class UActorDependency : public UActorComponent
{
public:
	TArray<struct FDependency>                         Dependencies;                                             // 0x00E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.ActorDependency");
		return ptr;
	}

};


// Class DeadByDaylight.ActorDetectorComponent
// 0x0028 (0x0110 - 0x00E8)
class UActorDetectorComponent : public UActorComponent
{
public:
	struct FScriptMulticastDelegate                    OnActorDetected;                                          // 0x00E8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	TArray<class UClass*>                              CollectedTypes;                                           // 0x00F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UPrimitiveComponent*                         _primitive;                                               // 0x0108(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.ActorDetectorComponent");
		return ptr;
	}


	void SetDetectionPrimitive(class UPrimitiveComponent* Primitive);
	void OnOverlapEnter(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
};


// Class DeadByDaylight.ActorKnowledgeCollection
// 0x0028 (0x0110 - 0x00E8)
class UActorKnowledgeCollection : public UActorComponent
{
public:
	TArray<class AActor*>                              _actors;                                                  // 0x00E8(0x0010) (Net, ZeroConstructor, Transient)
	bool                                               _available;                                               // 0x00F8(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00F9(0x0007) MISSED OFFSET
	class ACharacter*                                  _possessor;                                               // 0x0100(0x0008) (Net, ZeroConstructor, Transient, IsPlainOldData)
	TEnumAsByte<EKnowledgeSharingType>                 _sharing;                                                 // 0x0108(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0109(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.ActorKnowledgeCollection");
		return ptr;
	}


	bool IsAvailable(class ACharacter* Character);
	bool Contains(class AActor* Actor);
	void Authority_SetSharingType(TEnumAsByte<EKnowledgeSharingType> Value);
	void Authority_SetPossessor(class ACharacter* possessor);
	void Authority_SetAvailable(bool Value);
	void Authority_Remove(class AActor* Actor);
	void Authority_Empty();
	void Authority_Append(TArray<class AActor*> Actors);
	bool Authority_Add(class AActor* Actor);
};


// Class DeadByDaylight.DBDClientSyncer
// 0x01F0 (0x0570 - 0x0380)
class ADBDClientSyncer : public AActor
{
public:
	TArray<class UClass*>                              _actorsToSpawnLocally;                                    // 0x0380(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0390(0x0010) MISSED OFFSET
	TArray<struct FSpawnInfo>                          _currentQueue;                                            // 0x03A0(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData01[0x8];                                       // 0x03B0(0x0008) MISSED OFFSET
	class UPaperTileMap*                               _tileMap;                                                 // 0x03B8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1B0];                                     // 0x03C0(0x01B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.DBDClientSyncer");
		return ptr;
	}


	void Multicast_SyncSeed(int Seed, class UPaperTileMap* tileMap);
	void Multicast_SyncFinalLocallySpawnCount(int16_t numLocal);
	void Multicast_SyncActorToSpawnLocally(TArray<struct FSpawnInfo> spawnInfos, int16_t startIndex);
};


// Class DeadByDaylight.ActorSpawner
// 0x00A0 (0x0330 - 0x0290)
class UActorSpawner : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0290(0x0010) MISSED OFFSET
	TEnumAsByte<EGameplayElementType>                  Type;                                                     // 0x02A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x02A1(0x0007) MISSED OFFSET
	TAssetPtr<class UClass>                            Visualization;                                            // 0x02A8(0x0020) (Edit, BlueprintVisible)
	bool                                               ActivatedByDefault;                                       // 0x02C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x02C9(0x0007) MISSED OFFSET
	TArray<struct FActorSpawnerProperties>             ActivatedSceneElement;                                    // 0x02D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FActorSpawnerProperties>             DeactivatedSceneElement;                                  // 0x02E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              Weight;                                                   // 0x02F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                SpawnCountMax;                                            // 0x02F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnAsyncActorSpawned;                                      // 0x02F8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData03[0x8];                                       // 0x0308(0x0008) MISSED OFFSET
	bool                                               WeightInfluenceable;                                      // 0x0310(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               WeightInfluencer;                                         // 0x0311(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x0312(0x0002) MISSED OFFSET
	float                                              Cost;                                                     // 0x0314(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      _toSpawn;                                                 // 0x0318(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x8];                                       // 0x0320(0x0008) MISSED OFFSET
	TWeakObjectPtr<class AActor>                       _spawnedActorOnAuthority;                                 // 0x0328(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.ActorSpawner");
		return ptr;
	}


	bool UseActivatedElement();
	void EditorForceSpawnVisualization();
	class AActor* AuthorityGetSpawnedActor();
	void Authority_SpawnActorAsyncEvent();
};


// Class DeadByDaylight.HexSpawner
// 0x0010 (0x0340 - 0x0330)
class UHexSpawner : public UActorSpawner
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0330(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.HexSpawner");
		return ptr;
	}

};


// Class DeadByDaylight.LightFunctionActorSpawner
// 0x0010 (0x0340 - 0x0330)
class ULightFunctionActorSpawner : public UActorSpawner
{
public:
	class UTexture*                                    LightFunctionTexture;                                     // 0x0330(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0338(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.LightFunctionActorSpawner");
		return ptr;
	}

};


// Class DeadByDaylight.ActorVariationSpawner
// 0x0050 (0x02E0 - 0x0290)
class UActorVariationSpawner : public USceneComponent
{
public:
	TAssetPtr<class UClass>                            Visualization;                                            // 0x0290(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly)
	TArray<struct FActorVariationElements>             Variations;                                               // 0x02B0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x02C0(0x0008) MISSED OFFSET
	class UClass*                                      _toSpawn;                                                 // 0x02C8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x02D0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.ActorVariationSpawner");
		return ptr;
	}

};


// Class DeadByDaylight.AICharacterBehaviourData
// 0x0000 (0x0028 - 0x0028)
class UAICharacterBehaviourData : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.AICharacterBehaviourData");
		return ptr;
	}

};


// Class DeadByDaylight.AICharacterBehaviour
// 0x0088 (0x00B0 - 0x0028)
class UAICharacterBehaviour : public UObject
{
public:
	unsigned char                                      UnknownData00[0x88];                                      // 0x0028(0x0088) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.AICharacterBehaviour");
		return ptr;
	}


	void Update();
	void SetEnable(bool enable);
	bool IsEnabled();
};


// Class DeadByDaylight.CharacterEvasionData
// 0x0020 (0x0048 - 0x0028)
class UCharacterEvasionData : public UAICharacterBehaviourData
{
public:
	class AActor*                                      _hunter;                                                  // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	TArray<class AActor*>                              _escapePoints;                                            // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              _minEscapeDist;                                           // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0044(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.CharacterEvasionData");
		return ptr;
	}


	void Init(class AActor* Hunter, TArray<class AActor*> escapePoints, float minEscapeDist);
};


// Class DeadByDaylight.AICharacterEvasionHandler
// 0x0020 (0x00D0 - 0x00B0)
class UAICharacterEvasionHandler : public UAICharacterBehaviour
{
public:
	class ADBDAIPlayerController*                      _preyAIController;                                        // 0x00B0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class AActor*                                      _currentEscapePoint;                                      // 0x00B8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x00C0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.AICharacterEvasionHandler");
		return ptr;
	}


	void EscapeDestinationReached(const struct FAIRequestID& RequestID, TEnumAsByte<EPathFollowingResult> result);
};


// Class DeadByDaylight.AIMoveToInteractData
// 0x0010 (0x0038 - 0x0028)
class UAIMoveToInteractData : public UAICharacterBehaviourData
{
public:
	class AActor*                                      _interactActor;                                           // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	TEnumAsByte<ECharacterMovementTypes>               _characterMovementTypes;                                  // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.AIMoveToInteractData");
		return ptr;
	}


	void Init(class AActor* interactActor, TEnumAsByte<ECharacterMovementTypes> characterMovementTypes);
};


// Class DeadByDaylight.AIMoveToInteract
// 0x0010 (0x00C0 - 0x00B0)
class UAIMoveToInteract : public UAICharacterBehaviour
{
public:
	class ADBDAIPlayerController*                      _aiController;                                            // 0x00B0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x00B8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.AIMoveToInteract");
		return ptr;
	}


	void InteractionPointReached(const struct FAIRequestID& RequestID, TEnumAsByte<EPathFollowingResult> result);
	void Init(class ADBDPlayer* Character, class UAICharacterBehaviourData* behaviourData);
};


// Class DeadByDaylight.AimingStrategyInterface
// 0x0000 (0x0028 - 0x0028)
class UAimingStrategyInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.AimingStrategyInterface");
		return ptr;
	}

};


// Class DeadByDaylight.AimableInterface
// 0x0000 (0x0028 - 0x0028)
class UAimableInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.AimableInterface");
		return ptr;
	}

};


// Class DeadByDaylight.AmbienceBoxComponent
// 0x0000 (0x0640 - 0x0640)
class UAmbienceBoxComponent : public UBoxComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.AmbienceBoxComponent");
		return ptr;
	}

};


// Class DeadByDaylight.AnalyticsFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UAnalyticsFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.AnalyticsFunctionLibrary");
		return ptr;
	}


	void STATIC_StartSurvivorTutorialSectionAnalytics(class UObject* WorldContextObject, TEnumAsByte<ESurvivorTutorialSections> tutorialSection);
	void STATIC_StartKillerTutorialSectionAnalytics(class UObject* WorldContextObject, TEnumAsByte<EKillerTutorialSections> tutorialSection);
	void STATIC_EndSurvivorTutorialSectionAnalytics(class UObject* WorldContextObject, TEnumAsByte<ESurvivorTutorialSections> tutorialSection);
	void STATIC_EndKillerTutorialSectionAnalytics(class UObject* WorldContextObject, TEnumAsByte<EKillerTutorialSections> tutorialSection);
};


// Class DeadByDaylight.AnimationMontageSlave
// 0x0008 (0x00F0 - 0x00E8)
class UAnimationMontageSlave : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00E8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.AnimationMontageSlave");
		return ptr;
	}


	void SetLeader(class UMontagePlayer* leader);
	void OnMontageStopped(const struct FAnimationMontageDescriptor& ID);
	void OnMontageStarted(const struct FAnimationMontageDescriptor& ID, float rate);
};


// Class DeadByDaylight.AnimTagProvider
// 0x0000 (0x0028 - 0x0028)
class UAnimTagProvider : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.AnimTagProvider");
		return ptr;
	}

};


// Class DeadByDaylight.AssetLibrary
// 0x00E8 (0x0110 - 0x0028)
class UAssetLibrary : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	class UObjectLibrary*                              _objectLibrary;                                           // 0x0030(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC4];                                      // 0x0038(0x00C4) MISSED OFFSET
	float                                              SecondsDelayBetweenBatch;                                 // 0x00FC(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData02[0x10];                                      // 0x0100(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.AssetLibrary");
		return ptr;
	}

};


// Class DeadByDaylight.IniAssetLibrary
// 0x0010 (0x0120 - 0x0110)
class UIniAssetLibrary : public UAssetLibrary
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0110(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.IniAssetLibrary");
		return ptr;
	}

};


// Class DeadByDaylight.ItemsAssetLibrary
// 0x0070 (0x0180 - 0x0110)
class UItemsAssetLibrary : public UAssetLibrary
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0110(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.ItemsAssetLibrary");
		return ptr;
	}

};


// Class DeadByDaylight.CharacterItemsAssetLibrary
// 0x0010 (0x0190 - 0x0180)
class UCharacterItemsAssetLibrary : public UItemsAssetLibrary
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0180(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.CharacterItemsAssetLibrary");
		return ptr;
	}

};


// Class DeadByDaylight.DarkPartsAssetLibrary
// 0x0000 (0x0180 - 0x0180)
class UDarkPartsAssetLibrary : public UItemsAssetLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.DarkPartsAssetLibrary");
		return ptr;
	}

};


// Class DeadByDaylight.MenuAssetLibrary
// 0x0010 (0x0190 - 0x0180)
class UMenuAssetLibrary : public UItemsAssetLibrary
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0180(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.MenuAssetLibrary");
		return ptr;
	}

};


// Class DeadByDaylight.AssetLibraryManager
// 0x00C0 (0x00E8 - 0x0028)
class UAssetLibraryManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET
	class UObject*                                     _worldContextObject;                                      // 0x0038(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TMap<int, class UCharacterItemsAssetLibrary*>      _characterItemsAssetLibrary;                              // 0x0040(0x0050) (ZeroConstructor, Transient)
	class UItemsAssetLibrary*                          _blindPackAssetLibrary;                                   // 0x0090(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UDarkPartsAssetLibrary*                      _darkPartsAssetLibrary;                                   // 0x0098(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UMenuAssetLibrary*                           _menuAssetLibrary;                                        // 0x00A0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x00A8(0x0008) MISSED OFFSET
	class UShopManager*                                _shopManager;                                             // 0x00B0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x10];                                      // 0x00B8(0x0010) MISSED OFFSET
	TArray<struct FAssetLibraryLoader>                 _loadingList;                                             // 0x00C8(0x0010) (ZeroConstructor, Transient)
	int                                                CharacterItemsAssetLoadCountPerChunk;                     // 0x00D8(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                BlindPackAssetLoadCountPerChunk;                          // 0x00DC(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                DarkAssetAssetLoadCountPerChunk;                          // 0x00E0(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                MenuAssetLoadCountPerChunk;                               // 0x00E4(0x0004) (ZeroConstructor, Config, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.AssetLibraryManager");
		return ptr;
	}

};


// Class DeadByDaylight.AssetUtilities
// 0x0000 (0x0028 - 0x0028)
class UAssetUtilities : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.AssetUtilities");
		return ptr;
	}

};


// Class DeadByDaylight.DBDPlayerCameraManager
// 0x0008 (0x14B0 - 0x14A8)
class ADBDPlayerCameraManager : public APlayerCameraManager
{
public:
	float                                              NormalFOV;                                                // 0x14A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TargetingFOV;                                             // 0x14AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.DBDPlayerCameraManager");
		return ptr;
	}

};


// Class DeadByDaylight.CameraHandlerComponent
// 0x0098 (0x0180 - 0x00E8)
class UCameraHandlerComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00E8(0x0008) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnSocketChanged;                                          // 0x00F0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	TMap<TEnumAsByte<EDBDCameraSocketID>, class AActor*> _cameraMap;                                               // 0x0100(0x0050) (ZeroConstructor, Transient)
	TEnumAsByte<EDBDCameraSocketID>                    _delayedSocketID;                                         // 0x0150(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	TEnumAsByte<EDBDCameraSocketID>                    _currentSocketID;                                         // 0x0151(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2E];                                      // 0x0152(0x002E) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.CameraHandlerComponent");
		return ptr;
	}


	void SetSocketID(TEnumAsByte<EDBDCameraSocketID> mode);
	void PlayVFXOnCurrentCamera(class UParticleSystemComponent* Component);
	TEnumAsByte<EDBDCameraSocketID> GetSocketID();
	class AActor* GetCurrentCamera();
	void AddCameraToSocket(TEnumAsByte<EDBDCameraSocketID> mode, class AActor* Camera);
};


// Class DeadByDaylight.DBDBasePlayer
// 0x0010 (0x07B0 - 0x07A0)
class ADBDBasePlayer : public ACharacter
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x07A0(0x0008) MISSED OFFSET
	int                                                _characterIndex;                                          // 0x07A8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x07AC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.DBDBasePlayer");
		return ptr;
	}

};


// Class DeadByDaylight.PerkManagerOwnerInterface
// 0x0000 (0x0028 - 0x0028)
class UPerkManagerOwnerInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.PerkManagerOwnerInterface");
		return ptr;
	}

};


// Class DeadByDaylight.PerkOwnerInterface
// 0x0000 (0x0028 - 0x0028)
class UPerkOwnerInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.PerkOwnerInterface");
		return ptr;
	}

};


// Class DeadByDaylight.MontagePlayer
// 0x01F8 (0x02E0 - 0x00E8)
class UMontagePlayer : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x128];                                     // 0x00E8(0x0128) MISSED OFFSET
	class UDataTable*                                  _animationMappingsTable;                                  // 0x0210(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDataTable*                                  _playerSpecificMappingsTable;                             // 0x0218(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                _currentlyPlayingMontage;                                 // 0x0220(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0228(0x0010) MISSED OFFSET
	TArray<struct FMontageInstanceInfo>                _activeMontagesInfo;                                      // 0x0238(0x0010) (ZeroConstructor, Transient)
	struct FName                                       _outSectionName;                                          // 0x0248(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              _timeBeforeOut;                                           // 0x0250(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8C];                                      // 0x0254(0x008C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.MontagePlayer");
		return ptr;
	}


	void Stop(float BlendOutTime);
	void SetPlayRate(float PlayRate);
	void SetAnimInstance(class UAnimInstance* AnimInstance);
	class UAnimMontage* PlayScaledForDuration(const struct FAnimationMontageDescriptor& animMontageID, float duration);
	class UAnimMontage* PlayLoopForDuration(const struct FAnimationMontageDescriptor& animMontageID, float duration, float PlayRate, const struct FName& Out);
	class UAnimMontage* Play(const struct FAnimationMontageDescriptor& animMontageID, float PlayRate, bool isFollower);
	void OnMontageEndedInternal(const struct FGuid& Guid, class UAnimMontage* Montage, bool interrupted);
	void OnMontageBlendingOutInternal(const struct FGuid& Guid, class UAnimMontage* Montage, bool interrupted);
	void JumpToSectionEnd(const struct FName& sectionName);
	void JumpToSection(const struct FName& sectionName);
	bool IsPlayingAnyMontage();
	bool IsPlaying(const struct FAnimationMontageDescriptor& montageDescriptor);
	class UAnimInstance* GetAnimInstance();
};


// Class DeadByDaylight.DBDPlayer
// 0x0B50 (0x1300 - 0x07B0)
class ADBDPlayer : public ADBDBasePlayer
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x07B0(0x0020) MISSED OFFSET
	class UClass*                                      Interactable;                                             // 0x07D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnMovementInput;                                          // 0x07D8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	bool                                               AllowInterrupting;                                        // 0x07E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x07E9(0x0003) MISSED OFFSET
	float                                              MinFallHeight;                                            // 0x07EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsInterruptable;                                          // 0x07F0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               IsStunned;                                                // 0x07F1(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               IsAttacking;                                              // 0x07F2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               AllowNavigationInput;                                     // 0x07F3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               AllowNavigationBackwardInput;                             // 0x07F4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               AllowTurningInput;                                        // 0x07F5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AllowPitchInput;                                          // 0x07F6(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x07F7(0x0001) MISSED OFFSET
	float                                              PitchLimitLower;                                          // 0x07F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PitchLimitUpper;                                          // 0x07FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     StrafingOffset;                                           // 0x0800(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PelvisHeight;                                             // 0x080C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PelvisHeightForPounceOnStandingCamper;                    // 0x0810(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PelvisHeightForPounceOnCrouchingCamper;                   // 0x0814(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x60];                                      // 0x0818(0x0060) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnAttackedDelegate;                                       // 0x0878(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnDamageTargetDelegate;                                   // 0x0888(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnSensed;                                                 // 0x0898(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnAnimNotify_Pickup;                                      // 0x08A8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnAnimNotify_Release;                                     // 0x08B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnSecondaryActionInput;                                   // 0x08C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFirstPersonModeChanged;                                 // 0x08D8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class USceneComponent*                             CameraAnchor;                                             // 0x08E8(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class USpringArmComponent*                         CameraBoom;                                               // 0x08F0(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData04[0xC8];                                      // 0x08F8(0x00C8) MISSED OFFSET
	bool                                               ForceDisableFootIK;                                       // 0x09C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ForceSkillChecks;                                         // 0x09C1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0xE];                                       // 0x09C2(0x000E) MISSED OFFSET
	struct FTransform                                  IKLeftHandTransform;                                      // 0x09D0(0x0030) (BlueprintVisible, Transient, IsPlainOldData)
	struct FTransform                                  IKRightHandTransform;                                     // 0x0A00(0x0030) (BlueprintVisible, Transient, IsPlainOldData)
	float                                              CameraResetSpeed;                                         // 0x0A30(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x0A34(0x0004) MISSED OFFSET
	class FString                                      CharacterName;                                            // 0x0A38(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class FString                                      CharacterClothes;                                         // 0x0A48(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class FString                                      CharacterShoes;                                           // 0x0A58(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class FString                                      CharacterWeapon;                                          // 0x0A68(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class FString                                      CharacterAmbiance;                                        // 0x0A78(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class FString                                      CharacterState;                                           // 0x0A88(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData07[0x3];                                       // 0x0A98(0x0003) MISSED OFFSET
	bool                                               DebugInteractionPriorityEnabled;                          // 0x0A9B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x64];                                      // 0x0A9C(0x0064) MISSED OFFSET
	float                                              _emulatedYawInputDecay;                                   // 0x0B00(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              _emulatedYawInputDecayWhenNoInput;                        // 0x0B04(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              _emulatedYawInputReleaseTime;                             // 0x0B08(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              _emulatedYawInputDeadZone;                                // 0x0B0C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              _emulatedYawMinimumInput;                                 // 0x0B10(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              _emulatedYawInputStrength;                                // 0x0B14(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 BlinkFOVCurve;                                            // 0x0B18(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CurrentBlinkDistance;                                     // 0x0B20(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	float                                              CurrentBlinkChargePercent;                                // 0x0B24(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               IsInBlinkingState;                                        // 0x0B28(0x0001) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x0B29(0x0003) MISSED OFFSET
	float                                              AverageSpeedBufferTime;                                   // 0x0B2C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AlmostCurrentSpeedBufferTime;                             // 0x0B30(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x4];                                       // 0x0B34(0x0004) MISSED OFFSET
	class UCurveFloat*                                 GamepadYawCurve;                                          // 0x0B38(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 GamepadPitchCurve;                                        // 0x0B40(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UChargeableComponent*                        BlindingChargeableComponent;                              // 0x0B48(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	struct FName                                       CarryJointName;                                           // 0x0B50(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UCurveFloat*>                         AttackPounceCurves;                                       // 0x0B58(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UCurveFloat*>                         AttackLungeCurves;                                        // 0x0B68(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UCurveFloat*>                         AttackSlashCurves;                                        // 0x0B78(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UCurveFloat*>                         AttackChainsawCurves;                                     // 0x0B88(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UCurveFloat*>                         AttackBlinkCurves;                                        // 0x0B98(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UCurveFloat*>                         AttackAmbushCurves;                                       // 0x0BA8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UCurveFloat*>                         AttackPounceCurves_StalkTier0;                            // 0x0BB8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UCurveFloat*>                         AttackPounceCurves_StalkTier1;                            // 0x0BC8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UCurveFloat*>                         AttackPounceCurves_StalkTier2;                            // 0x0BD8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              _pitchOffsetForInteractionPriority;                       // 0x0BE8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsInteracting;                                            // 0x0BEC(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData11[0x3];                                       // 0x0BED(0x0003) MISSED OFFSET
	float                                              ClearPathTestRadiusMultiplier;                            // 0x0BF0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ClearPathTestHeightMultiplier;                            // 0x0BF4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LocationClearTestRadiusMultiplier;                        // 0x0BF8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LocationClearTestHeightMultiplier;                        // 0x0BFC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData12[0x10];                                      // 0x0C00(0x0010) MISSED OFFSET
	float                                              ClearPathTestStepHeight;                                  // 0x0C10(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GamePadTurnRate;                                          // 0x0C14(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              GamePadLookUpRate;                                        // 0x0C18(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MouseTurnSpeedMultiplier;                                 // 0x0C1C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MouseLookUpSpeedMultiplier;                               // 0x0C20(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData13[0x4];                                       // 0x0C24(0x0004) MISSED OFFSET
	class USoundCue*                                   DeathSound;                                               // 0x0C28(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ECamperState>                          CurrentCamperState;                                       // 0x0C30(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData14[0x7];                                       // 0x0C31(0x0007) MISSED OFFSET
	struct FName                                       CollectableAttachPoint;                                   // 0x0C38(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class ACollectable*>                        Inventory;                                                // 0x0C40(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<class UPerk*>                               _perks;                                                   // 0x0C50(0x0010) (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Transient)
	TArray<struct FOffering>                           _offerings;                                               // 0x0C60(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor)
	TArray<class UStatusEffect*>                       _statusEffects;                                           // 0x0C70(0x0010) (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Transient)
	TMap<class AActor*, class UFlashLightComponent*>   _blindingEffectors;                                       // 0x0C80(0x0050) (ExportObject, ZeroConstructor, Transient)
	class UStateMachine*                               _SM;                                                      // 0x0CD0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UPlayerInteractionHandler*                   _interactionHandler;                                      // 0x0CD8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UMontagePlayer*                              _montagePlayer;                                           // 0x0CE0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UPerkManager*                                _perkManager;                                             // 0x0CE8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UDBDPlayerData*                              _playerData;                                              // 0x0CF0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UAxisFlickMasher*                            _wiggleAxisFlickMasher;                                   // 0x0CF8(0x0008) (Edit, ExportObject, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UInputMasher*                                _interactInputMasher;                                     // 0x0D00(0x0008) (Edit, ExportObject, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData15[0x78];                                      // 0x0D08(0x0078) MISSED OFFSET
	class AInteractable*                               _interactable;                                            // 0x0D80(0x0008) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData16[0x50];                                      // 0x0D88(0x0050) MISSED OFFSET
	TArray<class ADBDPlayer*>                          _overlappingPlayers;                                      // 0x0DD8(0x0010) (ZeroConstructor, Transient)
	class ADBDPlayer*                                  _guidingPlayer;                                           // 0x0DE8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData17[0x8];                                       // 0x0DF0(0x0008) MISSED OFFSET
	class ADBDPlayer*                                  _interactingPlayer;                                       // 0x0DF8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData18[0x24];                                      // 0x0E00(0x0024) MISSED OFFSET
	TEnumAsByte<EAttackSubstate>                       _nextAttackSubstate;                                      // 0x0E24(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData19[0x3];                                       // 0x0E25(0x0003) MISSED OFFSET
	TWeakObjectPtr<class ADBDPlayer>                   _lockOnTarget;                                            // 0x0E28(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TWeakObjectPtr<class ADBDPlayer>                   _damageTarget;                                            // 0x0E30(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UCharacterSnappingComponent*                 _characterSnappingComponent;                              // 0x0E38(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCharacterDreamworldComponent*               _dreamworldComponent;                                     // 0x0E40(0x0008) (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UCameraHandlerComponent*                     _cameraHandlerComponent;                                  // 0x0E48(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class USceneComponent*                             _itemDropOffPosition;                                     // 0x0E50(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData20[0x8];                                       // 0x0E58(0x0008) MISSED OFFSET
	struct FDataTableProxy                             TunableDB;                                                // 0x0E60(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDataTableProxy                             GlobalTunableDB;                                          // 0x0E90(0x0030) (Transient)
	TArray<class AActor*>                              _ignoreActors;                                            // 0x0EC0(0x0010) (ZeroConstructor, Transient)
	TArray<class AActor*>                              _ignoreBelowActors;                                       // 0x0ED0(0x0010) (ZeroConstructor, Transient)
	TArray<class AActor*>                              _overlappingActors;                                       // 0x0EE0(0x0010) (ZeroConstructor, Transient)
	TArray<struct FEffectCameraTypeSettings>           EffectCameraTypeSettings;                                 // 0x0EF0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData21[0x4];                                       // 0x0F00(0x0004) MISSED OFFSET
	struct FDBDTimer                                   _postChaseTimer;                                          // 0x0F04(0x0020) (Transient)
	unsigned char                                      UnknownData22[0x2C];                                      // 0x0F24(0x002C) MISSED OFFSET
	class UPollableEventListener*                      _eventListener;                                           // 0x0F50(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData23[0x50];                                      // 0x0F58(0x0050) MISSED OFFSET
	class UZoneDetectorComponent*                      _meatHookZoneDetector;                                    // 0x0FA8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData24[0x90];                                      // 0x0FB0(0x0090) MISSED OFFSET
	class UInteractionDefinition*                      _bookmarkedInteraction;                                   // 0x1040(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	TMap<TEnumAsByte<EDetectionZone>, class UPrimitiveComponent*> _detectionZoneMap;                                        // 0x1048(0x0050) (ExportObject, ZeroConstructor, Transient)
	unsigned char                                      UnknownData25[0x28];                                      // 0x1098(0x0028) MISSED OFFSET
	class UAuthoritativeMovementComponent*             _authoritativeMovementComponent;                          // 0x10C0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData26[0xB8];                                      // 0x10C8(0x00B8) MISSED OFFSET
	float                                              _blindnessRemainingTime;                                  // 0x1180(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData27[0x8];                                       // 0x1184(0x0008) MISSED OFFSET
	struct FDBDTimer                                   _recentlyBlindedTimer;                                    // 0x118C(0x0020) (Transient)
	unsigned char                                      UnknownData28[0x12C];                                     // 0x11AC(0x012C) MISSED OFFSET
	float                                              _screenAspectRatio;                                       // 0x12D8(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData29[0x24];                                      // 0x12DC(0x0024) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.DBDPlayer");
		return ptr;
	}


	void UseInventoryItem();
	void UpdateLoadoutFromInventory();
	bool TryInteractionType(TEnumAsByte<EInputInteractionType> interactionInputType, class ADBDPlayer* Requester, bool usingInputPersistence);
	bool TryInteraction(class UInteractionDefinition* Interaction, class ADBDPlayer* Requester, bool Force, bool usingInputPersistence);
	bool TryFireScoreEvent(TEnumAsByte<EDBDScoreTypes> ScoreType, float PercentToAward);
	void TriggerTrapImmunity(float duration);
	void TriggerAnimNotify(TEnumAsByte<EAnimNotifyType> animNotifyType);
	void ToggleGhost();
	bool TeleportToBP(const struct FVector& DestLocation, const struct FRotator& DestRotation, bool bIsATest, bool bNoCheck);
	void StoreItem();
	void StopSnap(bool snap);
	void StopMontage();
	void StopAllMovement();
	void StartDrop(class ACollectable* Item);
	class ACollectable* SpawnCollectedItem(const struct FName& ItemId);
	void SnapCharacter(bool snapPosition, const struct FVector& Position, float stopSnapDistance, bool snapRotation, const struct FRotator& Rotation, float Time, bool useZCoord, bool sweepOnFinalSnap);
	bool ShouldFall();
	void SetYawScale(float yawScale, float adjustTime);
	void SetWorldCollisionResponse(TEnumAsByte<ECollisionResponse> Response);
	void SetRightFootAudioSurfaceName(const class FString& Name);
	void SetReverseMontage(bool Reverse);
	void SetPlayerDirection(const struct FRotator& Rotation);
	void SetPitchScale(float yawScale, float adjustTime);
	void SetPawnAuthoritativeMovement(bool authoritative);
	void SetLeftFootAudioSurfaceName(const class FString& Name);
	void SetIsCloaked(bool IsCloaked, bool Forced);
	void SetInStalkMode(bool stalkMode, bool Forced);
	void SetInParadise(bool inParadise);
	void SetIgnoreActorCollision(class AActor* ActorToIgnore, bool ignore);
	void SetGuidingPlayer(class ADBDPlayer* guidingPlayer);
	void SetForceDisableSkillChecks(bool IsEnabled);
	void SetFirstPersonVfxsVisibility(bool isFirstPerson);
	void SetFirstPersonModelEnabled(bool Enabled, bool Force);
	void SetFeetOnGround(bool feetOnGround);
	void SetEnableServerPositionUpdates(bool enable);
	void SetDetectionZoneEnabled(TEnumAsByte<EDetectionZone> detectionZoneID, bool Enabled);
	void SetCurrentInteractionAnimation(TEnumAsByte<EInteractionAnimation> Animation);
	void SetCharacterAudioSurfaceName(const class FString& Name);
	void SetAuthoritativeMovementFlag(TEnumAsByte<EAuthoritativeMovementFlag> flagIndex, bool Enabled);
	void SetAnimationCrouchState(bool crouched);
	void SetAllowNavigation(bool enable);
	void SetAllDetectionZonesEnabled(bool Enabled);
	void ServerResetMeshRelativeOffSet();
	void Server_UpdateScreenAspectRatio(float Value);
	void Server_TeleportTo(const struct FVector& DestLocation, const struct FRotator& DestRotation, bool bIsATest, bool bNoCheck);
	void Server_SpawnStatusEffect(const struct FName& statusEffectID);
	void Server_SpawnPerk(const struct FName& PerkID, int PerkLevel);
	void Server_SpawnItemAddon(const struct FName& AddonID);
	void Server_SpawnItem(const struct FName& ItemId);
	void Server_SetWindowFreeCam(bool Enabled);
	void Server_SetSlasherAutoAttackOnCamperInteractFrameDelay(int frames);
	void Server_SetRunVaultEnabled(bool Enabled);
	void Server_SetReverseTraverseEnabled(bool Enabled);
	void Server_SetMaxWalkSpeed(float MaxWalkSpeed);
	void Server_SetForceAuthoritativeMovement(bool Value);
	void Server_SetEthereal(bool Enabled);
	void Server_SetEnableServerPositionUpdates(bool Enabled);
	void Server_SetEnableCapsuleDynamicResize(bool Enabled);
	void Server_SetDebugSnapPoint(bool Enabled);
	void Server_SetDebugPrintAvailableInteractions(bool Enabled);
	void Server_SetDebugFailAllInteractions(bool Enabled);
	void Server_SetDebugCarry(bool Enabled);
	void Server_SetCustomization(TArray<struct FName> customizationParts);
	void Server_SetContinuousPrintDebug(bool Enabled);
	void Server_SetAuthoritativeMovement(bool Enabled);
	void Server_SendSecondaryActionPressed();
	void Server_SendItemUseInput(bool Pressed);
	void Server_SendItemUse(bool Use);
	void Server_SendItemDropInput(bool Pressed);
	void Server_SendInteractionInput(bool Pressed);
	void Server_SendFastInteractionInput(bool Pressed);
	void Server_RemoveStatusEffects();
	void Server_RemoveStatusEffectByID(const struct FName& statusEffectID, bool bRemoveAllWithID);
	void Server_RemovePerks();
	void Server_PlayerReady();
	void Server_OnMovementInput(class ADBDPlayer* Player);
	void Server_OnInsaneSkillCheck();
	void Server_Ghost(bool Ghost);
	void Server_FailInterruption(class ADBDPlayer* interruptee);
	void Server_Drop(class ACollectable* Item, const struct FVector& Location, const struct FRotator& Rotation, bool onDeath);
	void Server_CheatDispatchOnPostItemAddonsCreation();
	void Server_Cheat();
	void ResetYawScale(float adjustTime);
	void ResetPitchScale(float adjustTime);
	void ResetMeshRelativeRotation();
	void ResetMeshRelativePosition();
	void ResetCamera();
	void RemoveStatusEffect(class UStatusEffect* StatusEffect);
	void RemoveFromInventory(class ACollectable* Item);
	void RemoveAllStatusEffects();
	class UAnimMontage* PlayMontage(const struct FAnimationMontageDescriptor& animMontageID, float PlayRate, bool isFollower);
	void OnPickupStart(class ADBDPlayer* Target);
	void OnPickupEnd(class ADBDPlayer* Target);
	void OnPawnDetectorOverlapExit(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void OnPawnDetectorOverlapEnter(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void OnLocallyObservedChanged();
	void OnLevelReadyToPlay();
	void OnInterruptedStart();
	void OnInsaneSkillCheck();
	void OnHeadHidden(bool hidden);
	void OnEscapeDoorActivated();
	void OnCurrentMontageComplete(class UAnimMontage* MontageAsset, bool interrupted);
	void OnCurrentMontageBlendingOut(class UAnimMontage* MontageAsset, bool interrupted);
	void OnClientRestart();
	void OnBlindChargeEmptied();
	void OnAttackFinished(TEnumAsByte<EAttackType> attackType);
	void OnAllPlayerLoaded();
	void NotifyMoriUpdateStart();
	void NotifyMoriFinished();
	void Multicast_TriggerSprintWithParams(float duration, class UCurveFloat* Curve, const struct FName& effector);
	void Multicast_TriggerSprint();
	void Multicast_SetWindowFreeCam(bool Enabled);
	void Multicast_SetRunVaultEnabled(bool Enabled);
	void Multicast_SetReverseTraverseEnabled(bool Enabled);
	void Multicast_SetMaxWalkSpeed(float MaxWalkSpeed);
	void Multicast_SetInteractingPlayer(class ADBDPlayer* interactingPlayer);
	void Multicast_SetForceAuthoritativeMovement(bool Value);
	void Multicast_SetEthereal(bool Enabled);
	void Multicast_SetEnableServerPositionUpdates(bool Enabled);
	void Multicast_SetEnableCapsuleDynamicResize(bool Enabled);
	void Multicast_SetDebugSnapPoint(bool Enabled);
	void Multicast_SetDebugPrintAvailableInteractions(bool Enabled);
	void Multicast_SetDebugCarry(bool Enabled);
	void Multicast_SetCustomization(TArray<struct FName> customizationParts);
	void Multicast_SetContinuousPrintDebug(bool Enabled);
	void Multicast_SetAuthoritativeMovement(bool Enabled);
	void Multicast_ServerResetMeshRelativeOffSet();
	void Multicast_RemoveFromInventory(class ACollectable* Item);
	void Multicast_PlayMontage(const struct FAnimationMontageDescriptor& animMontageID, float PlayRate);
	void Multicast_OnInsaneSkillCheck();
	void Multicast_LockOnTarget(class ADBDPlayer* Target);
	void Multicast_LeaveGame(const struct FGuid& uniqueLeavingPlayerId);
	void Multicast_InteractionRollResult(bool rollResult);
	void Multicast_Ghost(bool Ghost);
	void Multicast_DamageTarget(class ADBDPlayer* Target, TEnumAsByte<EAttackType> attackType);
	void Multicast_ConfirmItemDrop(bool Pressed);
	void Multicast_ClearAndDestroyInventory();
	void Multicast_AttackSubstate(TEnumAsByte<EAttackSubstate> attackSubstate);
	void Multicast_AttackBegin(TEnumAsByte<EAttackType> attackType);
	void Multicast_AddToInventory(class ACollectable* Item);
	void Local_RequestBlink(const struct FTransform& Destination);
	void Local_NotifyMatchEnded();
	bool LineTraceSingleForFootIK(const struct FVector& Start, const struct FVector& End, bool traceComplex, struct FHitResult* OutHit);
	bool K2_SetActorLocationByBottomCapsule(const struct FVector& NewLocation, bool bSweep, struct FHitResult* SweepHitResult);
	bool IsUsingAimItem();
	bool IsUnintentionallyIncapacitated();
	bool IsStrafing();
	bool IsSprinting();
	bool IsSnappingRotation();
	bool IsSnappingPosition();
	bool IsSnapping();
	bool IsRunningAndMoving();
	bool IsRunning();
	bool IsPlayingMontage(const struct FAnimationMontageDescriptor& animMontageID);
	bool IsPlayingAnyMontage();
	bool IsLocationClear(const struct FVector& targetPosition);
	bool IsLocallyObserved();
	bool IsInTerrorRadius();
	bool IsInteractionInputPressed(TEnumAsByte<EInputInteractionType> InteractionType);
	bool IsInStalkMode();
	bool IsInsideCloset();
	bool IsInParadise();
	bool IsInMeathookZone();
	bool IsInDreamworld();
	bool IsInChaseCooldown();
	bool IsInChase();
	bool IsIncapacitated();
	bool IsHeadHidden();
	bool IsFacing(const struct FVector& Direction);
	bool IsExhausted();
	bool IsCrouching();
	bool IsCloaked();
	bool IsBlinded();
	bool IsBeingInterrupted();
	bool IsAllowedNavigation();
	void HideHead(bool hide);
	bool HasTrapImmunity();
	bool HasMoveInput();
	bool HasMaximumItemCount(class ACollectable* Item);
	bool HasItem();
	bool HasInInventory(class UClass* Item);
	bool HasEquippedItem();
	bool HasDamageImmunity();
	bool HasClearPathToTargetWithIgnore(const struct FVector& targetPosition, TArray<class AActor*> ignoreActors);
	bool HasClearPathToTarget(const struct FVector& targetPosition);
	bool HasClearPathToItemDropOffPosition();
	bool HasAnimMontageEnded();
	bool GetWindowFreeCam();
	float GetTunableValue(const struct FName& Key, float DefaultValue, bool warnIfRowMissing);
	float GetStamina();
	struct FName GetSprintEffector();
	float GetSprintDurationTimerPercentage();
	bool GetRunVaultEnabled();
	class FString GetRightFootAudioSurfaceName();
	bool GetReverseTraverseEnabled();
	struct FRotator GetRepControlRotation();
	float GetRemainingTrapImmunityDuration();
	float GetProgressToEscapeCarry(class ADBDPlayer* Player);
	TEnumAsByte<EPlayerRole> GetPlayerRole();
	class UPlayerInteractionHandler* GetPlayerInteractionHandler();
	struct FRotator GetPlayerDirection();
	class ADBDPlayerController* GetPlayerController();
	class UCameraComponent* GetPlayerCamera();
	class UPerkManager* GetPerkManager();
	float GetPercentMovementSpeed();
	float GetPercentBlinded();
	bool GetNearbyGroundLocation(struct FVector* groundLocation);
	class FString GetNameDebugString();
	class UMontagePlayer* GetMontagePlayer();
	float GetMontageLength(const struct FAnimationMontageDescriptor& animMontageID);
	class UAnimMontage* GetMontage(const struct FAnimationMontageDescriptor& animMontageID);
	struct FVector GetMeshFeetPosition();
	float GetMaxSpeed();
	float GetLuck();
	class FString GetLeftFootAudioSurfaceName();
	struct FVector GetLastSafeLocation();
	TArray<class UItemModifier*> GetItemModifiers();
	struct FName GetItemID();
	class USceneComponent* GetItemDropOffTransform();
	int GetItemCountByID(const struct FName& ItemId);
	int GetItemCount();
	TArray<class UItemAddon*> GetItemAddons();
	class ACollectable* GetItem();
	bool GetIsInterrupting();
	bool GetIsInteracting();
	bool GetIsBeyondCrouchWalkSpeed();
	bool GetInteractionRollResult();
	struct FInteractionPlayerProperties GetInteractionPlayerProperties();
	float GetInteractingMaxSpeedPercent();
	class AInteractable* GetInteractable();
	class ADBDPlayer* GetGuidingPlayer();
	bool GetForceDisableSkillChecks();
	class UActorComponent* GetFirstComponentByClass(class UClass* ComponentClass);
	struct FVector GetFeetPositionAtTargetLocation(const struct FVector& Location);
	struct FVector GetFeetPosition();
	bool GetFeetOnGround();
	bool GetEnableServerPositionUpdates();
	class UCharacterDreamworldComponent* GetDreamworldComponent();
	class UPrimitiveComponent* GetDetectionZone(TEnumAsByte<EDetectionZone> detectionZoneID);
	bool GetDebugPrintAvailableInteractions();
	bool GetDebugFailAllInteractions();
	class ADBDPlayerState* GetDBDPlayerState();
	class UCustomizedSkeletalMesh* GetCustomizedSkeletalMesh();
	TEnumAsByte<EInteractionAnimation> GetCurrentInteractionAnimation();
	class UInteractionDefinition* GetCurrentInteraction();
	TEnumAsByte<EAttackType> GetCurrentAttackType();
	struct FRotator GetControlRotation();
	bool GetContinuousPrintDebug();
	float GetChaseCooldownTimeElapsed();
	float GetChaseCooldownDuration();
	class UCharacterSnappingComponent* GetCharacterSnappingComponent();
	class FString GetCharacterNameAnimTag();
	class FString GetCharacterAudioSurfaceName();
	struct FVector GetCapsuleTopPosition();
	struct FVector GetCapsuleBottomPosition();
	class ADBDPlayerCameraManager* GetCameraManager();
	struct FVector GetCameraLocation();
	struct FVector GetCameraAnchorLocation();
	struct FVector GetBoneRelativeLocation(const struct FName& TargetBone, const struct FName& relativeBone);
	struct FVector GetBoneLocation(const struct FName& Name, TEnumAsByte<EBoneSpaces> space);
	float GetBlinkTime();
	float GetBaseFOV();
	struct FVector GetAverageVelocity();
	class UAuthoritativeMovementComponent* GetAuthoritativeMovementComponent();
	class UAkComponent* GetAudioComponent();
	TEnumAsByte<EAttackType> GetAttackMontageEvent();
	class USceneComponent* GetAttachPoint(const struct FName& attachPointName);
	void GetAnimTags(TArray<struct FName>* outTags);
	class UAnimInstance* GetAnimInstanceConst();
	class UAnimInstance* GetAnimInstance();
	struct FAnimData GetAnimData();
	struct FVector GetAlmostCurrentVelocity();
	struct FVector GetActorLocationFromFeetLocation(const struct FVector& FeetLocation);
	struct FVector FindFurthestClearLocationBetweenPoints(const struct FVector& StartPosition, const struct FVector& targetPosition);
	void EquipItem();
	void Drop(class ACollectable* Item, const struct FVector& Location, const struct FRotator& Rotation, bool onDeath, bool adjustToGround);
	void Dissolve(bool Dissolve);
	void DetachInteractor();
	void DebugPrint(const class FString& inString);
	void DeactivateSkillChecks();
	void DBDUnCrouch();
	void DBDLog(const class FString& LogText);
	void DBDCrouch();
	void DBD_TogglePrintServerPositionUpdateEnabled();
	void DBD_ToggleForceAuthoritativeMovement();
	void DBD_ToggleDebugInteractionInZone();
	void DBD_SetMouseTurnSpeedMultiplier(float Value);
	void DBD_SetMouseLookUpSpeedMultiplier(float Value);
	void DBD_SetGamePadTurnRate(float Value);
	void DBD_SetGamePadLookUpRate(float Value);
	void DBD_DebugStartInteraction();
	void ConsumeStamina(float Stamina);
	void Collect(class ACollectable* Item);
	void Client_TryInteractionType(TEnumAsByte<EInputInteractionType> InteractionType, class ADBDPlayer* Requester);
	void Client_SendCancelInteraction();
	void Client_QueueInteraction(TEnumAsByte<EInputInteractionType> InteractionType, class ADBDPlayer* Requester, float queuedTimer);
	void Client_DebugAutoInteract(bool Enabled);
	void Client_ClearInteractionQueue();
	void ClearAndDestroyInventory();
	bool CanSprint();
	bool CanInterrupt_BP();
	bool CanInteractWithItems();
	bool CanInteract();
	bool CanAttack_BP();
	bool CanAttack();
	void CameraUpdated();
	void Broadcast_PlayMontage_Server(const struct FAnimationMontageDescriptor& animMontageID, float PlayRate);
	void Broadcast_PlayMontage_Multicast(const struct FAnimationMontageDescriptor& animMontageID, float PlayRate);
	void Broadcast_Multicast_BlinkDestination(const struct FVector& Position, const struct FRotator& Rotation);
	void Broadcast_LockOnTarget_Server(class ADBDPlayer* Target);
	void Broadcast_LockOnTarget_Multicast(class ADBDPlayer* Target);
	void Broadcast_DamageTarget_Server(class ADBDPlayer* Target, TEnumAsByte<EAttackType> attackType);
	void Broadcast_DamageTarget_Multicast(class ADBDPlayer* Target, TEnumAsByte<EAttackType> attackType);
	void Broadcast_BlinkDestination(const struct FVector& Position, const struct FRotator& Rotation);
	void Broadcast_AttackSubstate_Server(TEnumAsByte<EAttackSubstate> attackSubstate);
	void Broadcast_AttackSubstate_Multicast(TEnumAsByte<EAttackSubstate> attackSubstate);
	void AuthorityTriggerSprintWithParams(float duration, float coolDown, class UCurveFloat* Curve, const struct FName& effector);
	void AuthorityTriggerSprint();
	bool Authority_TryForceEndOngoingScoreEvent(TEnumAsByte<EDBDScoreTypes> ScoreType);
	bool Authority_TryForceCancelOngoingScoreEvent(TEnumAsByte<EDBDScoreTypes> ScoreType);
	void Authority_RequestStun(TEnumAsByte<EStunType> stunType, class ADBDPlayer* stunner);
	void Authority_RemoveStatusEffectByID(const struct FName& statusEffectID, bool bRemoveAllWithID);
	class UStatusEffect* Authority_ImposeUniqueStatusEffect(const struct FName& statusEffectID, class ADBDPlayer* originatingPlayer, float customParam, class UGameplayModifierContainer* originatingEffect);
	class UStatusEffect* Authority_ImposeStatusEffect(const struct FName& statusEffectID, class ADBDPlayer* originatingPlayer, float customParam, class UGameplayModifierContainer* originatingEffect);
	class UStatusEffect* Authority_ImposeDynamicStatusEffect(const struct FName& statusEffectID, class ADBDPlayer* originatingPlayer, float customParam, class UGameplayModifierContainer* originatingEffect);
	void Authority_Flashlighted(TArray<class AActor*> instigators);
	void Authority_Blinded(TEnumAsByte<EBlindType> blindType, float coolDown, class AActor* effector);
	void Authority_AttemptEscapeCarry(class ACamperPlayer* Player);
	void Authority_ActivateAuthoritativeMovementOnDropped();
	void AttachInteractor(class UInteractor* Interactor);
	void AddToInventory(class ACollectable* Item);
	void AddStatusEffect(class UStatusEffect* StatusEffect);
	void AddPerk(class UPerk* Perk);
	void AddDetectionZone(TEnumAsByte<EDetectionZone> detectionZoneID, class UPrimitiveComponent* zone);
};


// Class DeadByDaylight.AuthoritativeMovementComponent
// 0x0040 (0x0128 - 0x00E8)
class UAuthoritativeMovementComponent : public UActorComponent
{
public:
	TArray<class ADBDPlayer*>                          _playersToPush;                                           // 0x00E8(0x0010) (ZeroConstructor, Transient)
	TArray<class ADBDPlayer*>                          _stopIgnorePlayerOnEndOverlap;                            // 0x00F8(0x0010) (ZeroConstructor, Transient)
	TArray<class ADBDPlayer*>                          _ignorePlayers;                                           // 0x0108(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0118(0x0008) MISSED OFFSET
	class UCapsuleComponent*                           _pawnDetector;                                            // 0x0120(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.AuthoritativeMovementComponent");
		return ptr;
	}


	void SetPawnDetector(class UCapsuleComponent* pawnDetector);
	void OnPawnDetectorOverlapExit(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void OnPawnDetectorOverlapEnter(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void OnOverlapExit(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void OnOverlapEnter(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
};


// Class DeadByDaylight.AutoQualityAdjuster
// 0x0028 (0x03A8 - 0x0380)
class AAutoQualityAdjuster : public AActor
{
public:
	float                                              TargetResolutionScale;                                    // 0x0380(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinimumMS;                                                // 0x0384(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaximumMS;                                                // 0x0388(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ScaleIncreaseRate;                                        // 0x038C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ScaleDecreaseRate;                                        // 0x0390(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinimumAllowableScale;                                    // 0x0394(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0398(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.AutoQualityAdjuster");
		return ptr;
	}

};


// Class DeadByDaylight.AxisFlick
// 0x0068 (0x0090 - 0x0028)
class UAxisFlick : public UObject
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x0028(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.AxisFlick");
		return ptr;
	}

};


// Class DeadByDaylight.AxisFlickMasher
// 0x0078 (0x0160 - 0x00E8)
class UAxisFlickMasher : public UActorComponent
{
public:
	class UInputComponent*                             _inputComponent;                                          // 0x00E8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x00F0(0x0008) MISSED OFFSET
	class UAxisFlick*                                  _axisFlick1;                                              // 0x00F8(0x0008) (ZeroConstructor, IsPlainOldData)
	class UAxisFlick*                                  _axisFlick2;                                              // 0x0100(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x58];                                      // 0x0108(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.AxisFlickMasher");
		return ptr;
	}


	void OnAxisFlicked2();
	void OnAxisFlicked1();
};


// Class DeadByDaylight.BaseProjectileLauncher
// 0x0058 (0x0140 - 0x00E8)
class UBaseProjectileLauncher : public UActorComponent
{
public:
	class UClass*                                      ProjectileClass;                                          // 0x00E8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                ammo;                                                     // 0x00F0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxAmmo;                                                  // 0x00F4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                PoolSize;                                                 // 0x00F8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00FC(0x0004) MISSED OFFSET
	TArray<class ABaseProjectile*>                     _projectiles;                                             // 0x0100(0x0010) (Net, ZeroConstructor, Transient)
	unsigned char                                      UnknownData01[0x28];                                      // 0x0110(0x0028) MISSED OFFSET
	class ABaseProjectile*                             _debugProjectile;                                         // 0x0138(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.BaseProjectileLauncher");
		return ptr;
	}


	void SetProjectileVar(const struct FName& VarName, float Value);
	void OnReload(int ammo);
	void OnLaunch(const struct FLaunchInfo& LaunchInfo);
	void Local_SetMaxAmmo(int newMaxAmmo);
	void Local_Reload(int ammoToAdd);
	void Local_Launch();
	bool IsLocallyControlled();
	bool HasProjectile();
	bool HasAuthority();
	class ABaseProjectile* GetProjectileToLaunch();
	class ADBDPlayer* GetPlayerOwner();
	class ABaseProjectile* GetOldestProjectile();
	int GetMaxAmmo();
	float GetLaunchSpeed();
	struct FVector GetLaunchPosition();
	struct FVector GetLaunchDirection();
	class ABaseProjectile* GetFirstAvailableProjectile();
	int GetAmmo();
	void Broadcast_SetMaxAmmo_Server(int8_t newMaxAmmo);
	void Broadcast_SetMaxAmmo_Multicast(int8_t newMaxAmmo);
	void Broadcast_Reload_Server(int8_t ammoToAdd);
	void Broadcast_Reload_Multicast(int8_t ammoToAdd);
	void Broadcast_Launch_Server(const struct FLaunchInfo& LaunchInfo);
	void Broadcast_Launch_Multicast(const struct FLaunchInfo& LaunchInfo);
	void Authority_OnProjectileDestroyed(class AActor* DestroyedActor);
	void Authority_CleanProjectilePool(class AActor* DestroyedActor);
};


// Class DeadByDaylight.BaseProjectile
// 0x0010 (0x0390 - 0x0380)
class ABaseProjectile : public AActor
{
public:
	TWeakObjectPtr<class UBaseProjectileLauncher>      _projectileLauncher;                                      // 0x0380(0x0008) (ExportObject, Net, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0388(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.BaseProjectile");
		return ptr;
	}


	bool SphereTraceSingle(const struct FVector& Start, const struct FVector& End, class USphereComponent* Sphere, struct FHitResult* outHitResult);
	void SetActive(bool Active);
	void OnSetActive(bool Active);
	void OnRep_ProjectileLauncher();
	void OnLaunch(const struct FLaunchInfo& LaunchInfo);
	void OnInitialize(class UBaseProjectileLauncher* projectileLauncher);
	void OnDetectPlayer(const struct FImpactInfo& ImpactInfo);
	void OnDetectCollision(const struct FImpactInfo& ImpactInfo);
	void Multicast_Launch(const struct FLaunchInfo& LaunchInfo);
	void Multicast_DetectPlayer(const struct FImpactInfo& ImpactInfo);
	void Multicast_DetectImpact(const struct FImpactInfo& ImpactInfo);
	bool LineTraceSingle(const struct FVector& Start, const struct FVector& End, struct FHitResult* outHitResult);
	bool IsValidPlayerDetection(const struct FImpactInfo& ImpactInfo);
	bool IsValidImpactDetection(const struct FImpactInfo& ImpactInfo);
	bool IsAvailable();
	bool IsActive();
	class UBaseProjectileLauncher* GetProjectileLauncher();
	class UPrimitiveComponent* GetImpactPrimitiveComponent();
	struct FCollisionResponseContainer GetImpactCollisionResponseContainer();
	TEnumAsByte<ECollisionChannel> GetImpactCollisionObjectType();
	bool Authority_TryDetectPlayer(const struct FImpactInfo& ImpactInfo);
	bool Authority_TryDetectCollision(const struct FImpactInfo& ImpactInfo, bool Force);
	void Authority_Launch(const struct FLaunchInfo& LaunchInfo);
};


// Class DeadByDaylight.Fadeable
// 0x0000 (0x0028 - 0x0028)
class UFadeable : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.Fadeable");
		return ptr;
	}


	void OnFadeEnd(class AActor* Other);
	void OnFadeBegin(class AActor* Other);
	void OnAlphaChanged(float newAlpha, class AActor* Other);
};


// Class DeadByDaylight.BaseSky
// 0x0010 (0x0390 - 0x0380)
class ABaseSky : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0380(0x0008) MISSED OFFSET
	bool                                               AdjustCullDistance;                                       // 0x0388(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0389(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.BaseSky");
		return ptr;
	}


	void SetCullDistance(float NewCullDistance);
	void OnFadeEnd(class AActor* Other);
	void OnFadeBegin(class AActor* Other);
	void OnAlphaChanged(float newAlpha, class AActor* Other);
	class UPostProcessComponent* GetPostprocessComponent();
};


// Class DeadByDaylight.BlinkerComponent
// 0x0020 (0x0108 - 0x00E8)
class UBlinkerComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x00E8(0x0004) MISSED OFFSET
	float                                              _rayCastZOffet;                                           // 0x00EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              _rayCastLength;                                           // 0x00F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x14];                                      // 0x00F4(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.BlinkerComponent");
		return ptr;
	}


	struct FVector UpdateTargetLocation(class ADBDPlayer* Player, float blinkDistance, TArray<float> scanPercentLocations);
	void SetBlinkerState(TEnumAsByte<EBlinkerState> blinkerState);
	struct FVector LocalAddRandomToTargetLocation(class ADBDPlayer* Player, const struct FVector& TargetLocation, float Distance);
	bool IsReady();
	TEnumAsByte<EBlinkerState> GetBlinkerState();
	float GetAutomaticBlinkDelay(int chainBlinkCount);
};


// Class DeadByDaylight.BloodDecalEffectIntensity
// 0x0018 (0x0040 - 0x0028)
class UBloodDecalEffectIntensity : public UDataAsset
{
public:
	struct FColor                                      IntensifyBloodColor;                                      // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FColor                                      IntensifyBloodColor2;                                     // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FColor                                      IntensifyBloodColorEmissive;                              // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              IntensifyBloodColorEmissiveMinimumIntensity;              // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              IntensifyBloodColorEmissiveMaximumIntensity;              // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.BloodDecalEffectIntensity");
		return ptr;
	}

};


// Class DeadByDaylight.BloodDecalEffect
// 0x0138 (0x04C0 - 0x0388)
class ABloodDecalEffect : public ADecalActor
{
public:
	class UCurveFloat*                                 AnimationTimelineCurve;                                   // 0x0388(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 DestroyTimelineCurve;                                     // 0x0390(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<class UTexture2D*>                          Textures;                                                 // 0x0398(0x0010) (Edit, ZeroConstructor)
	TArray<class UTexture2D*>                          Normals;                                                  // 0x03A8(0x0010) (Edit, ZeroConstructor)
	class UBloodDecalEffectIntensity*                  BloodDecalEffectIntensity;                                // 0x03B8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ColorInterpolationSpeed;                                  // 0x03C0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x03C4(0x0004) MISSED OFFSET
	class UMaterialInstanceDynamic*                    DynamicDecalMaterial;                                     // 0x03C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xF0];                                      // 0x03D0(0x00F0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.BloodDecalEffect");
		return ptr;
	}

};


// Class DeadByDaylight.BloodwebEntity
// 0x0098 (0x00C0 - 0x0028)
class UBloodwebEntity : public UObject
{
public:
	unsigned char                                      UnknownData00[0x98];                                      // 0x0028(0x0098) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.BloodwebEntity");
		return ptr;
	}

};


// Class DeadByDaylight.BloodwebGenerator
// 0x0138 (0x0160 - 0x0028)
class UBloodwebGenerator : public UObject
{
public:
	struct FRandomStream                               _randomizationStream;                                     // 0x0028(0x0008) (ZeroConstructor)
	TArray<class FString>                              _selectedNodes;                                           // 0x0030(0x0010) (ZeroConstructor)
	TArray<struct FName>                               _selectedContent;                                         // 0x0040(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0050(0x0050) MISSED OFFSET
	class UDBDBloodWebDefinition*                      _bloodWebDefinition;                                      // 0x00A0(0x0008) (ZeroConstructor, IsPlainOldData)
	class UDBDDesignTunables*                          _designTunables;                                          // 0x00A8(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              _alternativePathOccurenceFactor;                          // 0x00B0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00B4(0x0004) MISSED OFFSET
	TArray<int>                                        _rarityWeightDistributionTotals;                          // 0x00B8(0x0010) (ZeroConstructor)
	TArray<int>                                        _rarityRingWeightDistributionTotals;                      // 0x00C8(0x0010) (ZeroConstructor)
	int                                                _contentTypeWeightDistributionTotals;                     // 0x00D8(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x00DC(0x0004) MISSED OFFSET
	TArray<struct FNodeRarityDistribution>             _nodeRarityDistributionValue;                             // 0x00E0(0x0010) (ZeroConstructor)
	TArray<struct FRarityRingDistribution>             _rarityRingDistributionValue;                             // 0x00F0(0x0010) (ZeroConstructor)
	TArray<struct FNodeRarityDistribution>             _dbNodeRarityDistributionValue;                           // 0x0100(0x0010) (ZeroConstructor)
	TArray<int>                                        _nodeRarityPopulation;                                    // 0x0110(0x0010) (ZeroConstructor)
	TArray<struct FNodeContentDistribution>            _nodeContentTypeDistributionValue;                        // 0x0120(0x0010) (ZeroConstructor)
	TArray<struct FNodeContentDistribution>            _dbNodeContentTypeDistributionValue;                      // 0x0130(0x0010) (ZeroConstructor)
	TArray<int>                                        _nodeContentTypePopulation;                               // 0x0140(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData03[0x10];                                      // 0x0150(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.BloodwebGenerator");
		return ptr;
	}

};


// Class DeadByDaylight.BloodwebManager
// 0x01F8 (0x0220 - 0x0028)
class UBloodwebManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0xE8];                                      // 0x0028(0x00E8) MISSED OFFSET
	class UDBDGameInstance*                            _gameInstance;                                            // 0x0110(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UDBDDesignTunables*                          _designTunables;                                          // 0x0118(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UDBDBloodWebDefinition*                      _bloodWebDefinition;                                      // 0x0120(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UBloodwebGenerator*                          _bloodwebBuilder;                                         // 0x0128(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UBloodwebEntity*                             _entity;                                                  // 0x0130(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0xE8];                                      // 0x0138(0x00E8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.BloodwebManager");
		return ptr;
	}


	void Init(class UDBDGameInstance* GameInstance, class UDBDDesignTunables* Tunables);
};


// Class DeadByDaylight.BloodwebTester
// 0x0018 (0x0398 - 0x0380)
class ABloodwebTester : public AActor
{
public:
	class UDBDDesignTunables*                          _designTunables;                                          // 0x0380(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UDBDBloodWebDefinition*                      _bloodWebDefinition;                                      // 0x0388(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UBloodwebGenerator*                          _bloodwebBuilder;                                         // 0x0390(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.BloodwebTester");
		return ptr;
	}

};


// Class DeadByDaylight.DBDPlayerData
// 0x0020 (0x0108 - 0x00E8)
class UDBDPlayerData : public UActorComponent
{
public:
	bool                                               Blinded;                                                  // 0x00E8(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x00E9(0x000F) MISSED OFFSET
	struct FYawAndPitchRotator_NetQuantize16           _controlRotation;                                         // 0x00F8(0x000C) (Net)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0104(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.DBDPlayerData");
		return ptr;
	}


	void SetLoadoutSpawned();
	void SetLightSpawned();
	void SetIntroCompleted();
	void Server_SetIntroCompleted();
	void Server_SetControlRotation(const struct FRotator& Rotation);
	void Server_LoadoutSpawned();
	void Server_LightSpawned();
	bool IsLoadoutSpawned();
	bool IsLightSpawned();
	bool IsIntroCompleted();
	bool GetUseInputPressed();
	bool GetLeftRightInputMashed();
	bool GetInteractionInputMashed();
	struct FRotator GetControlRotation();
};


// Class DeadByDaylight.DBDCamperData
// 0x0048 (0x0150 - 0x0108)
class UDBDCamperData : public UDBDPlayerData
{
public:
	TEnumAsByte<ECamperDamageState>                    DamageState;                                              // 0x0108(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0109(0x0001) MISSED OFFSET
	TEnumAsByte<ECamperGuidedAction>                   CurrentGuidedAction;                                      // 0x010A(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x45];                                      // 0x010B(0x0045) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.DBDCamperData");
		return ptr;
	}


	TEnumAsByte<ECamperDamageState> GetDamageState();
	void DamageStateChanged();
};


// Class DeadByDaylight.CamperAnimInstance
// 0x0118 (0x0590 - 0x0478)
class UCamperAnimInstance : public UAnimInstance
{
public:
	class ACamperPlayer*                               CamperPlayer;                                             // 0x0478(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              MyDeltaTime;                                              // 0x0480(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               IsHooked;                                                 // 0x0484(0x0001) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               IsSacrificeStruggling;                                    // 0x0485(0x0001) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0486(0x0002) MISSED OFFSET
	class UAnimMontage*                                MontageMadnessTierUp;                                     // 0x0488(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<class UAnimCompositeBase*>                  ArrayCarryAttackMontage;                                  // 0x0490(0x0010) (Edit, ZeroConstructor)
	bool                                               IsBeingCarried;                                           // 0x04A0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               IsBeingPutOnHook;                                         // 0x04A1(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               IsCrouched;                                               // 0x04A2(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	TEnumAsByte<ECamperGuidedAction>                   GuidedAction;                                             // 0x04A3(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               IsTrapped;                                                // 0x04A4(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               IsCrawling;                                               // 0x04A5(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               IsDead;                                                   // 0x04A6(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x04A7(0x0001) MISSED OFFSET
	float                                              MaxSpeed;                                                 // 0x04A8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               IsInsideCloset;                                           // 0x04AC(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x04AD(0x0003) MISSED OFFSET
	float                                              IsPlayingMadnessTierUpWeight;                             // 0x04B0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               IsTotallyInsane;                                          // 0x04B4(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               IsBeingKilled;                                            // 0x04B5(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               IsCarryAttackSucess;                                      // 0x04B6(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               ShouldLookSleepy;                                         // 0x04B7(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               IsUsingAimItem;                                           // 0x04B8(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               IsHoldingAimItem;                                         // 0x04B9(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               AllowLookAt;                                              // 0x04BA(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x1];                                       // 0x04BB(0x0001) MISSED OFFSET
	float                                              DropStaggerTimeLeft;                                      // 0x04BC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              LeftArmIKAlpha;                                           // 0x04C0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              RightArmIKAlpha;                                          // 0x04C4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              LeftForeArmIKAlpha;                                       // 0x04C8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              RightForeArmIKAlpha;                                      // 0x04CC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	struct FTransform                                  LeftHandIKTransform;                                      // 0x04D0(0x0030) (BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData)
	struct FTransform                                  RightHandIKTransform;                                     // 0x0500(0x0030) (BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData)
	bool                                               Strafe;                                                   // 0x0530(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               IsInteracting;                                            // 0x0531(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               Injured;                                                  // 0x0532(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	TEnumAsByte<EInteractionAnimation>                 InteractionType;                                          // 0x0533(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	TEnumAsByte<EInteractionAnimation>                 PreviousInteractionType;                                  // 0x0534(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               IsSlasherInFPV;                                           // 0x0535(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x0536(0x0002) MISSED OFFSET
	float                                              CarriedAlpha;                                             // 0x0538(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               IsHoldingHandleItem;                                      // 0x053C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               IsHoldingSmallItem;                                       // 0x053D(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               IsHoldingFirecracker;                                     // 0x053E(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x1];                                       // 0x053F(0x0001) MISSED OFFSET
	float                                              Turning;                                                  // 0x0540(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData06[0xC];                                       // 0x0544(0x000C) MISSED OFFSET
	bool                                               InAir;                                                    // 0x0550(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x0551(0x0003) MISSED OFFSET
	float                                              Speed;                                                    // 0x0554(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              Direction;                                                // 0x0558(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              Pitch;                                                    // 0x055C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              Yaw;                                                      // 0x0560(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     RightFootEffectorLocation;                                // 0x0564(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     LeftFootEffectorLocation;                                 // 0x0570(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               Idle;                                                     // 0x057C(0x0001) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x057D(0x0003) MISSED OFFSET
	float                                              MyTime;                                                   // 0x0580(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData09[0xC];                                       // 0x0584(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.CamperAnimInstance");
		return ptr;
	}


	void NativeAudioSurvivorFootstepRight(class UAkAudioEvent* akEvent, class UAkAudioEvent* akEventNoise);
	void NativeAudioSurvivorFootstepLeft(class UAkAudioEvent* akEvent, class UAkAudioEvent* akEventNoise);
	bool IsUsingDeadHard();
};


// Class DeadByDaylight.CamperExposerInstance
// 0x0008 (0x0388 - 0x0380)
class ACamperExposerInstance : public AActor
{
public:
	bool                                               IsInterior;                                               // 0x0380(0x0001) (Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0381(0x0003) MISSED OFFSET
	float                                              AggravationLevel;                                         // 0x0384(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, EditConst, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.CamperExposerInstance");
		return ptr;
	}


	void StartSpawnSequence();
	void StartExitSequence();
	void SetIsInteriorBP(bool interior);
	void ExitSequenceComplete();
};


// Class DeadByDaylight.CharacterDreamworldComponent
// 0x0060 (0x0148 - 0x00E8)
class UCharacterDreamworldComponent : public UActorComponent
{
public:
	struct FScriptMulticastDelegate                    DreamStateChanged;                                        // 0x00E8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	bool                                               _isInDreamworld;                                          // 0x00F8(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               _showKillerGlimpse;                                       // 0x00F9(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x00FA(0x0002) MISSED OFFSET
	int                                                _wakeUpBySkillCheckCount;                                 // 0x00FC(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                _fellAsleepCount;                                         // 0x0100(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	struct FDBDTimer                                   _recentlyAsleepAttackTimer;                               // 0x0104(0x0020) (Transient)
	struct FDBDTimer                                   _showKillerGlimpseTimer;                                  // 0x0124(0x0020) (Transient)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0144(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.CharacterDreamworldComponent");
		return ptr;
	}


	void UpdateCharacterCollision();
	bool ShouldShowVignette();
	bool ShouldShowKillerGlimpse();
	bool ShouldLookSleepyToLocalPlayer();
	void Server_WakeUp();
	void Server_PutToSleep();
	void OnSlasherSet();
	void OnRep_IsInDreamworld(bool Previous);
	void OnKillerDreamStateChanged(bool locallyObservedChanged);
	bool IsInDreamworld();
	bool IsInBetweenWorlds();
	class ADBDPlayer* STATIC_GetLocallyObservedOrLocalCharacter(class UObject* WorldContextObject);
	float GetInBetweenWorldsPercentTimeElapsed();
	void FireWakeUpScoreEvent(class ADBDPlayer* Instigator);
	void Authority_WakeUpOrCancelTransition(class ADBDPlayer* Instigator);
	void Authority_SpawnInBetweenWorldsEffect();
	void Authority_SpawnDreamworldStatusEffect();
	void Authority_SetIsInDreamworld(bool NewValue, bool isScripted);
	void Authority_OnAttacked();
	void Authority_HandleSkillCheckFailure(bool wakeUpEveryoneInteracting, class ADBDPlayer* Instigator);
	int Authority_GetWakeUpBySkillCheckCount();
	int Authority_GetFellAsleepCount();
};


// Class DeadByDaylight.CharacterHelper
// 0x0000 (0x0028 - 0x0028)
class UCharacterHelper : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.CharacterHelper");
		return ptr;
	}

};


// Class DeadByDaylight.CharacterSnappingComponent
// 0x0060 (0x0148 - 0x00E8)
class UCharacterSnappingComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x00E8(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.CharacterSnappingComponent");
		return ptr;
	}

};


// Class DeadByDaylight.CharacterStatsHandlerComponent
// 0x0010 (0x00F8 - 0x00E8)
class UCharacterStatsHandlerComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00E8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.CharacterStatsHandlerComponent");
		return ptr;
	}


	void ReceiveGameEvent(TEnumAsByte<EDBDScoreTypes> ScoreType, float amount, class AActor* Instigator, class AActor* Target);
	void InitializePreMatchStats();
	float STATIC_GetStatValue(const struct FName& StatName, bool isCharacterSpecific);
};


// Class DeadByDaylight.ItemBlueprint
// 0x0000 (0x0408 - 0x0408)
class AItemBlueprint : public ASkeletalMeshActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.ItemBlueprint");
		return ptr;
	}

};


// Class DeadByDaylight.CharacterTool
// 0x00B8 (0x0438 - 0x0380)
class ACharacterTool : public AActor
{
public:
	struct FCharacterToolData                          CustomizationData;                                        // 0x0380(0x0048) (Edit)
	TArray<class ATargetPoint*>                        SpawnLocations;                                           // 0x03C8(0x0010) (Edit, ZeroConstructor)
	bool                                               Animated;                                                 // 0x03D8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               UseInGameSkeleton;                                        // 0x03D9(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x03DA(0x0006) MISSED OFFSET
	TAssetPtr<class UClass>                            OverallLightingClass;                                     // 0x03E0(0x0020) (Edit)
	struct FNamedButton                                ShowHelp;                                                 // 0x0400(0x0018) (Edit)
	TArray<class ADBDMenuPlayer*>                      _characters;                                              // 0x0418(0x0010) (ZeroConstructor)
	class AActor*                                      _lighting;                                                // 0x0428(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0430(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.CharacterTool");
		return ptr;
	}

};


// Class DeadByDaylight.UIScreenshotTool
// 0x0210 (0x0648 - 0x0438)
class AUIScreenshotTool : public ACharacterTool
{
public:
	class APostProcessVolume*                          PostProcessVolume;                                        // 0x0438(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class FString                                      ScreenshotFolderPath;                                     // 0x0440(0x0010) (Edit, ZeroConstructor)
	int                                                ScreenshotResolution;                                     // 0x0450(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                IconResolution;                                           // 0x0454(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DelayBeforeTakingScreenshot;                              // 0x0458(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PhotoshopScriptWaitTimeout;                               // 0x045C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EScreenShotBatching>                   Batching;                                                 // 0x0460(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0461(0x0007) MISSED OFFSET
	struct FName                                       CurrentPart;                                              // 0x0468(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	TEnumAsByte<ECustomizationCategory>                CurrentPartCategory;                                      // 0x0470(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0471(0x0007) MISSED OFFSET
	struct FName                                       CurrentSetting;                                           // 0x0478(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	class ACameraActor*                                ScreenshotCamera;                                         // 0x0480(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               UpdateCameraFromViewSettings;                             // 0x0488(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0489(0x0007) MISSED OFFSET
	struct FScreenshotViewSetting                      SurvivorHeadView;                                         // 0x0490(0x0028) (Edit)
	struct FScreenshotViewSetting                      SurvivorTorsoView;                                        // 0x04B8(0x0028) (Edit)
	struct FScreenshotViewSetting                      SurvivorLegsView;                                         // 0x04E0(0x0028) (Edit)
	struct FScreenshotViewSetting                      KillerHeadView;                                           // 0x0508(0x0028) (Edit)
	struct FScreenshotViewSetting                      KillerBodyView;                                           // 0x0530(0x0028) (Edit)
	struct FScreenshotViewSetting                      KillerWeaponView;                                         // 0x0558(0x0028) (Edit)
	TArray<struct FGenderViewSetting>                  GenderViewOverrides;                                      // 0x0580(0x0010) (Edit, ZeroConstructor)
	TArray<struct FCharacterItemCategoryViewSetting>   CharacterViewOverrides;                                   // 0x0590(0x0010) (Edit, ZeroConstructor)
	TArray<struct FItemViewSetting>                    ItemViewOverrides;                                        // 0x05A0(0x0010) (Edit, ZeroConstructor)
	TArray<struct FRoleGenderViewSetting>              OutfitView;                                               // 0x05B0(0x0010) (Edit, ZeroConstructor)
	TArray<struct FCharacterViewSetting>               OutfitCharacterOverrides;                                 // 0x05C0(0x0010) (Edit, ZeroConstructor)
	TArray<struct FCharacterAnimation>                 AnimationOverrides;                                       // 0x05D0(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData03[0x50];                                      // 0x05E0(0x0050) MISSED OFFSET
	struct FNamedButton                                ShowIconHelp;                                             // 0x0630(0x0018) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.UIScreenshotTool");
		return ptr;
	}

};


// Class DeadByDaylight.ChargeableComponent
// 0x01C8 (0x02B0 - 0x00E8)
class UChargeableComponent : public UActorComponent
{
public:
	struct FScriptMulticastDelegate                    OnInteractionEmptiedEvent;                                // 0x00E8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x10];                                      // 0x00F8(0x0010) MISSED OFFSET
	struct FScriptMulticastDelegate                    SkillCheckResponseAestheticDelegate;                      // 0x0108(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    SkillCheckResponseAuthorityDelegate;                      // 0x0118(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ChargeAppliedAuthorityDelegate;                           // 0x0128(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ChargeableCompletionPercentChangeAuthorityDelegate;       // 0x0138(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	bool                                               AllowSkillChecksAtFullCharge;                             // 0x0148(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0149(0x0007) MISSED OFFSET
	class FString                                      ChargeableComponentID;                                    // 0x0150(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              DechargeRate;                                             // 0x0160(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DechargeDelay;                                            // 0x0164(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6C];                                      // 0x0168(0x006C) MISSED OFFSET
	struct FDBDTimer                                   _skillCheckFailurePenaltyTimer;                           // 0x01D4(0x0020) (Transient)
	struct FDBDTimer                                   _dechargeTimer;                                           // 0x01F4(0x0020) (Transient)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0214(0x0004) MISSED OFFSET
	TArray<struct FChargeData>                         _chargesThisFrame;                                        // 0x0218(0x0010) (ZeroConstructor, Transient)
	TArray<class AActor*>                              _instigatorsSinceEmpty;                                   // 0x0228(0x0010) (ZeroConstructor, Transient)
	TMap<struct FName, float>                          _tunableValueMap;                                         // 0x0238(0x0050) (ZeroConstructor, Transient)
	bool                                               _isCharging;                                              // 0x0288(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0289(0x0007) MISSED OFFSET
	TArray<int>                                        _playersWhoDidSkillCheck;                                 // 0x0290(0x0010) (ZeroConstructor, Transient)
	float                                              _startingChargePercent;                                   // 0x02A0(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	unsigned char                                      UnknownData05[0xC];                                       // 0x02A4(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.ChargeableComponent");
		return ptr;
	}


	void SetSecondsToCharge(float SecondsToCharge);
	void Reset();
	void Multicast_UpdateChargeAndSpeed(float charge, float Speed);
	void Multicast_OnEmptied();
	void Multicast_OnCompleteChanged(bool COMPLETED);
	bool IsSkillCheckTimePenaltyActive();
	bool HasPlayerDoneSkillCheck(int PlayerId);
	float GetTunableValue(const struct FName& TunableValueID);
	float GetPercentComplete();
	float GetMaxCharge();
	float GetCurrentCharge();
	bool GetComplete();
	float GetChargeRemaining();
	void AddChargePercent(float ChargePercent, class AActor* Instigator);
	void AddCharge(float ChargeAmount, class AActor* Instigator);
};


// Class DeadByDaylight.EnergyPoweredInterface
// 0x0000 (0x0028 - 0x0028)
class UEnergyPoweredInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.EnergyPoweredInterface");
		return ptr;
	}

};


// Class DeadByDaylight.ChargerComponent
// 0x0048 (0x0130 - 0x00E8)
class UChargerComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00E8(0x0008) MISSED OFFSET
	class FString                                      ChargerComponentID;                                       // 0x00F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FScriptMulticastDelegate                    OnChargeStateChange;                                      // 0x0100(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnChargePercentChange;                                    // 0x0110(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	TEnumAsByte<EEnergyTypeEnum>                       EnergyType;                                               // 0x0120(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0121(0x0003) MISSED OFFSET
	float                                              EnergyUsePerSecond;                                       // 0x0124(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              _currentEnergyLevel;                                      // 0x0128(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	float                                              _maxEnergyLevel;                                          // 0x012C(0x0004) (Net, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.ChargerComponent");
		return ptr;
	}


	void UseEnergy(float seconds, float energyUseModifier);
	void SetNormalizedEnergyLevel(float energyLevel);
	void SetMaxEnergyLevel(float energyLevel);
	void SetEnergyLevel(float energyLevel);
	void Reset();
	void OnRep_EnergyLevel(float previousEnergyLevel);
	bool HasCharge();
	float GetNormalizedEnergyLevel();
	float GetMaxEnergyLevel();
	float GetEnergyLevel();
};


// Class DeadByDaylight.ChatManager
// 0x0080 (0x0400 - 0x0380)
class AChatManager : public AActor
{
public:
	class UDBDGameInstance*                            _gameInstance;                                            // 0x0380(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x78];                                      // 0x0388(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.ChatManager");
		return ptr;
	}


	void Multicast_DisplayMessage(int playerIndex, const class FString& PlayerName, const class FString& msg);
};


// Class DeadByDaylight.ChunkingManager
// 0x0018 (0x0040 - 0x0028)
class UChunkingManager : public UObject
{
public:
	class UDBDGameInstance*                            _gameInstance;                                            // 0x0028(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.ChunkingManager");
		return ptr;
	}

};


// Class DeadByDaylight.DBDLocatorComponent
// 0x0010 (0x02A0 - 0x0290)
class UDBDLocatorComponent : public USceneComponent
{
public:
	class UStaticMesh*                                 EditorOnlyLocatorMesh;                                    // 0x0290(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        _meshComponent;                                           // 0x0298(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.DBDLocatorComponent");
		return ptr;
	}

};


// Class DeadByDaylight.DBDClipRegionComponent
// 0x0010 (0x02B0 - 0x02A0)
class UDBDClipRegionComponent : public UDBDLocatorComponent
{
public:
	TArray<class UMaterialInterface*>                  AffectedMaterials;                                        // 0x02A0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.DBDClipRegionComponent");
		return ptr;
	}


	void NotifyShouldClipComponent(class UMeshComponent* InMeshComponent);
	float ClipDistance(class UMeshComponent* InMeshComponent);
	void ApplyClipToDynamicMaterial(class UMaterialInstanceDynamic* dynamicInstanceToClip, int InRegionID);
	void ApplyClip(class UMaterialInstanceDynamic* InMaterial2clip, int InRegionID);
	void STATIC_ApplyArrayOfClipsToDynamicMaterial(TArray<class UDBDClipRegionComponent*> InRegions, class UMaterialInstanceDynamic* dynamicInstanceToClip);
};


// Class DeadByDaylight.ClipManager
// 0x0118 (0x0498 - 0x0380)
class AClipManager : public AActor
{
public:
	TArray<class UDBDClipRegionComponent*>             _clippingZones;                                           // 0x0380(0x0010) (ExportObject, ZeroConstructor, Transient)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0390(0x0050) UNKNOWN PROPERTY: SetProperty DeadByDaylight.ClipManager._meshComponents
	TArray<struct FMaterialOriginalState>              _dissolvedMeshes;                                         // 0x03E0(0x0010) (ZeroConstructor, Transient)
	TMap<class UMaterialInterface*, class UMaterialInterface*> _normal2dissolve;                                         // 0x03F0(0x0050) (ZeroConstructor, Transient)
	TMap<class UMaterialInterface*, class UMaterialInterface*> _dissolve2normal;                                         // 0x0440(0x0050) (ZeroConstructor, Transient)
	class UDataTable*                                  _sphericalDissolveMaterials;                              // 0x0490(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.ClipManager");
		return ptr;
	}


	void SphericalDissolveAt(const struct FVector& Location, float Radius);
	void RemoveDissolveMaterials();
};


// Class DeadByDaylight.ClosetAnalytics
// 0x0000 (0x0028 - 0x0028)
class UClosetAnalytics : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.ClosetAnalytics");
		return ptr;
	}


	void STATIC_RecordClosetSearchSuccess(class ASlasherPlayer* killer);
	void STATIC_RecordClosetSearchFail(class ASlasherPlayer* killer);
	void STATIC_IncrementClosetEnter(class ACamperPlayer* survivor);
};


// Class DeadByDaylight.CustomizationDescription
// 0x0010 (0x0038 - 0x0028)
class UCustomizationDescription : public UDataAsset
{
public:
	TArray<struct FCustomizedMeshPart>                 Parts;                                                    // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.CustomizationDescription");
		return ptr;
	}

};


// Class DeadByDaylight.CustomizationHelper
// 0x0000 (0x0028 - 0x0028)
class UCustomizationHelper : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.CustomizationHelper");
		return ptr;
	}

};


// Class DeadByDaylight.CustomizedSkeletalMesh
// 0x0130 (0x0218 - 0x00E8)
class UCustomizedSkeletalMesh : public UActorComponent
{
public:
	class UClass*                                      SlaveAnimInstanceClass;                                   // 0x00E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class USkeletalMeshComponent*>              Components;                                               // 0x00F0(0x0010) (ExportObject, ZeroConstructor, Transient)
	TArray<class USkeletalMeshComponent*>              Slaves;                                                   // 0x0100(0x0010) (ExportObject, ZeroConstructor, Transient)
	TMap<TEnumAsByte<ECustomizationCategory>, class AItemVfx*> _itemVfxs;                                                // 0x0110(0x0050) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData00[0xA8];                                      // 0x0160(0x00A8) MISSED OFFSET
	class USkeletalMeshComponent*                      _meshOwner;                                               // 0x0208(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	int                                                _characterIdOverride;                                     // 0x0210(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0214(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.CustomizedSkeletalMesh");
		return ptr;
	}


	void SetVfxsVisibility(TEnumAsByte<ECustomizationCategory> Category, bool Visible);
	void SetMeshOwner(class USkeletalMeshComponent* Mesh);
	void SetAllVfxsVisibility(bool Visible);
	class USkeletalMeshComponent* GetSkeletalMesh(TEnumAsByte<ECustomizationCategory> Category);
	class USkeletalMeshComponent* GetMeshOwner();
	TArray<class USkeletalMeshComponent*> GetComponents();
	void CopyCustomization(class UCustomizedSkeletalMesh* copyFrom);
	void ClearAllVfxs();
};


// Class DeadByDaylight.DBD_CrossDissolver
// 0x0030 (0x0118 - 0x00E8)
class UDBD_CrossDissolver : public UActorComponent
{
public:
	TArray<class UMaterialInterface*>                  NewMaterials;                                             // 0x00E8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<class USkeletalMeshComponent*>              BaseSkeletalMesh;                                         // 0x00F8(0x0010) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor)
	TArray<class USkeletalMeshComponent*>              ClonedSkeletalMeshes;                                     // 0x0108(0x0010) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.DBD_CrossDissolver");
		return ptr;
	}


	void MakeClone();
	void KillClone();
};


// Class DeadByDaylight.DBD_SoundClipUtil
// 0x00C0 (0x01A8 - 0x00E8)
class UDBD_SoundClipUtil : public UActorComponent
{
public:
	TArray<struct FMapMeshToAkAudioEvent>              AudioMap;                                                 // 0x00E8(0x0010) (Edit, ZeroConstructor)
	TMap<class UStaticMesh*, struct FMapMeshToAkAudioEvent> _audioEventMap;                                           // 0x00F8(0x0050) (ZeroConstructor, Transient)
	TArray<struct FMapSoundsToAvoid>                   _objectsWhoHavePlayedASound;                              // 0x0148(0x0010) (ZeroConstructor, Transient)
	TMap<class UAkAudioEvent*, float>                  _nextSoundPlayTime;                                       // 0x0158(0x0050) (ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.DBD_SoundClipUtil");
		return ptr;
	}


	void OnGotMeshToTriggerSound(class UStaticMeshComponent* usm);
	void OnCharacterEnterSoundRegion(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	class UAkAudioEvent* GetAudioEventForMesh(class UStaticMeshComponent* usm);
};


// Class DeadByDaylight.DBD_SoundEventSpawner
// 0x0028 (0x03A8 - 0x0380)
class ADBD_SoundEventSpawner : public AActor
{
public:
	TArray<struct FDBD_SoundSpawnerData>               SoundDescriptor;                                          // 0x0380(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0390(0x0008) MISSED OFFSET
	TArray<class UClass*>                              _loadedSoundAssets;                                       // 0x0398(0x0010) (ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.DBD_SoundEventSpawner");
		return ptr;
	}


	void OnSoundTriggered(class AActor* originator, const struct FVector& Location, bool shouldTrack, float audibleRange);
	void AssetsLoaded();
};


// Class DeadByDaylight.DBD_SpiderThing
// 0x0088 (0x0408 - 0x0380)
class ADBD_SpiderThing : public AActor
{
public:
	class UInstancedStaticMeshComponent*               _instancedMesh;                                           // 0x0380(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class UDecalComponent*>                     _arrayDecalsSpawn;                                        // 0x0388(0x0010) (ExportObject, ZeroConstructor)
	TArray<class UDecalComponent*>                     _arrayDecalsEnd;                                          // 0x0398(0x0010) (ExportObject, ZeroConstructor)
	class UMaterialInstanceDynamic*                    _dynamicDecalEndMaterial;                                 // 0x03A8(0x0008) (ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    _dynamicDecalSpawnMaterial;                               // 0x03B0(0x0008) (ZeroConstructor, IsPlainOldData)
	class UStaticMesh*                                 Mesh;                                                     // 0x03B8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MaximumRadius;                                            // 0x03C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ThicknessY;                                               // 0x03C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ThicknessZ;                                               // 0x03C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxInstances;                                             // 0x03CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                InitialSpawnAmount;                                       // 0x03D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AngleRangeDegrees;                                        // 0x03D4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UCurveVector*                                InitializationTimings;                                    // 0x03D8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UCurveVector*                                DestructionTimings;                                       // 0x03E0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UMaterial*                                   DecalEndMaterial;                                         // 0x03E8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UMaterial*                                   DecalSpawnMaterial;                                       // 0x03F0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             ParticleSpawn;                                            // 0x03F8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              DecalInstanceScale;                                       // 0x0400(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0404(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.DBD_SpiderThing");
		return ptr;
	}


	void RebuildLines();
	void RandomTrace(struct FHitResult* out_result);
	void CreateLine();
};


// Class DeadByDaylight.DBD_SpiderThingComponent
// 0x00B0 (0x0340 - 0x0290)
class UDBD_SpiderThingComponent : public USceneComponent
{
public:
	class UInstancedStaticMeshComponent*               _instancedMesh;                                           // 0x0290(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class UDecalComponent*>                     _arrayDecalsSpawn;                                        // 0x0298(0x0010) (ExportObject, ZeroConstructor)
	TArray<class UDecalComponent*>                     _arrayDecalsEnd;                                          // 0x02A8(0x0010) (ExportObject, ZeroConstructor)
	class UMaterialInstanceDynamic*                    _dynamicDecalEndMaterial;                                 // 0x02B8(0x0008) (ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    _dynamicDecalSpawnMaterial;                               // 0x02C0(0x0008) (ZeroConstructor, IsPlainOldData)
	class UStaticMesh*                                 MeshLow;                                                  // 0x02C8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UStaticMesh*                                 MeshMedium;                                               // 0x02D0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UStaticMesh*                                 MeshHigh;                                                 // 0x02D8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MaximumRadius;                                            // 0x02E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaximumStickLength;                                       // 0x02E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ThicknessY;                                               // 0x02E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ThicknessZ;                                               // 0x02EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ThicknessYRange;                                          // 0x02F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ThicknessZRange;                                          // 0x02F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxInstances;                                             // 0x02F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                InitialSpawnAmount;                                       // 0x02FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AngleRangeDegrees;                                        // 0x0300(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0304(0x0004) MISSED OFFSET
	class UCurveVector*                                InitializationTimings;                                    // 0x0308(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UCurveVector*                                DestructionTimings;                                       // 0x0310(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UMaterial*                                   DecalEndMaterial;                                         // 0x0318(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UMaterial*                                   DecalSpawnMaterial;                                       // 0x0320(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EDetailMode>                           DecalMinDetailMode;                                       // 0x0328(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0329(0x0007) MISSED OFFSET
	class UParticleSystem*                             ParticleSpawn;                                            // 0x0330(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              DecalInstanceScale;                                       // 0x0338(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x033C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.DBD_SpiderThingComponent");
		return ptr;
	}


	void RebuildLines();
	void RandomTrace(struct FHitResult* out_result);
	void CreateLine();
};


// Class DeadByDaylight.DBDAIPlayerController
// 0x0010 (0x0488 - 0x0478)
class ADBDAIPlayerController : public AAIController
{
public:
	TArray<class UAICharacterBehaviour*>               _currentBehaviours;                                       // 0x0478(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.DBDAIPlayerController");
		return ptr;
	}


	void StartCharacterBehaviour(class UClass* behaviourClass, class UAICharacterBehaviourData* characterBehaviourData);
	void SetCharacterMovement(TEnumAsByte<ECharacterMovementTypes> movementTypes);
	void PauseCharacterBehaviour(class UClass* behaviourClass);
	void InteractRequest();
	void FastInteractRequest();
	void AttackRequest();
};


// Class DeadByDaylight.DBDAudioUtils
// 0x0000 (0x0380 - 0x0380)
class ADBDAudioUtils : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.DBDAudioUtils");
		return ptr;
	}


	void DBDLoadBank(class UAkAudioBank* bank);
};


// Class DeadByDaylight.DBDAuthentication
// 0x0028 (0x0050 - 0x0028)
class UDBDAuthentication : public UObject
{
public:
	TArray<struct FAuthenticationInfo>                 _localInfos;                                              // 0x0028(0x0010) (ZeroConstructor, Transient)
	TArray<struct FAuthenticationInfo>                 _remoteInfos;                                             // 0x0038(0x0010) (ZeroConstructor, Transient)
	class UDBDGameInstance*                            _gameInstance;                                            // 0x0048(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.DBDAuthentication");
		return ptr;
	}

};


// Class DeadByDaylight.DBDBaseHud
// 0x0010 (0x0478 - 0x0468)
class ADBDBaseHud : public AHUD
{
public:
	class UFont*                                       _debugFont;                                               // 0x0468(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0470(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.DBDBaseHud");
		return ptr;
	}


	void ShowVersionNumber(bool ShouldShow);
	void ShowAnimHudBP();
	void ShowAnimHud(bool show);
	bool ShouldDrawAnimHud();
};


// Class DeadByDaylight.DBDInGameHud
// 0x0018 (0x0490 - 0x0478)
class ADBDInGameHud : public ADBDBaseHud
{
public:
	class UFont*                                       _proceduralDebugFontObj;                                  // 0x0478(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0480(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.DBDInGameHud");
		return ptr;
	}

};


// Class DeadByDaylight.DBDLobbyHud
// 0x0000 (0x0478 - 0x0478)
class ADBDLobbyHud : public ADBDBaseHud
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.DBDLobbyHud");
		return ptr;
	}

};


// Class DeadByDaylight.EscapeRequirementTracker
// 0x0020 (0x0048 - 0x0028)
class UEscapeRequirementTracker : public UObject
{
public:
	TArray<class AGenerator*>                          _escapeGenerators;                                        // 0x0028(0x0010) (ZeroConstructor, Transient)
	class UGameEventTracker*                           _gameEventTracker;                                        // 0x0038(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class ADBDGameState*                               _dbdGameState;                                            // 0x0040(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.EscapeRequirementTracker");
		return ptr;
	}


	void OnGameplayEvent(TEnumAsByte<EDBDScoreTypes> gameplayEventType, float amount, class AActor* Instigator, class AActor* Target);
};


// Class DeadByDaylight.DBDBaseMatchGameMode
// 0x0008 (0x0468 - 0x0460)
class ADBDBaseMatchGameMode : public AGameMode
{
public:
	class UEscapeRequirementTracker*                   _escapeRequirementTracker;                                // 0x0460(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.DBDBaseMatchGameMode");
		return ptr;
	}

};


// Class DeadByDaylight.DBDGameMode
// 0x00C8 (0x0530 - 0x0468)
class ADBDGameMode : public ADBDBaseMatchGameMode
{
public:
	bool                                               StartWithSlasher;                                         // 0x0468(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0469(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnBlockCamperEscape;                                      // 0x0470(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPlayersLoadoutsCreated;                                 // 0x0480(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	TArray<class APlayerStart*>                        _initialPlayerStarts;                                     // 0x0490(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x90];                                      // 0x04A0(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.DBDGameMode");
		return ptr;
	}


	void SetEscapeOpened(bool Val);
	void LevelLoaded(const class FString& levelName);
	bool IsEscapeOpen();
	void HostGame();
	struct FTimespan GetElapsedMatchTime();
	void DBD_BlockCamperEscape(float duration);
	bool AreLoadoutsCreated();
};


// Class DeadByDaylight.DBDTextDesignTunables
// 0x0088 (0x00B0 - 0x0028)
class UDBDTextDesignTunables : public UObject
{
public:
	class FString                                      CreditsHtml;                                              // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Config)
	struct FText                                       LegalTextTitle;                                           // 0x0038(0x0018) (Edit, BlueprintVisible, Config)
	struct FText                                       LegalText;                                                // 0x0050(0x0018) (Edit, BlueprintVisible, Config)
	struct FText                                       LegalTextSIEA;                                            // 0x0068(0x0018) (Edit, BlueprintVisible, Config)
	struct FText                                       LegalTextSIEE;                                            // 0x0080(0x0018) (Edit, BlueprintVisible, Config)
	struct FText                                       SystemMessage_ChatDisconnected;                           // 0x0098(0x0018) (Edit, BlueprintVisible, Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.DBDTextDesignTunables");
		return ptr;
	}

};


// Class DeadByDaylight.DBDRankDesignTunables
// 0x0070 (0x0098 - 0x0028)
class UDBDRankDesignTunables : public UObject
{
public:
	int                                                MaxPips;                                                  // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	int                                                BaseTrialPips;                                            // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	int                                                NoPipLossRankThreshold;                                   // 0x0030(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                NoRankLossThreshold;                                      // 0x0034(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	TArray<struct FRankDefinition>                     RankDefinitions;                                          // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Config)
	TArray<struct FRankResetStartingPips>              RankResetStartingPips;                                    // 0x0048(0x0010) (Edit, ZeroConstructor, Config)
	TArray<float>                                      PipThresholds;                                            // 0x0058(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Config)
	class UCurveFloat*                                 UnbrokenTimeAlivePointsCurve;                             // 0x0068(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 EvaderStealthPointsByDistanceWhileKillerNotChasingCurve;  // 0x0070(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 EvaderStealthPointsByDistanceWhileKillerIsChasingCurve;   // 0x0078(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 EvaderChasePointsByDurationCurve;                         // 0x0080(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 EvaderZAxisDistanceScalingCurve;                          // 0x0088(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 ChaserChasePointsByDurationCurve;                         // 0x0090(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.DBDRankDesignTunables");
		return ptr;
	}

};


// Class DeadByDaylight.Interactable
// 0x0020 (0x03A0 - 0x0380)
class AInteractable : public AActor
{
public:
	bool                                               TriggerSoundOnRushEnter;                                  // 0x0380(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0381(0x0007) MISSED OFFSET
	TArray<class UInteractor*>                         _interactors;                                             // 0x0388(0x0010) (ExportObject, ZeroConstructor)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0398(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.Interactable");
		return ptr;
	}


	void SetInteractorsUsable(bool usable, class UInteractor* exception);
	void PreInterruptionEvent(class ADBDPlayer* interruptor, class ADBDPlayer* interruptee, class UInterruptionDefinition* interruption);
	void OnLevelReadyToPlay();
	bool IsReadyForInteractableInit();
	bool IsInterruptionPossible(class ADBDPlayer* interruptor, class ADBDPlayer* interruptee, class UInteractor* Interactor, class UInteractionDefinition* definition, class UInterruptionDefinition* interruption);
	bool IsInteractionPossibleInternal(class ADBDPlayer* Player, class UInteractor* Interactor, class UInteractionDefinition* definition, TEnumAsByte<EInputInteractionType> InteractionType);
	bool IsInteractionDone(class ADBDPlayer* Player, class UInteractor* Interactor, class UInteractionDefinition* definition, TEnumAsByte<EInputInteractionType> InteractionType);
	bool InteractableInit();
	bool HasInteractableInitializedBeenCalled();
	bool HasAnOngoingInteraction();
	class ADBDPlayer* GetPlayerOwner();
	TArray<class UInteractor*> GetInteractors();
	TArray<class ADBDPlayer*> GetInteractingPlayers();
	struct FVector GetFocalPointPosition(class ADBDPlayer* Player, class UInteractionDefinition* definition);
	void AuthorityRequestCancelOngoingInteractions(bool onlyOnHitCancelableInteractions);
	void Authority_UpdateLit(float DeltaSeconds, class AActor* effector);
};


// Class DeadByDaylight.ItemModifier
// 0x0040 (0x01C8 - 0x0188)
class UItemModifier : public UGameplayModifierContainer
{
public:
	struct FGameplayModifierData                       ModifierData;                                             // 0x0188(0x0040) (Edit, Net)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.ItemModifier");
		return ptr;
	}


	void HandleIncreaseMaxCharge();
	void HandleIncreaseItemCount();
	void HandleIncreaseCharge();
	class ADBDPlayer* GetOwningPlayer();
	float GetItemMaxEnergy();
	float GetItemEnergy();
	int GetItemCount();
	struct FGameplayModifierData GetGameplayModifierData();
	struct FGameplayModifierData GetConstGameplayModifierData();
	class ACollectable* GetBaseItem();
	void AuthoritySetItemMaxEnergy(float energy);
	void AuthoritySetItemEnergy(float energy);
	void AuthoritySetItemCount(int itemCount);
};


// Class DeadByDaylight.ItemAddon
// 0x0018 (0x01E0 - 0x01C8)
class UItemAddon : public UItemModifier
{
public:
	class UClass*                                      BaseItemType;                                             // 0x01C8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInventoryItemType>                    InventoryItemType;                                        // 0x01D0(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x01D1(0x000F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.ItemAddon");
		return ptr;
	}


	void OnPostItemAddonsCreation(class ADBDPlayer* Player, class ACollectable* Item);
	void Multicast_SetBaseItem(class ACollectable* baseItem);
	void Multicast_InitializeItemAddon();
	void Multicast_AddAddonToItem(class ACollectable* Item);
	bool IsReadyForInitialization();
	void InitializeAddon();
	class ADBDPlayer* GetOwningPlayer();
	TEnumAsByte<EInventoryItemType> GetInventoryItemType();
	class ACollectable* GetBaseItem();
	void Authority_OnCollectablePickedUp(class ADBDPlayer* Player);
	void Authority_OnCollectableDropped(class ADBDPlayer* Player);
	void ApplyMetaModifiers();
};


// Class DeadByDaylight.Collectable
// 0x00D8 (0x0478 - 0x03A0)
class ACollectable : public AInteractable
{
public:
	bool                                               StrafeOnUse;                                              // 0x03A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AimOnUse;                                                 // 0x03A1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               VisibleWhenEquipped;                                      // 0x03A2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               StopRunningOnUse;                                         // 0x03A3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EItemHandPosition>                     HandPosition;                                             // 0x03A4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               HasUseInteraction;                                        // 0x03A5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               HasDropInteraction;                                       // 0x03A6(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollectableCategory>                  Category;                                                 // 0x03A7(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               Draft;                                                    // 0x03A8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               IsInUse;                                                  // 0x03A9(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x03AA(0x0006) MISSED OFFSET
	struct FName                                       ItemId;                                                   // 0x03B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               FromPlayerSpawn;                                          // 0x03B8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x03B9(0x0007) MISSED OFFSET
	class UItemModifier*                               BaseItemModifier;                                         // 0x03C0(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UItemModifier*                               ItemModifier1;                                            // 0x03C8(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UItemModifier*                               ItemModifier2;                                            // 0x03D0(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               BeingCollected;                                           // 0x03D8(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BeingDropped;                                             // 0x03D9(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x03DA(0x0006) MISSED OFFSET
	class UInteractor*                                 _itemInteractor;                                          // 0x03E0(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      _mesh;                                                    // 0x03E8(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class USceneComponent*                             _placementOrigin;                                         // 0x03F0(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData03[0x28];                                      // 0x03F8(0x0028) MISSED OFFSET
	class ADBDPlayer*                                  _collector;                                               // 0x0420(0x0008) (Net, ZeroConstructor, Transient, IsPlainOldData)
	class ADBDPlayer*                                  _firstCollector;                                          // 0x0428(0x0008) (Net, ZeroConstructor, Transient, IsPlainOldData)
	TEnumAsByte<ECollectableState>                     _state;                                                   // 0x0430(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0431(0x0007) MISSED OFFSET
	TArray<class UItemAddon*>                          _itemAddons;                                              // 0x0438(0x0010) (ExportObject, ZeroConstructor, Transient)
	unsigned char                                      UnknownData05[0x10];                                      // 0x0448(0x0010) MISSED OFFSET
	int                                                _itemCount;                                               // 0x0458(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData06[0xC];                                       // 0x045C(0x000C) MISSED OFFSET
	struct FGuid                                       _begunPlayFenceName;                                      // 0x0468(0x0010) (Net, ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.Collectable");
		return ptr;
	}


	void Use();
	void SetItemInteractor(class UInteractor* Interactor);
	void SetCount(int Count);
	void OnUseReleased();
	void OnUse();
	void OnRep_BegunPlayFenceName();
	void OnPostItemAddonsCreation(class ADBDPlayer* Player);
	void OnFenceInitialized();
	void OnDropped();
	void OnCollected(class ADBDPlayer* collector);
	void NotifyUpdated();
	void Multicast_UseReleased();
	void Multicast_Use();
	void Multicast_RemoveItemAddon(class UItemAddon* addon);
	void Multicast_Dropped(class ADBDPlayer* droppedBy, const struct FVector& Location, const struct FRotator& Rotation);
	void Multicast_Collected(class ADBDPlayer* collector);
	bool IsStored();
	bool IsRechargeable();
	bool IsOnGround();
	bool IsEquipped();
	bool IsCountDisplayForced();
	bool IsCollected();
	bool HasGameplayModifierFlag(const struct FGameplayTag& modifierFlag);
	float GetUsePercentLeft();
	float GetModifierSum(const struct FGameplayTag& ModifierType, float DefaultValue);
	float GetModifierMax(const struct FGameplayTag& ModifierType, float DefaultValue);
	class UInteractor* GetItemInteractor();
	unsigned char GetItemIconIndex();
	TArray<class UItemAddon*> GetItemAddons();
	int GetCount();
	class ADBDPlayer* GetCollector();
	void Discard();
	void DebugPrintStats();
	bool CanUse();
	bool CanBeDropped(class ADBDPlayer* dropper);
	bool CanBeCollected(class ADBDPlayer* collector);
	void Authority_RemoveItemAddon(class UItemAddon* addon);
	void Authority_AddItemAddon(class UItemAddon* addon);
};


// Class DeadByDaylight.ProceduralGenerationData
// 0x0100 (0x0128 - 0x0028)
class UProceduralGenerationData : public UDataAsset
{
public:
	TArray<struct FQuadrantSpawnTypeProperties>        QuadrantSpawnTypeProperties;                              // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FQuadrantSpawnCategories>            QuadrantSpawnCategories;                                  // 0x0038(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FThemeProperties>                    ThemeProperties;                                          // 0x0048(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	int                                                MaxSurvivorCount;                                         // 0x0058(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
	TArray<struct FKillerItemDependencies>             KillersItemDependencies;                                  // 0x0060(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class UCurveFloat*                                 SurvivorItemPopulationProbability;                        // 0x0070(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FSurvivorItemProperties>             SurvivorItemProperty;                                     // 0x0078(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class UCurveFloat*                                 EscapeStrategyPopulationProbability;                      // 0x0088(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FEscapeStrategyProperty>             EscapeStrategyProperties;                                 // 0x0090(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FEscapeTypeObjects>                  EscapeTypeActors;                                         // 0x00A0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FGameplayElementsPopulation>         ElementsPopulation;                                       // 0x00B0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FManagedGameplayElementsPopulation>  ManagedElementsPopulation;                                // 0x00C0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FSurvivorGroupingProbability>        SurvivorGroupingProbabilities;                            // 0x00D0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FVector                                     ProceduralMapOffset;                                      // 0x00E0(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ProceduralTileWidth;                                      // 0x00EC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ProceduralTileHeight;                                     // 0x00F0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DifficultyModifier;                                       // 0x00F4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CharacterCollisionRadius;                                 // 0x00F8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00FC(0x0004) MISSED OFFSET
	TArray<struct FEventSubstitionData>                _eventProperties;                                         // 0x0100(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData02[0x18];                                      // 0x0110(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.ProceduralGenerationData");
		return ptr;
	}

};


// Class DeadByDaylight.DBDPlayerState_Menu
// 0x0030 (0x0A50 - 0x0A20)
class ADBDPlayerState_Menu : public ADBDPlayerState
{
public:
	TWeakObjectPtr<class ADBDMenuPlayer>               _pawn;                                                    // 0x0A20(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0A28(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.DBDPlayerState_Menu");
		return ptr;
	}


	void Server_SetEquipment(TEnumAsByte<ELoadoutSlot> Slot, const struct FName& ItemId, bool callOnRep);
	void OnRep_DisplayData();
};


// Class DeadByDaylight.DBDUtilities
// 0x0000 (0x0028 - 0x0028)
class UDBDUtilities : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.DBDUtilities");
		return ptr;
	}


	bool STATIC_WithinRangeExclusive(float Min, float Max, float Value);
	bool STATIC_WithinRange(float Min, float Max, float Value);
	float STATIC_ToAngle_negative180to180(float Angle);
	bool STATIC_SphereTraceSingle(const struct FVector& Start, const struct FVector& End, class USphereComponent* Sphere, struct FHitResult* outHitResult);
	bool STATIC_SphereTraceAgainstActor(const struct FVector& Start, const struct FVector& End, class USphereComponent* Sphere, class AActor* Actor, struct FHitResult* outHitResult);
	int STATIC_PointerToInt(class UObject* Obj);
	bool STATIC_NormalizeXY(float Tolerance, struct FVector* Vector);
	void STATIC_LogMeshMaterialInfo(const class FString& inStr, class UMeshComponent* Root);
	void STATIC_LogMaterialInfo(const class FString& inStr, class UMaterialInterface* Root);
	bool STATIC_IsNonViolent();
	bool STATIC_IsLocallyObservingASurvivor(class UObject* WorldContextObject);
	bool STATIC_IsLocallyObservingAKiller(class UObject* WorldContextObject);
	bool STATIC_HasWalkableSurfaceForward(class UObject* WorldContextObject, const struct FVector& Location, const struct FVector& fowardVector, float Distance, float raycastStartHeight, float raycastEndHeight, TArray<struct FHitResult>* OutHits, struct FVector* raycastStart);
	bool STATIC_HasLineOfSightToTarget(class UObject* WorldContextObject, const struct FVector& StartPosition, const struct FVector& targetPosition, class AActor* ignoredActor);
	bool STATIC_HasFloorForward(class UObject* WorldContextObject, const struct FVector& Location, const struct FVector& fowardVector, float Distance, float raycastStartHeight, float raycastEndHeight, TArray<struct FHitResult>* OutHits, struct FVector* raycastStart);
	struct FVector STATIC_GetXYVector(const struct FVector& Vector);
	float STATIC_GetVelocityXYAngleDegrees(class AActor* Actor);
	float STATIC_GetTunableValue(class UObject* WorldContextObject, const struct FName& valueName);
	TArray<class AGenerator*> STATIC_GetThreeClosestGenerators(TArray<class AGenerator*> unrevealedGenerators);
	float STATIC_GetSlasherTunableValue(class UObject* WorldContextObject, const struct FName& valueName);
	class ASlasherPlayer* STATIC_GetSlasher(class UObject* WorldContextObject);
	struct FVector STATIC_GetSimilarVector(const struct FVector& Vector, float maximumDeviation);
	float STATIC_GetPlayRateForMontage(class UAnimMontage* Montage, float Time);
	float STATIC_GetPercentOfRange(float Val, float Min, float Max);
	class ASlasherPlayer* STATIC_GetOwningSlasher(class UAnimInstance* AnimInstance);
	class ACamperPlayer* STATIC_GetOwningCamper(class UAnimInstance* AnimInstance);
	class AActor* STATIC_GetOuterMostActor(class UAnimInstance* AnimInstance);
	void STATIC_GetNearbyCampers(class UWorld* World, const struct FVector& Center, float Radius, TArray<class AActor*> ignoredCampers, TArray<class ACamperPlayer*>* outNearbyCampers);
	float STATIC_GetMontageLength(class UAnimMontage* Montage);
	class ADBDPlayer* STATIC_GetLocallyObservedCharacter(class UObject* WorldContextObject);
	class ACamperPlayer* STATIC_GetLocallyControlledSurvivor(class UObject* WorldContextObject);
	class ASlasherPlayer* STATIC_GetLocallyControlledKiller(class UObject* WorldContextObject);
	TEnumAsByte<EPlayerRole> STATIC_GetLocallyControlledCharacterRole(class UObject* WorldContextObject);
	class ADBDPlayer* STATIC_GetLocallyControlledCharacter(class UObject* WorldContextObject);
	class ADBDPlayerControllerBase* STATIC_GetLocalDBDPlayerController(class UObject* WorldContextObject);
	class ADBDPlayerCameraManager* STATIC_GetLocalDBDCameraManager(class UObject* WorldContextObject);
	int STATIC_GetInventoryCount(class UObject* WorldContextObject, int CharacterIndex, const struct FName& ItemId);
	struct FCollisionResponseContainer STATIC_GetImpactCollisionResponseContainer(class UPrimitiveComponent* Primitive);
	TEnumAsByte<ECollisionChannel> STATIC_GetImpactCollisionObjectType(class UPrimitiveComponent* Primitive);
	struct FText STATIC_GetFormattedNumberText(float Value, int maxDecimals, int minDecimals, bool leadingZero);
	class FString STATIC_GetFormattedNumberString(float Value, int maxDecimals, int minDecimals, bool leadingZero);
	struct FVector STATIC_GetFloorLocationAt(class UObject* WorldContextObject, const struct FVector& Location, float raycastStartHeight, float raycastEndHeight);
	class AActor* STATIC_GetFirstActorWithTag(const struct FName& Tag, TArray<class AActor*> actorsArray);
	float STATIC_GetEmblemTunableValue(class UObject* WorldContextObject, const struct FName& valueName);
	class ADBDGameState* STATIC_GetDBDGameState(class UObject* WorldContextObject);
	class ADBDGameMode* STATIC_GetDBDGameMode(class UObject* WorldContextObject);
	class UDBDGameInstance* STATIC_GetDBDGameInstance(class UObject* WorldContextObject);
	class ADBDAIPlayerController* STATIC_GetDBDAIPlayerController(class ADBDPlayer* Player);
	class FString STATIC_GetComponentOwnerName(class UActorComponent* ActorComponent);
	struct FTransform STATIC_GetClosestSnapTransformOnOrbit(const struct FVector& centerPoint, const struct FVector& orbitterPosition, float Distance);
	struct FVector STATIC_GetClosestPointOnOrbit(const struct FVector& centerPoint, const struct FVector& orbitterPosition, float Distance);
	float STATIC_GetAnimSequenceLength(class UAnimSequence* Sequence);
	class FString STATIC_GetActorOwnerName(class AActor* Actor);
	bool STATIC_GetActiveSpecialEvent(const struct FName& EventId, struct FSpecialEventData* outSpecialEventData);
	void STATIC_FireGameEvent(class UObject* WorldContextObject, TEnumAsByte<EDBDScoreTypes> ScoreType, float amount, class AActor* Instigator, class AActor* Target);
	class AActor* STATIC_FindParentOfClass(class AActor* InChild, class UClass* InClass);
	bool STATIC_FindFloorSingle(class UObject* WorldContextObject, const struct FVector& Location, float raycastLength, struct FHitResult* OutHit);
	void STATIC_DBDLoadAudioBankAsync(class UAkAudioBank* bank, class AActor* caller);
	void STATIC_DBDLoadAudioBank(class UAkAudioBank* bank, class AActor* caller);
	bool STATIC_DBDCapsuleTraceSingle(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, float Radius, float HalfHeight, TEnumAsByte<ECollisionChannel> TraceChannel, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, bool bIgnoreSelf, struct FHitResult* OutHit);
	void STATIC_CrashGameCausingInterrupt();
	class UActorComponent* STATIC_AddComponentToActor(class UClass* compClass, const struct FName& compName, class AActor* Actor);
};


// Class DeadByDaylight.DBDDesignTunables
// 0x0040 (0x0068 - 0x0028)
class UDBDDesignTunables : public UObject
{
public:
	int                                                WinStreakThresholdLarge;                                  // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	int                                                WinStreakThresholdSmall;                                  // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	int                                                MaxBloodpoints;                                           // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	int                                                MaxFearTokens;                                            // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	TArray<struct FPerkLevelDefinition>                PerkLevelDefinitions;                                     // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Config)
	class UClass*                                      TextDesignTunableClass;                                   // 0x0048(0x0008) (Edit, BlueprintVisible, ZeroConstructor, NoClear, IsPlainOldData)
	class UDBDTextDesignTunables*                      TextTunables;                                             // 0x0050(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UClass*                                      RankDesignTunableClass;                                   // 0x0058(0x0008) (Edit, BlueprintVisible, ZeroConstructor, NoClear, IsPlainOldData)
	class UDBDRankDesignTunables*                      RankTunables;                                             // 0x0060(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.DBDDesignTunables");
		return ptr;
	}


	float GetTunableValue(const struct FName& ID, bool warnIfRowMissing);
	bool STATIC_GetCurrentlyActiveSpecialEvent(class UWorld* World, struct FSpecialEventData* outEventData);
};


// Class DeadByDaylight.DBDDebugGameMode
// 0x00C8 (0x05F8 - 0x0530)
class ADBDDebugGameMode : public ADBDGameMode
{
public:
	TArray<struct FCamperLoadout>                      CamperPawnOverrides;                                      // 0x0530(0x0010) (Edit, ZeroConstructor)
	TArray<struct FSlasherLoadout>                     SlasherPawnOverrides;                                     // 0x0540(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0550(0x0008) MISSED OFFSET
	TMap<class ADBDPlayerController*, int>             LoadoutIndex;                                             // 0x0558(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x50];                                      // 0x05A8(0x0050) UNKNOWN PROPERTY: SetProperty DeadByDaylight.DBDDebugGameMode.PlayersWithItems

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.DBDDebugGameMode");
		return ptr;
	}

};


// Class DeadByDaylight.TutorialHighlightController
// 0x0078 (0x00A0 - 0x0028)
class UTutorialHighlightController : public UObject
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x0028(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.TutorialHighlightController");
		return ptr;
	}


	void SetHudComponentHighlight(TEnumAsByte<EHudComponent> hudComponent, bool show);
};


// Class DeadByDaylight.TutorialNotificationController
// 0x01B8 (0x01E0 - 0x0028)
class UTutorialNotificationController : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnBlockingNotificationDismissedEvent;                     // 0x0028(0x0010) (ZeroConstructor, Transient, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x1A8];                                     // 0x0038(0x01A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.TutorialNotificationController");
		return ptr;
	}


	void ShowNotification(const struct FName& tutorialNotificationId, float duration);
	void ShowBlockingNotification(const struct FName& tutorialNotificationId);
	void OnBlockingNotificationDismissedEvent__DelegateSignature(const struct FName& tutorialNotificationId);
	void OnBlockingNotificationDismissed();
	void HideNotification();
};


// Class DeadByDaylight.TutorialObjectiveController
// 0x0218 (0x0240 - 0x0028)
class UTutorialObjectiveController : public UObject
{
public:
	unsigned char                                      UnknownData00[0x218];                                     // 0x0028(0x0218) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.TutorialObjectiveController");
		return ptr;
	}


	void RemoveObjective(const struct FName& tutorialObjectiveId);
	void RemoveAllObjectives();
	void CompleteObjective(const struct FName& tutorialObjectiveId, bool removeAfterCompletion);
	void AddObjective(const struct FName& tutorialObjectiveId);
};


// Class DeadByDaylight.TutorialGameMode
// 0x0018 (0x0480 - 0x0468)
class ATutorialGameMode : public ADBDBaseMatchGameMode
{
public:
	class UTutorialObjectiveController*                _tutorialObjectiveController;                             // 0x0468(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UTutorialNotificationController*             _tutorialNotificationController;                          // 0x0470(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UTutorialHighlightController*                _tutorialHighlightController;                             // 0x0478(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.TutorialGameMode");
		return ptr;
	}


	void SetEscapeGenerators(TArray<class AGenerator*> escapeGenerators, int requiredActivationCount);
	class UTutorialObjectiveController* GetTutorialObjectiveController();
	class UTutorialNotificationController* GetTutorialNotificationController();
	class UTutorialHighlightController* GetTutorialHighlightController();
};


// Class DeadByDaylight.DBDMenuPlayer
// 0x00C0 (0x0870 - 0x07B0)
class ADBDMenuPlayer : public ADBDBasePlayer
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x07B0(0x0070) MISSED OFFSET
	bool                                               RoleSelected;                                             // 0x0820(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               IsOnline;                                                 // 0x0821(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0822(0x0006) MISSED OFFSET
	TAssetPtr<class UMaterialInterface>                DarkMaterial;                                             // 0x0828(0x0020) (Edit)
	TEnumAsByte<EItemHandPosition>                     _handPosition;                                            // 0x0848(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0849(0x0007) MISSED OFFSET
	class USkeletalMeshComponent*                      ItemMesh;                                                 // 0x0850(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	struct FName                                       _equippedItemName;                                        // 0x0858(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x10];                                      // 0x0860(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.DBDMenuPlayer");
		return ptr;
	}


	void WrappedOnDestroyed(class AActor* DestroyedActor);
	bool ShouldShowSpawnAnimation();
	bool ShouldApplyPositionOffset();
	void RestartInSequence();
	void OnCustomizationTransactionCompleted(TEnumAsByte<ECustomizationCategory> Category);
	TEnumAsByte<EItemHandPosition> GetHandPosition();
	void BeginDestroySequence();
	void BeginCreateSequence();
};


// Class DeadByDaylight.CamperPlayer
// 0x0410 (0x1710 - 0x1300)
class ACamperPlayer : public ADBDPlayer
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x1300(0x0008) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnPickedUpDelegate;                                       // 0x1308(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnHealedDelegate;                                         // 0x1318(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnIsInTerrorRadiusChanged;                                // 0x1328(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnHPSlotChanged;                                          // 0x1338(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x78];                                      // 0x1348(0x0078) MISSED OFFSET
	float                                              InputMashCount;                                           // 0x13C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InputMashDecayTime;                                       // 0x13C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       CameraSocketName_Hooked;                                  // 0x13C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       ReverseBearTrapAttachSocket;                              // 0x13D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StruggleMashDelay;                                        // 0x13D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WiggleMashDelay;                                          // 0x13DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBoxOcclusionQueryComponent*                 _pixelCounter;                                            // 0x13E0(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStalkedComponent*                           StalkedComponent;                                         // 0x13E8(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData02[0x20];                                      // 0x13F0(0x0020) MISSED OFFSET
	float                                              CameraResetToleranceYaw;                                  // 0x1410(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CameraResetTolerancePitch;                                // 0x1414(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CameraRecenterOffsetYaw;                                  // 0x1418(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CameraRecenterOffsetPitch;                                // 0x141C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EGender>                               Gender;                                                   // 0x1420(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x1421(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnChaseEnded;                                             // 0x1428(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class UCurveFloat*                                 DropStaggerDuration;                                      // 0x1438(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 DropStaggerMaxSpeed;                                      // 0x1440(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TimeforDeathWhileCrawling;                                // 0x1448(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TimeforDeathWhileHooked;                                  // 0x144C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SecondsUntilFootprintTrigger;                             // 0x1450(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               TriggerAfflictionHUDIntro;                                // 0x1454(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x1455(0x0003) MISSED OFFSET
	class UCameraComponent*                            Camera;                                                   // 0x1458(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData05[0x70];                                      // 0x1460(0x0070) MISSED OFFSET
	class UCamperStillnessTrackerComponent*            _stillnessTracker;                                        // 0x14D0(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, IsPlainOldData)
	float                                              PartiallyHiddenStillnessThreshold;                        // 0x14D8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x14DC(0x0004) MISSED OFFSET
	class AActor*                                      _escape;                                                  // 0x14E0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class AActor*                                      _overlappingEscape;                                       // 0x14E8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class USphereComponent*                            ProximityZone;                                            // 0x14F0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData07[0x14];                                      // 0x14F8(0x0014) MISSED OFFSET
	struct FDBDTimer                                   _dropStaggerTimer;                                        // 0x150C(0x0020) (Transient)
	unsigned char                                      UnknownData08[0x4];                                       // 0x152C(0x0004) MISSED OFFSET
	class UCapsuleComponent*                           SlashableZone;                                            // 0x1530(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UCapsuleComponent*                           HookSlashableZone;                                        // 0x1538(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              CrouchCapsuleHalfHeight;                                  // 0x1540(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x4];                                       // 0x1544(0x0004) MISSED OFFSET
	class UMaterialHelper*                             MaterialHelper;                                           // 0x1548(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              IKOffsetRightFoot;                                        // 0x1550(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	float                                              IKOffsetLeftFoot;                                         // 0x1554(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData10[0x8];                                       // 0x1558(0x0008) MISSED OFFSET
	class UDBDPawnSensingComponent*                    _camperSensor;                                            // 0x1560(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	TArray<class ADBDPlayer*>                          _foundCampers;                                            // 0x1568(0x0010) (ZeroConstructor, Transient)
	TArray<class ADBDPlayer*>                          _potentialSaviors;                                        // 0x1578(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData11[0x4];                                       // 0x1588(0x0004) MISSED OFFSET
	struct FVector                                     _cameraAnchorOriginalRelativeCameraLocation;              // 0x158C(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
	struct FCameraAttachment                           _defaultCameraAttachment;                                 // 0x1598(0x0010) (Transient)
	struct FCameraAttachment                           _currentCameraAttachment;                                 // 0x15A8(0x0010) (Transient)
	unsigned char                                      UnknownData12[0x8];                                       // 0x15B8(0x0008) MISSED OFFSET
	class UChargeableComponent*                        _hpSlot01;                                                // 0x15C0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UChargeableComponent*                        _hpSlot02;                                                // 0x15C8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UChargeableComponent*                        _carryEscapeProgress;                                     // 0x15D0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	struct FDBDTimer                                   _drainTimer;                                              // 0x15D8(0x0020) (Net, Transient)
	struct FDBDTimer                                   _dyingTimer;                                              // 0x15F8(0x0020) (Net, Transient)
	struct FDBDTimer                                   _injuredBleedoutTimer;                                    // 0x1618(0x0020) (Net, Transient)
	unsigned char                                      UnknownData13[0x44];                                      // 0x1638(0x0044) MISSED OFFSET
	struct FDBDTimer                                   _hideTimer;                                               // 0x167C(0x0020) (Transient)
	unsigned char                                      UnknownData14[0x4];                                       // 0x169C(0x0004) MISSED OFFSET
	bool                                               _isBeingChased;                                           // 0x16A0(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               _isInInjuredBleedout;                                     // 0x16A1(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData15[0x2];                                       // 0x16A2(0x0002) MISSED OFFSET
	int                                                _numHealthyHeals;                                         // 0x16A4(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData16[0x14];                                      // 0x16A8(0x0014) MISSED OFFSET
	bool                                               _runInputPressed;                                         // 0x16BC(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               _itemPreventRunning;                                      // 0x16BD(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData17[0x26];                                      // 0x16BE(0x0026) MISSED OFFSET
	int                                                _hookedCount;                                             // 0x16E4(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                _hookedBasementCount;                                     // 0x16E8(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData18[0x1];                                       // 0x16EC(0x0001) MISSED OFFSET
	bool                                               _isInTerrorRadius;                                        // 0x16ED(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               _trapIndicatorActive;                                     // 0x16EE(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData19[0x1];                                       // 0x16EF(0x0001) MISSED OFFSET
	TWeakObjectPtr<class ACamperPlayer>                _revealedSurvivor;                                        // 0x16F0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     _repAimPoint;                                             // 0x16F8(0x000C) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData20[0xC];                                       // 0x1704(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.CamperPlayer");
		return ptr;
	}


	void UpdateSlasherProximityEvents(float DeltaSeconds);
	void UpdateHealingTimer(float DeltaTime);
	void UpdateDrainTimer(float DeltaTime);
	void TriggerWiggleSkillCheck();
	void TriggerPutDownAnimation();
	void TriggerPickUpAnimation();
	void TriggerBloodTrail();
	void TriggerAfflictionHUDFeedback();
	void StopHealingTimer();
	void StartHealingTimer(float Time);
	void SetRevealedSurvivor(class ACamperPlayer* survivor);
	void SetOverlappingEscape(class AActor* Escape);
	void SetIsSacrificed(bool sacrificed);
	void SetImmobilized(TEnumAsByte<ECamperImmobilizeState> State);
	void SetGuidedActionLocal(TEnumAsByte<ECamperGuidedAction> Action);
	void SetGuidedAction(TEnumAsByte<ECamperGuidedAction> Action);
	void SetEnableHookSlashableZone(bool enable);
	void SetDamageState(TEnumAsByte<ECamperDamageState> E, bool FireScoreEvent);
	void SetCameraAttachment(class USceneComponent* Parent, const struct FName& SocketName);
	void SetBeingCarried(bool IsBeingCarried, class ADBDPlayer* carrier);
	void SetAutoInteractionMashEnabled(bool Enabled);
	void Server_SetRepAimPoint(const struct FVector& inRepAimPoint);
	void Server_SetOnHookDrainToNextStage(bool Enabled);
	void Server_SetItemNormalizedEnergyLevel(float normalizedLevel);
	void Server_SetItemEnergyLevel(float Level);
	void Server_SetImmobilized(TEnumAsByte<ECamperImmobilizeState> State);
	void Server_SetHookEscapeAutoSuccess(bool Enabled);
	void Server_SetEnableHookSlashableZone(bool Enabled);
	void Server_SendRunInput(bool Pressed);
	void Server_SendLeftRightMashedInput(bool Pressed);
	void Server_SendItemPreventRun(bool prevent);
	void Server_SendInteractMashedInput(bool Pressed);
	void Server_RemoveReverseBearTrap();
	void Server_RemoveHealth();
	void Server_MakeInvulnerable();
	void Server_Kill(bool sacrificed);
	void Server_IncreaseHealth();
	void Server_DebugResetHookedCount();
	void Server_CheatEscaped();
	void ResetPotentialSaviors();
	void ResetHideTimer();
	void ResetCameraAttachment();
	void RemoveReverseBearTrap();
	void OnUnhooked();
	void OnProximityEntered(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void OnPawnSensed(class APawn* Pawn);
	void OnHealthBarCharged(bool complete, TArray<class AActor*> instigators);
	void OnDroppedStart();
	void OnDroppedEnd(bool clearLeader);
	void OnDamageHit(const struct FHitResult& Hit, bool causedKO);
	void Multicast_SetOnHookDrainToNextStage(bool Enabled);
	void Multicast_SetImmobilized(TEnumAsByte<ECamperImmobilizeState> State);
	void Multicast_SetHookEscapeAutoSuccess(bool Enabled);
	void Multicast_SetGuidedAction(TEnumAsByte<ECamperGuidedAction> Action);
	void Multicast_SetEnableHookSlashableZone(bool Enabled);
	void Multicast_SetAuthoritativeMovementFlag(TEnumAsByte<EAuthoritativeMovementFlag> flag, bool Value);
	void Multicast_OnSlashed(class ADBDPlayer* attacker, bool applySprintEffect);
	void Multicast_OnKO();
	void Multicast_OnHealed(int healAmount);
	void Multicast_OnFailedStruggling(class UInteractionDefinition* Interaction);
	void Multicast_OnDamagedGameEvents(unsigned char healthStatesLost);
	void Multicast_FireDownedEvent();
	void Multicast_DebugSetHookedCount(int Count);
	void MoveToOwnerCarryJoint();
	void Kill(bool sacrificed);
	bool IsUnintentionallyImmobilized();
	bool IsTrapped();
	bool IsTotallyInsane();
	bool IsSuccessfullyHidden();
	bool IsSacrificed();
	bool IsOnHitSprintEffectActive();
	bool IsObsessionTarget();
	bool IsMovementGuided();
	bool IsKO();
	bool IsInsideCloset();
	bool IsInNeed();
	bool IsInjuredBleedoutTimerExpired();
	bool IsInjured();
	bool IsInInjuredBleedout();
	bool IsInChase();
	bool IsInBasement();
	bool IsImmobilized();
	bool IsHooked();
	bool IsHealthy();
	bool IsHealingTimerExpired();
	bool IsGuidedBySlasher();
	bool IsEscaped();
	bool IsDyingTimerExpired();
	bool IsDrainTimerExpired();
	bool IsDeadOrInParadise();
	bool IsDead();
	bool IsCrawling();
	bool IsCameraDetached();
	bool IsCameraAttached();
	bool IsBeingPutOnHook();
	bool IsBeingPutDown();
	bool IsBeingPickedUp();
	bool IsBeingKilled();
	bool IsBeingInteractedWith();
	bool IsBeingHealed();
	bool IsBeingChased();
	bool IsBeingCarried();
	void IncrementHookedBasementCount();
	void IncreaseHPSlotSize(float percent);
	bool HasReverseBearTrap();
	bool HasHitEvents();
	bool HasGuidedAction();
	float GetWiggleFreeChargePercent();
	struct FRotator GetToAimPointRotation();
	float GetStillness();
	class UDBDSpringArmComponent* GetSpringArmComponent();
	class ACamperPlayer* GetRevealedSurvivor();
	float GetPercentInjuredBleedoutTimer();
	float GetPercentHealingTimer();
	float GetPercentDyingTimer();
	float GetPercentDrainTimer();
	class AActor* GetOverlappingEscape();
	float GetObsessionTargetWeight();
	int GetNumberOfEntityRenderRegions();
	class UAnimationMontageSlave* GetMontageFollower();
	int GetMadnessTierBPNative();
	TEnumAsByte<ECamperImmobilizeState> GetImmobilizedState();
	int GetHookedBasementCount();
	TEnumAsByte<ECamperGuidedAction> GetGuidedAction();
	class UDBDClipRegionComponent* GetEntityRenderRegionAtIndex(int InIndex);
	float GetDropStaggerTimeLeft();
	float GetDropStaggerPercentTimeElapsed();
	TEnumAsByte<ECamperDamageState> GetDamageState();
	float GetCurrentTotalHealthBarPercent();
	class UChargeableComponent* GetCurrentHPSlot();
	class UCamperStillnessTrackerComponent* GetCamperStillnessComponent();
	class UDBDCamperData* GetCamperData();
	TArray<class UDBDClipRegionComponent*> GetAllEntityRenderRegions();
	struct FVector GetAimPoint();
	void Escape(class AActor* Escape);
	void DetachFromGuidingPlayer();
	void DetachCamera();
	void DBDApplyDamage(bool* didDamage, bool* causedKO);
	void DBD_LeaveParadise();
	void DBD_ForceRun(bool Forced);
	void DBD_CheatEscaped();
	void DBD_AutoLeftRightMash(bool Enabled);
	void DBD_AutoInteractionMash(bool Enabled);
	void DamageStateChangedEvent(TEnumAsByte<ECamperDamageState> DamageState);
	bool ComputeHookEscapeResult();
	bool ComputeBeartrapEscapeResult();
	void Client_OnSlashedOutOfTrap(class ADBDPlayer* Requester);
	bool CanStruggle();
	bool CanRushQuietly();
	bool CanHealSelf();
	bool CanGainInsanity();
	bool CanBeShocked();
	bool CanBePickedUp();
	bool CanBeKilled();
	bool CanBeImmediatelyKO();
	bool CanBeHealedFromInjured();
	bool CanBeHealed();
	bool CanBecomeHealthy();
	bool CanBeChased();
	void AuthoritySetHealth(TEnumAsByte<ECamperDamageState> health);
	void Authority_SetDrainTimerPercentLeft(float percentTime);
	void Authority_SetDrainTimerPercentElapsed(float percentTime);
	void Authority_ResetWiggleFreeCharge();
	void Authority_OnSlashed(class ADBDPlayer* attacker);
	void Authority_OnFailedStruggling(class UInteractionDefinition* Interaction);
	void Authority_DropItemAtLastSafePosition();
	void Authority_ApplyDamageToState(TEnumAsByte<ECamperDamageState> targetState, bool* didDamage, bool* causedKO);
	void Authority_AddWiggleFreeChargePercentNoModifiers(float ChargePercent);
	void Authority_AddWiggleFreeCharge(float charge);
	void AttachToGuidingPlayer();
	void ApplyHeal(int healAmount);
};


// Class DeadByDaylight.DBDSlasherData
// 0x0008 (0x0110 - 0x0108)
class UDBDSlasherData : public UDBDPlayerData
{
public:
	bool                                               VisionEnabled;                                            // 0x0108(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	bool                                               CloakingEnabled;                                          // 0x0109(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESlasherGuidedAction>                  CurrentGuidedAction;                                      // 0x010A(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x010B(0x0001) MISSED OFFSET
	float                                              SoundDisplayLifetime;                                     // 0x010C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.DBDSlasherData");
		return ptr;
	}

};


// Class DeadByDaylight.SlasherPlayer
// 0x0270 (0x1570 - 0x1300)
class ASlasherPlayer : public ADBDPlayer
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x1300(0x0010) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnChaseEnded;                                             // 0x1310(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnChaseStarted;                                           // 0x1320(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnOffensiveAction;                                        // 0x1330(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FVector                                     PutDownTraceLocation;                                     // 0x1340(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x134C(0x0004) MISSED OFFSET
	struct FName                                       DefaultSlasherPower;                                      // 0x1350(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LoudNoiseDisplayTime;                                     // 0x1358(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TerrorRadius;                                             // 0x135C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AbilityStealthRatioIncreaseRate;                          // 0x1360(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AbilityStealthRatioDecreaseRate;                          // 0x1364(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TargetPriorityFactor;                                     // 0x1368(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x1374(0x0004) MISSED OFFSET
	class UClass*                                      CamperExposer;                                            // 0x1378(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x1380(0x0002) MISSED OFFSET
	TEnumAsByte<EKillerMoodInfluence>                  KillerMoodInfluence;                                      // 0x1382(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x5];                                       // 0x1383(0x0005) MISSED OFFSET
	TArray<TEnumAsByte<EKillerAbilities>>              KillerAbilities;                                          // 0x1388(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               ShowKillerPowerDebugInfo;                                 // 0x1398(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               StartWithBloodlustStatusEffect;                           // 0x1399(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               HasDamagedGeneratorSinceHook;                             // 0x139A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x5];                                       // 0x139B(0x0005) MISSED OFFSET
	class UCurveFloat*                                 AttackForwardInputSmoothingCurve;                         // 0x13A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class UAkComponent>                 _audioComponent;                                          // 0x13A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              _slasherLightIntensity;                                   // 0x13B0(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x13B4(0x0004) MISSED OFFSET
	class ACamperPlayer*                               _guidedCamper;                                            // 0x13B8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData07[0x8];                                       // 0x13C0(0x0008) MISSED OFFSET
	TMap<class ADBDPlayer*, struct FChaseTimer>        _chaseTimers;                                             // 0x13C8(0x0050) (ZeroConstructor, Transient)
	TMap<class ADBDPlayer*, struct FChaseTimer>        _stalkTimers;                                             // 0x1418(0x0050) (ZeroConstructor, Transient)
	class UDBDPawnSensingComponent*                    _camperSensor;                                            // 0x1468(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UStillnessTrackerComponent*                  _stillnessTracker;                                        // 0x1470(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, IsPlainOldData)
	TArray<class UItemAddon*>                          _powerAddons;                                             // 0x1478(0x0010) (ExportObject, Net, ZeroConstructor, Transient)
	struct FDBDTimer                                   _recentlyCloakedTimer;                                    // 0x1488(0x0020) (Transient)
	struct FDBDTimer                                   _flashlightBlindEvasionScoreTimer;                        // 0x14A8(0x0020) (Transient)
	struct FDBDTimer                                   _flashlightBurnoutEvasionScoreTimer;                      // 0x14C8(0x0020) (Transient)
	float                                              _stalkTierWalkSpeedMultiplier;                            // 0x14E8(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              _stalkTierCarrySpeedMultiplier;                           // 0x14EC(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData08[0x10];                                      // 0x14F0(0x0010) MISSED OFFSET
	class ULoudNoiseHUDIndicator*                      _loudNoiseIndicator;                                      // 0x1500(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UFlashLightReceiverComponent*                _fullBodyFlashLightReceiver;                              // 0x1508(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UChargeableComponent*                        _invisibilityBurnoutChargeableComponent;                  // 0x1510(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	float                                              _stealthDelay;                                            // 0x1518(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              _nonAbilityStealthIncreaseRate;                           // 0x151C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              _nonAbilityStealthDecreaseRate;                           // 0x1520(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              _nonAbilityStealth;                                       // 0x1524(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              _abilityStealth;                                          // 0x1528(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData09[0x4];                                       // 0x152C(0x0004) MISSED OFFSET
	struct FDateTime                                   _stealthStartTime;                                        // 0x1530(0x0008) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData10[0x1A];                                      // 0x1538(0x001A) MISSED OFFSET
	bool                                               _isKilling;                                               // 0x1552(0x0001) (ZeroConstructor, IsPlainOldData)
	int8_t                                             _allowedKillCount;                                        // 0x1553(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	int8_t                                             _allowedKillAfterHookingCount;                            // 0x1554(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData11[0x1B];                                      // 0x1555(0x001B) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.SlasherPlayer");
		return ptr;
	}


	void UpdateRageTierEffect(int previousTier, int currentTier);
	void TriggerPutDownAnimation();
	void TriggerPickUpAnimation();
	void SpawnSlasherPower();
	bool ShouldApplyBloodlustSpeedModifier();
	void SetStalkTierWalkSpeedMultiplier(float stalkTierWalkSpeedMultiplier);
	void SetStalkTierCarrySpeedMultiplier(float stalkTierCarrySpeedMultiplier);
	void SetLightIntensity(float Intensity);
	void SetIsKilling(bool isKilling);
	void SetIsInBlinkCooldown(bool IsInBlinkCooldown);
	void SetIsChainBlinking(bool IsChainBlinking);
	void SetInteractingCamperBlueprint(class ACamperPlayer* camper);
	void SetGuidedCamper(class ACamperPlayer* camper);
	void SetGuidedAction(TEnumAsByte<ESlasherGuidedAction> Action);
	void SetChainsawSprinting(bool chainsawSprinting);
	void SetBeingWiggled(bool Value);
	void SetBaseTerrorRadius(float baseTerrorRadius);
	void SetAttackDetectionZoneSet(TEnumAsByte<EAttackZoneSet> attackZoneSet);
	void Server_SetLungeType(int lungeType);
	void Server_SendAttackInput(bool Pressed);
	void Server_AllowKilling(int8_t numKills);
	void OnSurvivorsLeftChanged(int survivorRemaining);
	void OnSurvivorKilled(class ACamperPlayer* playerToKill, bool consumeKill);
	void OnSuccessfulInterruption(class ACamperPlayer* interruptedSurvivor);
	void OnStealthChanged(bool stealth);
	void OnStalkModeChanged(bool stalkMode);
	void OnSoundTriggered(class AActor* originator, const struct FVector& Location, bool shouldTrack, float audibleRange);
	void OnPickupStart_BP();
	void OnPerformingChargableInteraction(float Progress);
	void OnLoudNoiseIndicatorDestroyed();
	void OnKillerAbilityUpdateActivate(TEnumAsByte<EKillerAbilities> KillerAbility, float percent);
	void OnKillerAbilityEndDeactivate(TEnumAsByte<EKillerAbilities> KillerAbility, bool Forced);
	void OnKillerAbilityEndActivate(TEnumAsByte<EKillerAbilities> KillerAbility);
	void OnKillerAbilityBeginDeactivate(TEnumAsByte<EKillerAbilities> KillerAbility, bool Forced);
	void OnKillerAbilityBeginActivate(TEnumAsByte<EKillerAbilities> KillerAbility);
	void OnInvisibilityChargeEmptied();
	void OnInvisibilityBurnoutChargeCompletionChanged(bool COMPLETED, TArray<class AActor*> instigators);
	void OnChaseTargetFound(class APawn* Pawn);
	void OnCamperHit(class ACamperPlayer* camper, bool showBloodSpatter);
	void OnBlindChargeEmptied();
	void Multicast_SetLungeType(int lungeType);
	void Multicast_SetGuidedAction(TEnumAsByte<ESlasherGuidedAction> Action);
	void Multicast_SetAttackDetectionZoneSet(TEnumAsByte<EAttackZoneSet> attackZoneSet);
	void Multicast_OnChaseStart(class ACamperPlayer* camper);
	void Multicast_OnChaseEnd(class ACamperPlayer* camper, float chaseTime);
	void Multicast_DisplayAttackZones(bool Display);
	void Multicast_DamageTargetNotification(class ADBDPlayer* Target, TEnumAsByte<EAttackType> attackType, bool didDamage);
	void Multicast_CamperHitAesthetic(class ACamperPlayer* camper, bool causedKO, bool showBloodSpatter);
	void Local_RequestAttack(TEnumAsByte<EAttackType> attackType);
	bool IsUncloaking();
	bool IsInChase();
	bool IsInBlinkCooldown();
	bool IsImmuneToObservingPlayerDetection(class ADBDPlayer* observingPlayer);
	bool IsHooking();
	bool IsCloaking();
	bool IsChainsawSprinting();
	bool IsChainBlinking();
	bool IsCarrying();
	bool IsASurvivorInTerrorRadius();
	bool IsAllowedToKill(class ACamperPlayer* camper);
	bool HasKillerAbility(TEnumAsByte<EKillerAbilities> KillerAbility);
	float GetTerrorRadius();
	float GetStealthRatio();
	float GetStalkTierWalkSpeedMultiplier();
	float GetStalkTierCarrySpeedMultplier();
	int GetRageTier();
	struct FVector GetPlayerDropOffPoint();
	class ACamperPlayer* GetObsessionTarget();
	struct FRotator GetLookRotation();
	float GetLongestChaseDuration();
	float GetLightIntensity();
	TArray<class UItemAddon*> GetItemAddons();
	class UChargeableComponent* GetInvisibilityBurnoutChargeableComponent();
	class ACamperPlayer* GetInteractingCamper();
	class ACamperPlayer* GetGuidedCamper();
	TEnumAsByte<ESlasherGuidedAction> GetGuidedAction();
	float GetBaseTerrorRadius();
	float GetAnimDirection();
	void DisplayAttackZones(bool Display);
	bool DetectObstruction(TEnumAsByte<EDetectionZone> detectionZoneID, class UPhysicalMaterial** physicalMaterialOut, struct FVector* positionOut, struct FVector* normalOut);
	void DBD_SetAttackZones(TEnumAsByte<EAttackZoneSet> attackZoneSet);
	void DBD_DisplayAttackZones(bool Display);
	void DBD_AllowKilling();
	void Client_RequestStun(TEnumAsByte<EStunType> stunType, class ADBDPlayer* stunner);
	bool CanPickupSurvivor();
	bool CanPerformKillerAbility(TEnumAsByte<EKillerAbilities> KillerAbility);
	bool CanGainRage();
	bool CanEscapeCarry(class ACamperPlayer* Player);
	bool CanBeBlinded();
	bool CanAffectLocalPlayer();
	void CameraUpdated();
	void BroadcastOffensiveAction();
	void Authority_StopBlinding(class AActor* effector);
	void Authority_Blinded(TEnumAsByte<EBlindType> blindType, float coolDown, class AActor* effector);
	void Authority_ApplyDamageToTarget(class ADBDPlayer* Target, bool forceCauseKO);
	void Authority_AllowKilling(int numKills);
	void Authority_AddInvisibilityBurnoutCharge(class ADBDPlayer* blinder, float charge, class AActor* effector);
};


// Class DeadByDaylight.DBDCharacterMovementComponent
// 0x0060 (0x0750 - 0x06F0)
class UDBDCharacterMovementComponent : public UCharacterMovementComponent
{
public:
	float                                              ProjectedWallSlidingFactor;                               // 0x06F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RandomInputFrontMultiplier;                               // 0x06F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RandomInputSideMultiplier;                                // 0x06F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RandomInputBackMultiplier;                                // 0x06FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 OnSprintMaxSpeedCurve;                                    // 0x0700(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       SprintEffector;                                           // 0x0708(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x30];                                      // 0x0710(0x0030) MISSED OFFSET
	class UCapsuleComponent*                           _movementModifierDetector;                                // 0x0740(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class AMovementModifierActor*                      _movementModifierActor;                                   // 0x0748(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.DBDCharacterMovementComponent");
		return ptr;
	}


	void SetRandomInputAmplitude(float Value);
	void SetMovementModifierDetector(class UCapsuleComponent* movementModifierDetector);
	void OnMovementModifierDetectorOverlapExit(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void OnMovementModifierDetectorOverlapEnter(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	bool IsApplyingRandomInput();
	class AMovementModifierActor* GetOverlappedMovementModifierActor();
};


// Class DeadByDaylight.CamperMovementComponent
// 0x0020 (0x0770 - 0x0750)
class UCamperMovementComponent : public UDBDCharacterMovementComponent
{
public:
	float                                              MaxRunSpeed;                                              // 0x0750(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxRunSpeedFatigued;                                      // 0x0754(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxRunSpeedInjured;                                       // 0x0758(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxWalkSpeedInjured;                                      // 0x075C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxDashAcceleration;                                      // 0x0760(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0764(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.CamperMovementComponent");
		return ptr;
	}

};


// Class DeadByDaylight.SlasherMovementComponent
// 0x0020 (0x0770 - 0x0750)
class USlasherMovementComponent : public UDBDCharacterMovementComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0750(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.SlasherMovementComponent");
		return ptr;
	}

};


// Class DeadByDaylight.NetworkFenceActor
// 0x0078 (0x03F8 - 0x0380)
class ANetworkFenceActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x0380(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.NetworkFenceActor");
		return ptr;
	}


	void Server_ClientPassedFence(TArray<struct FGuid> Fences);
	void Client_AllPassedFence(TArray<struct FGuid> Fences);
};


// Class DeadByDaylight.DBDEmblem
// 0x0018 (0x0040 - 0x0028)
class UDBDEmblem : public UObject
{
public:
	struct FName                                       EmblemId;                                                 // 0x0028(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               CanTick;                                                  // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0031(0x000F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.DBDEmblem");
		return ptr;
	}


	void TickEmblem(float DeltaTime);
	void OnPlayerGameplayEvent(TEnumAsByte<EDBDScoreTypes> gameplayEventType, float amount, class AActor* Instigator, class AActor* Target);
	void OnGameplayEvent(TEnumAsByte<EDBDScoreTypes> gameplayEventType, float amount, class AActor* Instigator, class AActor* Target);
	bool IsOwnerPlayer(class AActor* Actor);
	void InitializeEmblem();
	class UWorld* GetWorld();
	float GetProgress();
	TEnumAsByte<EEmblemQuality> GetEmblemQuality();
	int EvaluateEmblemQuality();
};


// Class DeadByDaylight.DBDPlayerControllerBase
// 0x0220 (0x08D0 - 0x06B0)
class ADBDPlayerControllerBase : public APlayerController
{
public:
	unsigned char                                      UnknownData00[0x220];                                     // 0x06B0(0x0220) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.DBDPlayerControllerBase");
		return ptr;
	}


	void Server_UpdateReplicatedPips(int pipsToAdd);
	void Server_SendMessage(int PlayerId, const class FString& MirrorsId, const class FString& PlayerName, const class FString& msg);
	void Server_SendClientAuthentication(const class FString& authClientTicket, uint64_t SteamId, uint32_t ticketLength);
	void Server_SelectSlasher(int slasherIndex);
	void Server_SelectCamper(int camperIndex);
	void Server_ReceivePlayerProfile(const class FString& MirrorsId, const struct FPlayerSavedProfileDataShared& savedProfileData, const struct FPlayerLoadoutData& playerLoadout);
	void Server_EACMessageFromClient(TArray<unsigned char> Message, uint32_t messageLength);
	void Server_CheatFireScoreEvent(TEnumAsByte<EDBDScoreTypes> Category, float Value);
	void Server_BuildProceduralLevelFromSeed(int Seed);
	void Server_BuildProceduralLevelFromMap(const class FString& Map);
	void Server(const class FString& commandLine);
	void OnRep_PlayerState();
	void DBD_UpdateLocalStats();
	void DBD_SetCurrentCharacterPrestigeDatesPast();
	void DBD_SetCurrentCharacterPrestigeDatesNow();
	void DBD_SetCurrentCharacterPrestigeDatesFuture();
	void DBD_FireTestScore(int Category, float Value);
	void DBD_FillScoreCategory(int Category);
	void DBD_FillAllScoreCategories();
	void DBD_DebugSendChatMessage(const class FString& msg);
	void DBD_BuildFromSeed(int Seed);
	void DBD_BuildFromMap(const class FString& Map);
	void Client_ValidateServer();
	void Client_SendServerAuthentication(const class FString& authServerTicket, uint64_t SteamId, uint32_t ticketLength);
	void Client_RequestPlayerProfile(bool fromOfflineLobby);
	void Client_GameEnded();
	void Client_FinishedPlaying();
	void Client_EACMessageFromServer(TArray<unsigned char> Message, uint32_t messageLength);
	void CallConsoleCmdOnServer_Server(const class FString& commandLine);
};


// Class DeadByDaylight.DBDPlayerController
// 0x0130 (0x0A00 - 0x08D0)
class ADBDPlayerController : public ADBDPlayerControllerBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x08D0(0x0008) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnLocallyObservedChanged;                                 // 0x08D8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x80];                                      // 0x08E8(0x0080) MISSED OFFSET
	class ANetworkFenceActor*                          _theFence;                                                // 0x0968(0x0008) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0970(0x0004) MISSED OFFSET
	struct FDBDTimer                                   _yawInputScalingTimer;                                    // 0x0974(0x0020) (Transient)
	struct FDBDTimer                                   _pitchInputScalingTimer;                                  // 0x0994(0x0020) (Transient)
	unsigned char                                      UnknownData03[0x4C];                                      // 0x09B4(0x004C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.DBDPlayerController");
		return ptr;
	}


	void Server_SetSpectatorModeInEditor(bool On, class ADBDPlayerState* spectatingPlayerState);
	void Server_SetSpectatorMode(bool On);
	void Server_SetReadyToTravel();
	void Server_LeaveGame(bool joiningLobby);
	void Server_EndGame(bool serverHasLeftTheGame);
	void Server_CompleteEscapeRequirements();
	void OnRep_Fence();
	bool IsSpectating();
	class ADBDPlayerState* GetSpectatedPlayerState();
	class ADBDPlayer* GetSpectatedPlayer();
	class ADBDPlayer* GetControlledPlayer();
	void Client_SetSpectatorModeInEditor(bool On, class ADBDPlayerState* spectatingPlayerState);
	void Client_SetSpectatorMode(bool On);
};


// Class DeadByDaylight.DBDCheatManager
// 0x0010 (0x0088 - 0x0078)
class UDBDCheatManager : public UCheatManager
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0078(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.DBDCheatManager");
		return ptr;
	}


	void DBD_WakeUpSurvivor();
	void DBD_VisualizeHookRenderRegions();
	void DBD_ValidateCustomizationItems(const struct FName& ItemName);
	void DBD_ValidateAllCustomizationItems();
	void DBD_UnloadDarkPartAssetLibrary();
	void DBD_UnloadCharacterAssetLibrary(int CharacterId);
	void DBD_UnloadBlindPackAssetLibrary();
	void DBD_UnloadAllCharacterAssetLibrary();
	void DBD_ToggleProceduralDebugMode();
	void DBD_TestUnhookSacrificeBug(bool Enabled);
	void DBD_TeleportToTile(uint32_t X, uint32_t Y);
	void DBD_Teleport(float X, float Y, float Z);
	void DBD_StopVideoPlayer();
	void DBD_StopLoadCharacterAssetLibrary(int CharacterId);
	void DBD_SpectateSurvivor();
	void DBD_SpectateKiller();
	void DBD_SpawnStatusEffect(const struct FName& statusEffectID);
	void DBD_SpawnPerk(const struct FName& PerkID, int PerkLevel);
	void DBD_SpawnkCharacterInMainMenu(int CharacterId);
	void DBD_SpawnItemInMainMenu(const struct FName& ItemId);
	void DBD_SpawnItemAddon(const struct FName& AddonID);
	void DBD_SpawnItem(const struct FName& ItemId);
	void DBD_SpawnDarkCharacterInMainMenu(int CharacterId, const struct FName& focusCategory);
	void DBD_SpawnCampers(int Count);
	void DBD_ShowStoreUI(const class FString& productId);
	void DBD_ShowKillerPowerDebugInfo(bool Enabled);
	void DBD_ShowGameInstalledPrompt();
	void DBD_ShowDebugSpawnBox(int itemCountPerBox, float seconds);
	void DBD_ShopCameraQuit();
	void DBD_ShopCameraMain();
	void DBD_ShopCameraBox();
	void DBD_SetWindowFreeCam(bool Enabled);
	void DBD_SetUserBonusBloodpoints(int Points);
	void DBD_SetUserBloodpoints(int Points);
	void DBD_SetTotalXp(int totalXp);
	void DBD_SetSurvivorLeftCount(int Count);
	void DBD_SetStoreHitBoxesVisible(bool Value);
	void DBD_SetSlasherAutoAttackOnCamperInteractFrameDelay(int frames);
	void DBD_SetRunVaultEnabled(bool Enabled);
	void DBD_SetReverseTraverseEnabled(bool Enabled);
	void DBD_SetRandomInputAmplitude(float Amplitude);
	void DBD_SetPlayerLevel(int currentXp, int playerLevel, int Prestige);
	void DBD_SetPerchRadiusThreshold(float Threshold);
	void DBD_SetOnHookDrainToNextStage(bool onHookDrainToNextStage);
	void DBD_SetOfferingTriggersVisibility(bool IsVisible);
	void DBD_SetNewsContentUpdateTimer(float updateInSeconds, bool repeatTimer);
	void DBD_SetMaxWalkSpeed(float MaxWalkSpeed);
	void DBD_SetLungeType(int lungeType);
	void DBD_SetKillerHeadVisibility(bool Visible);
	void DBD_SetItemNormalizedEnergyLevel(float normalizedLevel);
	void DBD_SetItemEnergyLevel(float Level);
	void DBD_SetHighestWeightSeenNews(int Value);
	void DBD_SetHatchetVar(const struct FName& VarName, float Value);
	void DBD_SetFearMarketUpdateTimer(float updateInSeconds, bool repeatTimer);
	void DBD_SetEthereal(bool Enabled);
	void DBD_SetEnableHookSlashableZone(bool Enabled);
	void DBD_SetDebugSnapPoint(bool Enabled);
	void DBD_SetDebugPrintAvailableInteractions(bool Enabled);
	void DBD_SetDebugFailAllInteractions(bool Enabled);
	void DBD_SetDebugCarry(bool Enabled);
	void DBD_SetDate(const class FString& dateString);
	void DBD_SetCustomizationMesh(const struct FName& ItemName);
	void DBD_SetContinuousPrintState(bool Enabled);
	void DBD_SetContinuousPrintDebug(bool Enabled);
	void DBD_SetChunkProgress(int chunkProgress);
	void DBD_SetChunkingState(unsigned char chunkState);
	void DBD_SetCharacterStat(const struct FName& StatName, float amount);
	void DBD_SetAutoItemInteractEnabled(bool Enabled, float duration, float Delay);
	void DBD_SetAutoInteractEnabled(bool Enabled, float duration, float Delay);
	void DBD_SetAuthoritativeMovement(bool Enabled);
	void DBD_SetActiveGeneratorCount(int Count);
	void DBD_SelectSpawner(int Type);
	void DBD_SelectSlasher(uint32_t slasherIndex);
	void DBD_SelectCamper(uint32_t camperIndex);
	void DBD_ReverseBearTrap_ForceTimer(bool Force);
	void DBD_ReverseBearTrap_FastForward(float DeltaTime);
	void DBD_ReverseBearTrap_Execute();
	void DBD_ResistentCamper();
	void DBD_ResetTutorialTips();
	void DBD_ResetSeason();
	void DBD_ResetPlayerLevelAndXp();
	void DBD_ResetPallets();
	void DBD_ResetMeshRelativeOffSet();
	void DBD_ResetHookStage();
	void DBD_ResetCharacterStat(const struct FName& StatName);
	void DBD_ResetCamera();
	void DBD_ResetBloodpoints();
	void DBD_ResetAllCharacterStats();
	void DBD_RemoveReverseBearTrap();
	void DBD_RemoveHP();
	void DBD_RemoveDust(int Count);
	void DBD_RemoveAllStatusEffects();
	void DBD_RemoveAllPerks();
	void DBD_Ragdoll(const struct FName& RootBone, float Blend);
	void DBD_PutSurvivorToSleep();
	void DBD_ProcessOffering();
	void DBD_PrintSteamBuildIds();
	void DBD_PrintCurrentStateOnce();
	void DBD_PlayMontage(const struct FName& MontageID);
	void DBD_PlayEntityTurn();
	void DBD_OptionToggleUseHeadphones();
	void DBD_OptionToggleMuteOnFocusLost();
	void DBD_OptionToggleMuteMusic();
	void DBD_OptionToggleInvertY();
	void DBD_OptionToggleFullScreen();
	void DBD_OptionToggleAutoAdjust();
	void DBD_OptionSetResolution(int Resolution);
	void DBD_OptionSetQualityLevel(uint32_t qualityLevel);
	void DBD_OptionSetMainVolume(int Volume);
	void DBD_OptionSetLanguage(const class FString& lang);
	void DBD_OpenStoreFromRoleSelection();
	void DBD_OpenLogFolder();
	void DBD_NewAuthToken();
	void DBD_Mute(bool mute);
	void DBD_MirrorsSteamValidateTransaction(const class FString& orderId, const struct FName& ItemId);
	void DBD_MirrorsSteamInitTransaction(const struct FName& ItemId, const class FString& Description);
	void DBD_MirrorsSteamFinalizeTransaction(const class FString& orderId);
	void DBD_MirrorsReportPlayer(const class FString& reportedPlayerMirrorsId);
	void DBD_MirrorsRefreshWallet();
	void DBD_MirrorsPurchaseNonPremiumItem(const struct FName& objectId, double toPurchaseQuantity, const class FString& currencyId);
	void DBD_MirrorsPurchaseCharacter(const struct FName& characterCatalogId, const class FString& currencyId);
	void DBD_MirrorsPurchaseBundle(const struct FName& objectId, double toPurchaseQuantity, const class FString& currencyId, bool isPremium);
	void DBD_MirrorsOpenBlindPack(const struct FName& packId);
	void DBD_MirrorsLoadPlayerData();
	void DBD_MirrorsLoadOutfits();
	void DBD_MirrorsGetCharacterCustomizationItemData();
	void DBD_MirrorsGetAvailableBundles();
	void DBD_MirrorsDropInventoryItem(const class FString& objectId, int DropCount);
	void DBD_MirrorsDropAllInventoryItems();
	void DBD_MirrorsConsumeItem(const struct FName& objectId);
	void DBD_MirrorsClaimMessageRewards();
	void DBD_MayThereBeOutlines(const class FString& Value);
	void DBD_LoadDarkPartAssetLibrary();
	void DBD_LoadCharacterAssetLibrary(int CharacterId);
	void DBD_LoadCatalogDataFromS3();
	void DBD_ListStatusEffects();
	void DBD_ListPerks();
	void DBD_ListItemAddons();
	void DBD_ListInventory();
	void DBD_ListInteractionInZone();
	void DBD_ListDBStatusEffects();
	void DBD_ListDBPerks();
	void DBD_ListDBOfferings();
	void DBD_ListDBItems();
	void DBD_ListDBItemAddons();
	void DBD_ListDBCustomizations();
	void DBD_ListAvailableInteractions();
	void DBD_ListAllStatusEffects();
	void DBD_ListAllPerks();
	void DBD_ListAllItemAddons();
	void DBD_LevelUp();
	void DBD_Kill(bool sacrificed);
	void DBD_ItsAlive(bool Enabled);
	void DBD_IsServerPositionUpdatesEnabled();
	void DBD_ImportLocalSaveGame();
	void DBD_HookEscapeAutoSuccess(bool Enabled);
	void DBD_GrantInventoryItemOnLevelUp(const class FString& playerType, const class FString& ItemId);
	void DBD_GetSyncedUTCTime();
	void DBD_GetPlayerLevel();
	void DBD_GetHighestWeightSeenNews();
	void DBD_GetChunkingState();
	void DBD_GenerateAuthToken();
	void DBD_ForceSkillChecks(bool Enabled);
	void DBD_ForceFlee(bool toward);
	void DBD_ForceDisableSkillChecks(bool Enabled);
	void DBD_ForceDisableFootIK(bool Enabled);
	void DBD_ForceBackendUnreachable(int Force);
	void DBD_ExportLocalSaveGame();
	void DBD_EntitlementsInfo();
	void DBD_EnsureFail();
	void DBD_EndGame();
	void DBD_EnableStealth(bool Enabled);
	void DBD_EnableServerPositionUpdates(bool Enabled);
	void DBD_EnableLiveBackendWhenNotInShipping(bool Enabled);
	void DBD_EnableDebugUnavailableInteractions(bool Enabled);
	void DBD_EnableCapsuleDynamicResize(bool Enabled);
	void DBD_EarnXpAmount(int matchXp);
	void DBD_EarnPlayerXp(int matchTime, bool isFirstMatch, int consecutiveMatch, const class FString& playerType, const class FString& highestEmblemQuality, bool queueForTally);
	void DBD_DropSurvivorItems();
	void DBD_DisplayPlayerStat(const struct FName& StatName);
	void DBD_DisplayCharacterStat(const struct FName& StatName);
	void DBD_DispatchOnPostItemAddonsCreation();
	void DBD_DestroyAllMenuCharacter();
	void DBD_DeleteAllCharacterAssetLibrary();
	void DBD_DebugSetCustomizationMesh(const struct FName& ItemName);
	void DBD_DebugPrintInteractionsInZone();
	void DBD_DebugIsInterruptable(bool interruptable);
	void DBD_DebugInteractionPriority(bool Enabled);
	void DBD_CrashGameWithNullPtr();
	void DBD_CrashGameWithCheck();
	void DBD_ConsumeBloodwebs(int initialLevel, int Count);
	void DBD_CompleteEscapeRequirements();
	void DBD_CloseSystemPromptAndResetStack();
	void DBD_ClearPotentialReferencesToChunksNotYetDownloaded();
	void DBD_CheatChainsaw(bool Enabled);
	void DBD_BuyBloodwebsLevel(int initialLevel, int Count);
	void DBD_AutoWiggle();
	void DBD_AlwaysPounce(bool Enabled);
	void DBD_AddToPlayerStat(const struct FName& StatName, float amount);
	void DBD_AddToCharacterStat(const struct FName& StatName, float amount);
	void DBD_AddOffering(const struct FName& Name);
	void DBD_AddHP();
	void DBD_AddDust(int Count);
	void DBD_ActivateWeakenedMechanic(bool On);
	void DBD_ActivateEscapeDoor();
};


// Class DeadByDaylight.DBDCustomizationTool
// 0x0650 (0x09D0 - 0x0380)
class ADBDCustomizationTool : public AActor
{
public:
	TAssetPtr<class UClass>                            OverallLightingClass;                                     // 0x0380(0x0020) (Edit)
	struct FDBDCustomizationToolData                   CustomizationData;                                        // 0x03A0(0x0618) (Edit)
	TArray<class AActor*>                              _spawnedActors;                                           // 0x09B8(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x09C8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.DBDCustomizationTool");
		return ptr;
	}

};


// Class DeadByDaylight.DBDDebugInputComponent
// 0x0010 (0x00F8 - 0x00E8)
class UDBDDebugInputComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00E8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.DBDDebugInputComponent");
		return ptr;
	}

};


// Class DeadByDaylight.DBDDiceRoller
// 0x0000 (0x0028 - 0x0028)
class UDBDDiceRoller : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.DBDDiceRoller");
		return ptr;
	}


	bool STATIC_GetRollResultByTunableValue(class AActor* RollingActor, const struct FName& TunableValueName, float MultiplicativeModifier, float AdditiveModifier);
	bool STATIC_GetRollResultByDiceRollType(class ADBDPlayer* RollingPlayer, TEnumAsByte<EDiceRollType> DiceRollType);
	bool STATIC_CalculateTickedRollResult(class AActor* RollingActor, float BaseProbability, float ticks, float MultiplicativeModifier, float AdditiveModifier);
	bool STATIC_CalculateRollResult(class AActor* RollingActor, float BaseProbability, float MultiplicativeModifier, float AdditiveModifier);
	bool STATIC_CalculateOverTimeRollResult(class AActor* RollingActor, float BaseProbability, float DeltaTime, float ExpectedTime, float MultiplicativeModifier, float AdditiveModifier);
};


// Class DeadByDaylight.DBDEasyAntiCheat
// 0x00D8 (0x0100 - 0x0028)
class UDBDEasyAntiCheat : public UObject
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x0028(0x0078) MISSED OFFSET
	class UDBDGameInstance*                            _gameInstance;                                            // 0x00A0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               _connectedToServer;                                       // 0x00A8(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x57];                                      // 0x00A9(0x0057) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.DBDEasyAntiCheat");
		return ptr;
	}

};


// Class DeadByDaylight.DBDEmblem_KillerChaser
// 0x0040 (0x0080 - 0x0040)
class UDBDEmblem_KillerChaser : public UDBDEmblem
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0040(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.DBDEmblem_KillerChaser");
		return ptr;
	}


	void OnChaseStart(class ACamperPlayer* chasedPlayer);
};


// Class DeadByDaylight.DBDEmblem_KillerDevout
// 0x0018 (0x0058 - 0x0040)
class UDBDEmblem_KillerDevout : public UDBDEmblem
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0040(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.DBDEmblem_KillerDevout");
		return ptr;
	}


	void OnPlayerDisconnect(class ADBDPlayer* Player);
};


// Class DeadByDaylight.DBDEmblem_KillerGatekeeper
// 0x0028 (0x0068 - 0x0040)
class UDBDEmblem_KillerGatekeeper : public UDBDEmblem
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0040(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.DBDEmblem_KillerGatekeeper");
		return ptr;
	}

};


// Class DeadByDaylight.DBDEmblem_KillerMalicious
// 0x0068 (0x00A8 - 0x0040)
class UDBDEmblem_KillerMalicious : public UDBDEmblem
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x0040(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.DBDEmblem_KillerMalicious");
		return ptr;
	}


	void OnPlayerDisconnect(class ADBDPlayer* Player);
};


// Class DeadByDaylight.DBDEmblem_SurvivorBenevolent
// 0x0060 (0x00A0 - 0x0040)
class UDBDEmblem_SurvivorBenevolent : public UDBDEmblem
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0040(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.DBDEmblem_SurvivorBenevolent");
		return ptr;
	}

};


// Class DeadByDaylight.DBDEmblem_SurvivorEvader
// 0x0068 (0x00A8 - 0x0040)
class UDBDEmblem_SurvivorEvader : public UDBDEmblem
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x0040(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.DBDEmblem_SurvivorEvader");
		return ptr;
	}


	void OnChaseStartEvent(class ACamperPlayer* chasedPlayer);
};


// Class DeadByDaylight.DBDEmblem_SurvivorLightbringer
// 0x0020 (0x0060 - 0x0040)
class UDBDEmblem_SurvivorLightbringer : public UDBDEmblem
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0040(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.DBDEmblem_SurvivorLightbringer");
		return ptr;
	}

};


// Class DeadByDaylight.DBDEmblem_SurvivorUnbroken
// 0x0018 (0x0058 - 0x0040)
class UDBDEmblem_SurvivorUnbroken : public UDBDEmblem
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0040(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.DBDEmblem_SurvivorUnbroken");
		return ptr;
	}

};


// Class DeadByDaylight.DBDEmblemEvaluatorComponent
// 0x0010 (0x00F8 - 0x00E8)
class UDBDEmblemEvaluatorComponent : public UActorComponent
{
public:
	TArray<class UDBDEmblem*>                          _emblems;                                                 // 0x00E8(0x0010) (ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.DBDEmblemEvaluatorComponent");
		return ptr;
	}


	void OnPlayerGameplayEvent(TEnumAsByte<EDBDScoreTypes> ScoreType, float amount, class AActor* Instigator, class AActor* Target);
	void OnGameplayEvent(TEnumAsByte<EDBDScoreTypes> ScoreType, float amount, class AActor* Instigator, class AActor* Target);
};


// Class DeadByDaylight.DBDEngineUtils
// 0x0000 (0x0028 - 0x0028)
class UDBDEngineUtils : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.DBDEngineUtils");
		return ptr;
	}

};


// Class DeadByDaylight.DBDGameState
// 0x0450 (0x0830 - 0x03E0)
class ADBDGameState : public AGameState
{
public:
	struct FScriptMulticastDelegate                    OnEscapeDoorActivated;                                    // 0x03E0(0x0010) (ZeroConstructor, Transient, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x150];                                     // 0x03F0(0x0150) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnLevelReadyToPlay;                                       // 0x0540(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnIntroCompleted;                                         // 0x0550(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnSurvivorsLeftChanged;                                   // 0x0560(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    AuthorityOnAllPlayerLoaded;                               // 0x0570(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x70];                                      // 0x0580(0x0070) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnActivatedGeneratorCountChangedDynamic;                  // 0x05F0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnSlasherSet;                                             // 0x0600(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class ASlasherPlayer*                              Slasher;                                                  // 0x0610(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	int                                                CamperDeadCount;                                          // 0x0618(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	int                                                CamperInMeatLockerCount;                                  // 0x061C(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	int                                                CamperEscaped;                                            // 0x0620(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	int                                                WaitingForEscape;                                         // 0x0624(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	int                                                CamperCount;                                              // 0x0628(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               LeaveSpectateRequested;                                   // 0x062C(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               IsGameEnded;                                              // 0x062D(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x062E(0x0002) MISSED OFFSET
	int                                                SecondsLeftInLobby;                                       // 0x0630(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	int                                                _camperHookedInBasementCount;                             // 0x0634(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x8];                                       // 0x0638(0x0008) MISSED OFFSET
	bool                                               _gameLevelLoaded;                                         // 0x0640(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               _playersReadyToStart;                                     // 0x0641(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x6];                                       // 0x0642(0x0006) MISSED OFFSET
	struct FBuiltLevelData                             _builtLevelData;                                          // 0x0648(0x0038) (Net, Transient)
	struct FOfferingData                               _levelOfferings;                                          // 0x0680(0x0018) (Net, Transient)
	class AClipManager*                                _clipManager;                                             // 0x0698(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FServerJoiningData                          _serverJoiningData;                                       // 0x06A0(0x0030) (Net, Transient)
	unsigned char                                      UnknownData05[0x28];                                      // 0x06D0(0x0028) MISSED OFFSET
	struct FGuid                                       _sessionId;                                               // 0x06F8(0x0010) (Net, ZeroConstructor, Transient, IsPlainOldData)
	int                                                _activatedGeneratorCount;                                 // 0x0708(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	int                                                _requiredActivatedGeneratorCount;                         // 0x070C(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               _escapeDoorActivated;                                     // 0x0710(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               _escapeDoorOpened;                                        // 0x0711(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               _isHatchOpen;                                             // 0x0712(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               _levelReadyToPlay;                                        // 0x0713(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               _playerDistributionReady;                                 // 0x0714(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               _usingWeakenedMechanic;                                   // 0x0715(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData06[0x2];                                       // 0x0716(0x0002) MISSED OFFSET
	int                                                _survivorLeft;                                            // 0x0718(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x071C(0x0004) MISSED OFFSET
	TArray<class AGenerator*>                          _generators;                                              // 0x0720(0x0010) (ZeroConstructor, Transient)
	TArray<class APallet*>                             _pallets;                                                 // 0x0730(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData08[0x30];                                      // 0x0740(0x0030) MISSED OFFSET
	int                                                _camperEscapedThroughHatch;                               // 0x0770(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x4];                                       // 0x0774(0x0004) MISSED OFFSET
	class ACamperPlayer*                               _obsessionTarget;                                         // 0x0778(0x0008) (Net, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               _cachedObsessionEscaped;                                  // 0x0780(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x2F];                                      // 0x0781(0x002F) MISSED OFFSET
	struct FGamePresetData                             _gamePresetData;                                          // 0x07B0(0x0078) (Net, Transient)
	unsigned char                                      UnknownData11[0x8];                                       // 0x0828(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.DBDGameState");
		return ptr;
	}


	void TravelToKillerServer();
	void SortOfferings();
	bool ShouldDisplayMapName();
	void SetupGameLoaded();
	void SetSlasher(class ASlasherPlayer* SlasherPlayer);
	void SetPlayersReadyToStart(bool playersReadyToStart);
	void SetKillerIntroCompletedNormalized(float completedAmount);
	void SetGameSelectedOffering(TArray<struct FSelectedOffering> Offerings);
	void SetGameLevelLoaded();
	void SetDisplayMapName(bool Display);
	void SetBuiltLevelData(const struct FName& ThemeName, const struct FName& ThemeWeather, const class FString& MapName, int TileCount, TArray<struct FDependency> LevelDependencies);
	void Server_UpdateGameRole();
	void ResetGameLevelLoaded();
	void RemoveTrap(class AInteractable* toRemove);
	void RemoveHeartbeatEmitter(class AActor* toRemove);
	void OnRep_SurvivorLeft(int OldValue);
	void OnRep_SessionId(const struct FGuid& OldValue);
	void OnRep_ServerJoiningData();
	void OnRep_RequiredActivatedGeneratorCount(int oldRequiredActivatedGeneratorCount);
	void OnRep_PlayersReadyToStart(bool OldValue);
	void OnRep_OnLevelReadyToPlay(bool OldValue);
	void OnRep_OnLevelLoaded(bool OldValue);
	void OnRep_OfferingSequenceReady();
	void OnRep_HatchOpened(bool OldValue);
	void OnRep_GamePresetData();
	void OnRep_EscapeDoorActivated(bool OldValue);
	void OnRep_ActivatedGeneratorCount(int OldValue);
	void Multicast_UpdateCharacterFromGamePreset(class ADBDPlayerState_Menu* playerState_Menu, const struct FGamePresetData& GamePresetData);
	void Multicast_SetServerLeftGame(bool hasServerLeftGame);
	void Multicast_SetLostServerConnection(bool hasLostServerConnection);
	void Multicast_SetGameLevelLoaded();
	void Multicast_SetGameEnded(bool hasServerLeftGame);
	void Multicast_SetBuiltLevelData(const struct FName& ThemeName, const struct FName& ThemeWeather, const class FString& MapName, int TileCount, TArray<struct FDependency> LevelDependencies);
	void Multicast_KillerServerSearchFailed();
	void Multicast_KillerSearchStarted();
	void Multicast_JoinKillerServerFailed();
	void KillerServerFound(const struct FServerJoiningData& joinParams);
	bool IsPlayerDistributionReady();
	bool IsOnePlayerLeft();
	bool IsOfferingReceived();
	bool IsObsessionTargetAliveInLevel();
	bool IsObsessionTargetAlive();
	bool IsLightingGenerated();
	bool IsLevelSetupDone();
	bool IsLevelReadyToPlay();
	bool IsIntroCompleted();
	bool IsHatchVisible();
	bool IsEscapeDoorOpen();
	bool IsEscapeDoorActivated();
	void IntroCompleted();
	int GetSurvivorLeft();
	TArray<struct FSelectedOffering> GetSelectedOfferings();
	bool GetSelectedOffering(int Index, struct FSelectedOffering* SelectedOffering);
	int GetRemainingGeneratorsNeeded();
	class ADBDPlayerState* GetPlayerStateByIDString(const class FString& ID);
	bool GetPlayersReadyToStart();
	void GetPlayerRoleCounts(int* survivorCount, int* killerCount, int* SpectatorCount);
	class ACamperPlayer* GetObsessionTarget();
	int GetNumberOfOtherActiveSurvivors(class ACamperPlayer* exception);
	int GetNumberOfActiveSurvivors();
	class ADBDPlayerState* GetLocalPlayerState();
	class ADBDPlayer* GetLocalPlayerPawn();
	class APawn* GetLocalPlayerBasePawn();
	struct FBuiltLevelData GetLevelData();
	float GetKillerIntroCompletedNormalized();
	class ASlasherPlayer* GetKiller();
	TArray<class APallet*> GetInGamePallets();
	TArray<class AGenerator*> GetInGameGenerators();
	int GetHeartbeatEmittersCount();
	bool GetGameLevelLoaded();
	void Authority_SetSurvivorLeft(int survivorRemaining);
	void Authority_SetServerJoiningData(const struct FServerJoiningData& joiningData);
	void Authority_SetLevelReadyToPlay();
	void Authority_SetHatchOpen(bool OPENED);
	void Authority_SetEscapeDoorOpened(bool OPENED);
	void Authority_SetAllPlayerLoaded();
	void Authority_EvaluateObsessionTarget(class ADBDPlayer* potentialTarget);
	void Authority_EscapeThroughHatch();
	void Authority_EnableObsession();
	void AddTrap(class AInteractable* toAdd);
	void AddHeartbeatEmitter(class AActor* toAdd);
};


// Class DeadByDaylight.DBDGame_Lobby
// 0x0018 (0x0478 - 0x0460)
class ADBDGame_Lobby : public AGameMode
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0460(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.DBDGame_Lobby");
		return ptr;
	}


	void DBD_ForceStartMatch();
};


// Class DeadByDaylight.DBDGame_Menu
// 0x0020 (0x0480 - 0x0460)
class ADBDGame_Menu : public AGameMode
{
public:
	bool                                               StartWithSlasher;                                         // 0x0460(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1F];                                      // 0x0461(0x001F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.DBDGame_Menu");
		return ptr;
	}

};


// Class DeadByDaylight.DBDGame_Start
// 0x00D0 (0x0530 - 0x0460)
class ADBDGame_Start : public AGameMode
{
public:
	unsigned char                                      UnknownData00[0xD0];                                      // 0x0460(0x00D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.DBDGame_Start");
		return ptr;
	}

};


// Class DeadByDaylight.DBDGameEngine
// 0x0000 (0x0CC0 - 0x0CC0)
class UDBDGameEngine : public UGameEngine
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.DBDGameEngine");
		return ptr;
	}

};


// Class DeadByDaylight.DBDGameFlowUtilities
// 0x0000 (0x0028 - 0x0028)
class UDBDGameFlowUtilities : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.DBDGameFlowUtilities");
		return ptr;
	}


	void STATIC_TriggerWorldFlowUpdate(class UObject* WorldContextObject, TEnumAsByte<EWorldFlowEvent> worldFlowEvent);
	void STATIC_TriggerUIFlowUpdate(class UObject* WorldContextObject, TEnumAsByte<EUIFlowEvent> uiFlowEvent);
};


// Class DeadByDaylight.LightingData
// 0x0030 (0x0058 - 0x0028)
class ULightingData : public UDataAsset
{
public:
	TAssetPtr<class UClass>                            DefaultLighting;                                          // 0x0028(0x0020) (Edit, DisableEditOnInstance)
	TArray<struct FSceneLightingDescription>           Descriptions;                                             // 0x0048(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.LightingData");
		return ptr;
	}

};


// Class DeadByDaylight.LightingFactory
// 0x0008 (0x0030 - 0x0028)
class ULightingFactory : public UObject
{
public:
	class ULightingData*                               _data;                                                    // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.LightingFactory");
		return ptr;
	}

};


// Class DeadByDaylight.LocalEventManager
// 0x09A8 (0x09D0 - 0x0028)
class ULocalEventManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x9A8];                                     // 0x0028(0x09A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.LocalEventManager");
		return ptr;
	}

};


// Class DeadByDaylight.LevelParadise
// 0x00C8 (0x0448 - 0x0380)
class ALevelParadise : public AActor
{
public:
	float                                              LoopStartDistance;                                        // 0x0380(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LoopDistance;                                             // 0x0384(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             MainPlayerSpawnPoint;                                     // 0x0388(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class USceneComponent*>                     OtherSurvivorSpawnPoints;                                 // 0x0390(0x0010) (Edit, BlueprintVisible, ExportObject, ZeroConstructor)
	TArray<class USceneComponent*>                     ParadiseTiles;                                            // 0x03A0(0x0010) (Edit, BlueprintVisible, ExportObject, ZeroConstructor)
	class AActor*                                      ParadiseViewTarget;                                       // 0x03B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x80];                                      // 0x03B8(0x0080) MISSED OFFSET
	class ADBDPlayer*                                  _spawnedMainPawn;                                         // 0x0438(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class USceneComponent*                             _runnerComponent;                                         // 0x0440(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.LevelParadise");
		return ptr;
	}


	void ParadiseEntered(const struct FParadiseData& PlayerData);
	void OnInterpolationDone();
	void EnterParadise(const struct FParadiseData& PlayerData);
};


// Class DeadByDaylight.ShopManager
// 0x05C8 (0x05F0 - 0x0028)
class UShopManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x238];                                     // 0x0028(0x0238) MISSED OFFSET
	TWeakObjectPtr<class UDBDGameInstance>             _gameInstance;                                            // 0x0260(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2E0];                                     // 0x0268(0x02E0) MISSED OFFSET
	class UClass*                                      _shopSceneClass;                                          // 0x0548(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UShopScene*                                  _shopScene;                                               // 0x0550(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x98];                                      // 0x0558(0x0098) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.ShopManager");
		return ptr;
	}

};


// Class DeadByDaylight.ScreenBase
// 0x01D8 (0x0200 - 0x0028)
class UScreenBase : public UObject
{
public:
	bool                                               isAnimationDone;                                          // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
	class UGFxObject*                                  ScreenObject;                                             // 0x0030(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1C8];                                     // 0x0038(0x01C8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.ScreenBase");
		return ptr;
	}


	void SetFadesOut(bool fadesOut);
	void OnStart();
	void OnNavKey(const class FString& navKey);
	void OnEscape();
	void OnBack();
	void OnAnimationUpdate(int isAnimationDone);
};


// Class DeadByDaylight.ScreenController
// 0x01B8 (0x01E0 - 0x0028)
class UScreenController : public UObject
{
public:
	class UGFxObject*                                  m_ScreenControllerObj;                                    // 0x0028(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UGFxMoviePlayer*                             m_MoviePlayer;                                            // 0x0030(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TMap<class FString, class UScreenBase*>            m_ScreenDictionary;                                       // 0x0038(0x0050) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData00[0x158];                                     // 0x0088(0x0158) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.ScreenController");
		return ptr;
	}

};


// Class DeadByDaylight.UIController
// 0x0010 (0x0038 - 0x0028)
class UUIController : public UObject
{
public:
	class UGFxObject*                                  m_UIControllerObj;                                        // 0x0028(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.UIController");
		return ptr;
	}

};


// Class DeadByDaylight.RootMovie
// 0x00D8 (0x0100 - 0x0028)
class URootMovie : public UObject
{
public:
	class FString                                      SwfAssetName;                                             // 0x0028(0x0010) (ZeroConstructor)
	class UGFxMoviePlayer*                             SwfMoviePlayer;                                           // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x40];                                      // 0x0040(0x0040) MISSED OFFSET
	class UScreenController*                           m_ScreenController;                                       // 0x0080(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UUIController*                               m_UIController;                                           // 0x0088(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x70];                                      // 0x0090(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.RootMovie");
		return ptr;
	}


	void SetCursorAsSticky(int isSticky, int lockVertical, int lockHorizontal, int moveByX, int moveByY);
	void RegisterView(const class FString& screenId, class UGFxObject* ScreenObject);
	void RegisterUIControl(class UGFxObject* flashObj);
	void RegisterScreenControl(class UGFxObject* flashObj);
	void PlaySound(const class FString& soundId);
	void OpenLinkInBrowser(const class FString& linkAddress);
	void OnScreenReady(const class FString& screenId);
	void OnScreenLeave(const class FString& screenId);
	void OnScreenEnter(const class FString& screenId);
	void OnMovieClosed();
	void OnFlashReady();
	void OnAssert(int Type, const class FString& Message);
};


// Class DeadByDaylight.DBDTimeUtilities
// 0x0028 (0x0050 - 0x0028)
class UDBDTimeUtilities : public UObject
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0028(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.DBDTimeUtilities");
		return ptr;
	}


	bool IsValidatedOnline();
	bool IsInitialized();
};


// Class DeadByDaylight.DBDKeyDisplayInfo
// 0x0158 (0x0180 - 0x0028)
class UDBDKeyDisplayInfo : public UObject
{
public:
	class FString                                      PendingResetKeyBindingsData;                              // 0x0028(0x0010) (ZeroConstructor)
	bool                                               PendingResetMustBeGamepadKey;                             // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
	TMap<struct FName, struct FKeyDisplayInfo>         _keyDisplayInfoMap;                                       // 0x0040(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x50];                                      // 0x0090(0x0050) MISSED OFFSET
	TMap<TEnumAsByte<EInputInteractionType>, struct FName> _interactionTypeToActionMap_Camper;                       // 0x00E0(0x0050) (ZeroConstructor)
	TMap<TEnumAsByte<EInputInteractionType>, struct FName> _interactionTypeToActionMap_Slasher;                      // 0x0130(0x0050) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.DBDKeyDisplayInfo");
		return ptr;
	}


	bool IsExcludedKey(const struct FKey& Key);
	struct FKeyDisplayInfo GetKeyDisplayInfoForInteractionType(class UPlayerInput* PlayerInput, TEnumAsByte<EPlayerRole> PlayerRole, TEnumAsByte<EInputInteractionType> InteractionType, bool useGamePad);
	struct FKeyDisplayInfo GetKeyDisplayInfo(const struct FKey& Key);
	struct FKey GetFirstKeyForAction(class UPlayerInput* PlayerInput, const struct FName& ActionName, bool useGamePad);
	struct FName GetActionForInteractionType(TEnumAsByte<EPlayerRole> PlayerRole, TEnumAsByte<EInputInteractionType> inputInteractionType, bool useGamePad, bool ignoreInteractMash);
};


// Class DeadByDaylight.LoadAsyncBankData
// 0x0010 (0x0038 - 0x0028)
class ULoadAsyncBankData : public UObject
{
public:
	class UAkAudioBank*                                bank;                                                     // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	class UDBDGameInstance*                            GameInstance;                                             // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.LoadAsyncBankData");
		return ptr;
	}

};


// Class DeadByDaylight.DBDGameInstance
// 0x13A0 (0x1490 - 0x00F0)
class UDBDGameInstance : public UGameInstance
{
public:
	class UClass*                                      DesignTunableClass;                                       // 0x00F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, NoClear, IsPlainOldData)
	class UDBDDesignTunables*                          DesignTunables;                                           // 0x00F8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UClass*                                      RegionClass;                                              // 0x0100(0x0008) (Edit, BlueprintVisible, ZeroConstructor, NoClear, IsPlainOldData)
	class UClass*                                      ShopManagerClass;                                         // 0x0108(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class URegionFinder*                               RegionFinder;                                             // 0x0110(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UGameEventTracker*                           GameEventTracker;                                         // 0x0118(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UDBDKeyDisplayInfo*                          KeyDisplayInfo;                                           // 0x0120(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               LeaveGameRequested;                                       // 0x0128(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0129(0x0003) MISSED OFFSET
	float                                              LockOutTimer;                                             // 0x012C(0x0004) (ZeroConstructor, IsPlainOldData)
	class UPlayerProfileDAL*                           PlayerProfileDAL;                                         // 0x0130(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TWeakObjectPtr<class AProceduralLevelBuilder>      Builder;                                                  // 0x0138(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                GenerationSeed;                                           // 0x0140(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0144(0x0004) MISSED OFFSET
	class FString                                      PaperTileAssetName;                                       // 0x0148(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData02[0x18];                                      // 0x0158(0x0018) MISSED OFFSET
	TWeakObjectPtr<class AOfferingSequenceManager>     OfferingSequence;                                         // 0x0170(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	TArray<struct FParadiseData>                       ParadiseData;                                             // 0x0178(0x0010) (ZeroConstructor)
	bool                                               PlayerProfileLoadFailed;                                  // 0x0188(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               SeasonEnded;                                              // 0x0189(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x6];                                       // 0x018A(0x0006) MISSED OFFSET
	struct FPendingReport                              PendingReport;                                            // 0x0190(0x0038) (Transient)
	TArray<class FString>                              ReportedPlayers;                                          // 0x01C8(0x0010) (ZeroConstructor)
	int                                                MatchRateValue;                                           // 0x01D8(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x01DC(0x0004) MISSED OFFSET
	class UNewsContentManager*                         NewsContentManager;                                       // 0x01E0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TEnumAsByte<EDisconnectErrors>                     DisconnectError;                                          // 0x01E8(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x01E9(0x0003) MISSED OFFSET
	uint32_t                                           LastAuthOrEACErrorCode;                                   // 0x01EC(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	class FString                                      AuthOrEACErrorAdditionalInfo;                             // 0x01F0(0x0010) (ZeroConstructor, Transient)
	bool                                               HasServerLeftMatch;                                       // 0x0200(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               HasWrittenGameEndStats;                                   // 0x0201(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData06[0x6];                                       // 0x0202(0x0006) MISSED OFFSET
	class UFearMarketManager*                          FearMarketManager;                                        // 0x0208(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UShopManager*                                ShopManager;                                              // 0x0210(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FName                                       TutorialRequesterName;                                    // 0x0218(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FStreamableManager                          AssetLoader;                                              // 0x0220(0x00A0)
	class UAssetLibraryManager*                        AssetLibraryManager;                                      // 0x02C0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UChunkingManager*                            ChunkingManager;                                          // 0x02C8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData07[0x10];                                      // 0x02D0(0x0010) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnPlayerDisconnect;                                       // 0x02E0(0x0010) (Edit, ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData08[0xA8];                                      // 0x02F0(0x00A8) MISSED OFFSET
	class UGameFlowHandler*                            _gameFlowHandler;                                         // 0x0398(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData09[0x8];                                       // 0x03A0(0x0008) MISSED OFFSET
	class UGameFlowContextSystem*                      _contextSystem;                                           // 0x03A8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UDBDPersistentData*                          _persistentData;                                          // 0x03B0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UPlayerDataStorageFacade*                    _playerDataFacade;                                        // 0x03B8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UDBDPlayerLevelManager*                      _playerLevelManager;                                      // 0x03C0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData10[0x8];                                       // 0x03C8(0x0008) MISSED OFFSET
	class USequencer*                                  _sacrificeSequencer;                                      // 0x03D0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class ULightingHelper*                             _ligthingHelper;                                          // 0x03D8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UOfferingHandler*                            _offeringHandler;                                         // 0x03E0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData11[0x8];                                       // 0x03E8(0x0008) MISSED OFFSET
	TArray<class UActorKnowledgeCollection*>           _actorKnowledgeCollections;                               // 0x03F0(0x0010) (ExportObject, ZeroConstructor, Transient)
	class UMapActorDB*                                 _mapActorDB;                                              // 0x0400(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<class UAkAudioBank*>                        _audioBanks;                                              // 0x0408(0x0010) (ZeroConstructor, Transient)
	TArray<class UInteractionProficiency*>             _interactionProficiencies;                                // 0x0418(0x0010) (ZeroConstructor, Transient)
	class UDBDHud*                                     _theHud;                                                  // 0x0428(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<class ULoadAsyncBankData*>                  _asyncAudioBanksPendingLoadData;                          // 0x0430(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData12[0xB0];                                      // 0x0440(0x00B0) MISSED OFFSET
	class UBloodwebManager*                            BloodwebManager;                                          // 0x04F0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UPopupSequencer*                             _popupSequencer;                                          // 0x04F8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UPopupFactory*                               _popupFactory;                                            // 0x0500(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UDBDAuthentication*                          _auth;                                                    // 0x0508(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UDBDEasyAntiCheat*                           _eac;                                                     // 0x0510(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UDBDTimeUtilities*                           _timeUtilities;                                           // 0x0518(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData13[0xE8];                                      // 0x0520(0x00E8) MISSED OFFSET
	TArray<class ADBDPlayer*>                          _players;                                                 // 0x0608(0x0010) (ZeroConstructor, Transient)
	TArray<TWeakObjectPtr<class UObject>>              _execObjects;                                             // 0x0618(0x0010) (ZeroConstructor, Transient)
	bool                                               _networkFailureDetected;                                  // 0x0628(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               _networkConnectionMonitoringOnly;                         // 0x0629(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               _achievementStatsUploadEnabled;                           // 0x062A(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               _isDisconnected;                                          // 0x062B(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               _isMirrorsSessionKilled;                                  // 0x062C(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               _isGamepadReconnected;                                    // 0x062D(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               _isProfileOffline;                                        // 0x062E(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               _isAppSuspended;                                          // 0x062F(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               _isAppResumed;                                            // 0x0630(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               _isInvitationRejected;                                    // 0x0631(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               _isAdditionalContentInstalled;                            // 0x0632(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               _isCloudInventoryInitialized;                             // 0x0633(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	TEnumAsByte<ELegalTermsStatus>                     _legalTermsStatus;                                        // 0x0634(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData14[0xE43];                                     // 0x0635(0x0E43) MISSED OFFSET
	class UGameEventDispatcher*                        _gameEventDispatcher;                                     // 0x1478(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class ULocalEventManager*                          _localEventManager;                                       // 0x1480(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UPlayerReportManager*                        _playerReportManager;                                     // 0x1488(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.DBDGameInstance");
		return ptr;
	}


	void StartOfferingSequence();
	void SimulatePerk(TArray<struct FName> Perks, int Level);
	void SimulateOfferingSequence(TArray<struct FName> Offerings, bool playSequence);
	void RemoveActorKnowledgeCollection(class UActorKnowledgeCollection* collection);
	bool IsActorKnown(class ADBDPlayer* knowledgePossessor, class AActor* possiblyKnownActor);
	bool HasOfferingOfType(TEnumAsByte<EOfferingEffectType> Type, int PlayerId, const struct FName& Tag);
	void GotoSplashScreen(bool showDefaultDialogueOnSplashScreen);
	class USequencer* GetSacrificeSequencer();
	class UDBDPlayerLevelManager* GetPlayerLevelManager();
	int GetMaxSurvivorCount();
	class UMapActorDB* GetMapActorDB();
	class APlayerController* GetLocalPlayerController();
	class ULocalPlayer* GetLocalPlayer();
	class ADBDPlayer* GetLocallyControlledCharacter();
	class ULocalEventManager* GetLocalEventManager();
	class ULightingInterpolator* GetLightInterpolator();
	class ULightingHelper* GetLightingHelper();
	class ABaseSky* GetLevelLighting();
	TArray<class ACamperPlayer*> GetInGameSurvivors();
	TArray<class ADBDPlayer*> GetInGamePlayers();
	TArray<class ASlasherPlayer*> GetInGameKillers();
	class ASlasherPlayer* GetInGameKiller();
	class UGameEventDispatcher* GetGameEventDispatcher();
	int GetDeadOrDisconnectedCampersCount(class ADBDPlayerState* exception);
	void GenerateBloodWebForCurrentCharacter();
	void STATIC_ForceCloseGame();
	void FireSoundEvent(class AActor* Instigator, const struct FVector& Location, bool shouldTrack, float audibleRange, class ADBDPlayer* instigatingPlayer, bool isQuickAction);
	void EndLoadingScreen();
	void DBDToggleLightingLoaded();
	void DBDResetSaveData();
	void DBDLogFindSessions(int searchType, int Rank, bool ignoreVersion);
	void DBDForceSave();
	void DBDForceLoad();
	void DBDDeleteLocalSaveFile();
	void DBDApplyOfferingModification(float lightModifier, float fogModifier);
	void DBD_UpdateSteamInventory();
	void DBD_ToggleOnlineRole();
	void DBD_TestTickedDiceRoll(float BaseProbability, float ticks, float MultiplicativeModifier, float AdditiveModifier);
	void DBD_TestSaveFile(const class FString& Name);
	void DBD_TestRegion();
	void DBD_TestDiceRoll(float BaseProbability, float MultiplicativeModifier, float AdditiveModifier);
	void DBD_StartQuickPlay();
	void DBD_ShowErrorPopupAndGoBackToSplashScreen();
	void DBD_ShowErrorPopup();
	void DBD_SetStatsUploadEnabled(bool Enabled);
	void DBD_SetFearMarketDate(const class FString& dateString);
	void DBD_SetCursorStickySpeed(float Value);
	void DBD_SetCursorStickIgnore(float Value);
	void DBD_SetCursorDefaultSpeed(float Value);
	void DBD_SendFriendInvite();
	void DBD_ResetInventory();
	void DBD_ResetCurrentAchievementStats(bool andUpload, bool andUpdateData);
	void DBD_ResetCurrentAchievementStat(const struct FName& StatName, bool andUpload);
	void DBD_ResetAllRituals();
	void DBD_RemoveRitual(const struct FName& toRemove);
	void DBD_PrintAudioConfig();
	void DBD_PIXEndCapture();
	void DBD_PIXBeginCapture();
	void DBD_LogBloodWebDefinition();
	void DBD_LeaveMatch();
	void DBD_LaunchSurivorTutorial();
	void DBD_LaunchKillerTutorial();
	void DBD_GetRegion();
	void DBD_GenerateNewRitual(const struct FName& Name);
	void DBD_GenerateNewRandomRitual();
	void DBD_GenerateBloodWeb(int Level);
	void DBD_DumpSessions();
	void DBD_DisplayCurrentAchievementStat(const struct FName& StatName);
	void DBD_DestroySteamInventory();
	void DBD_ClearInventory();
	void DBD_ClaimRitualRewardAtIndex(int Index);
	void DBD_ClaimRitualReward(const struct FName& Name);
	void DBD_CheckForNewContent(const class FString& debugGameVersion, bool forceDisplay);
	void DBD_ChangeSteamOverlayPosition(int Position, int VerticalOffset, int horizontalOffset);
	void DBD_AssignNewRitual();
	void DBD_AnalyticsTest();
	void DBD_AnalyticsReset();
	void DBD_AddToRitual(int Index, float Value);
	void DBD_AddToAchievementStat(const struct FName& StatName, float amount);
	void DBD_AddSlasherPips(int Count);
	void DBD_AddPips(int camperPipCount, int slasherPipCount);
	void DBD_AddPerkToInventory(const struct FName& PerkID);
	void DBD_AddOfferingToInventory(const struct FName& ItemId);
	void DBD_AddItemToInventory(const struct FName& ItemId);
	void DBD_AddItemAddonToInventory(const struct FName& ItemAddonID);
	void DBD_AddFearTokens(int Count);
	void DBD_AddEverythingToInventory();
	void DBD_AddCamperPips(int Count);
	void DBD_AddBloodPoints(int Count);
	void DBD_AddAllPerksToInventory(int amount);
	void DBD_AddAllItemsAddonsOfferingsToInventory(int amount);
	void BeginLoadingScreen(const class FString& MapName);
	void AddActorKnowledgeCollection(class UActorKnowledgeCollection* collection);
};


// Class DeadByDaylight.DBDGameSession
// 0x01A8 (0x0540 - 0x0398)
class ADBDGameSession : public AGameSession
{
public:
	float                                              ReservationTimeout;                                       // 0x0398(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1A4];                                     // 0x039C(0x01A4) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.DBDGameSession");
		return ptr;
	}

};


// Class DeadByDaylight.TutorialsUtilities
// 0x0018 (0x0398 - 0x0380)
class ATutorialsUtilities : public AActor
{
public:
	struct FScriptMulticastDelegate                    OnTutorialUIReady;                                        // 0x0380(0x0010) (ZeroConstructor, Transient, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0390(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.TutorialsUtilities");
		return ptr;
	}


	class ATutorialsUtilities* STATIC_GetTutorialsUtilities(class UObject* WorldContextObject);
};


// Class DeadByDaylight.TutorialGameState
// 0x0100 (0x0930 - 0x0830)
class ATutorialGameState : public ADBDGameState
{
public:
	unsigned char                                      UnknownData00[0x2];                                       // 0x0830(0x0002) MISSED OFFSET
	bool                                               _forceHatchVisible;                                       // 0x0832(0x0001) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0xFD];                                      // 0x0833(0x00FD) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.TutorialGameState");
		return ptr;
	}


	void TutorialEndReached();
	void SetEscapeRequirementsVisibility(bool IsVisible);
	bool IsTutorialStarted();
	void CompleteLocallyControlledCharacterIntros();
};


// Class DeadByDaylight.DBDGameUserSettings
// 0x0078 (0x0180 - 0x0108)
class UDBDGameUserSettings : public UGameUserSettings
{
public:
	TArray<struct FInputActionKeyMapping>              ActionMappings;                                           // 0x0108(0x0010) (ZeroConstructor, Config)
	TArray<struct FInputAxisKeyMapping>                AxisMappings;                                             // 0x0118(0x0010) (ZeroConstructor, Config)
	int                                                ScreenScaleForWindowedMode;                               // 0x0128(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                ScalabilityLevel;                                         // 0x012C(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               AutoAdjust;                                               // 0x0130(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0131(0x0003) MISSED OFFSET
	int                                                ScreenResolution;                                         // 0x0134(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               FullScreen;                                               // 0x0138(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0139(0x0003) MISSED OFFSET
	int                                                MainVolume;                                               // 0x013C(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                MenuMusicVolume;                                          // 0x0140(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               UseHeadphones;                                            // 0x0144(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               MuteMusic;                                                // 0x0145(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               HideTutorial;                                             // 0x0146(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               MuteOnFocusLost;                                          // 0x0147(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	int                                                KillerMuseSensitivity;                                    // 0x0148(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                SurvivorMuseSensitivity;                                  // 0x014C(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                KillerControllerSensitivity;                              // 0x0150(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                SurvivorControllerSensitivity;                            // 0x0154(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               InvertY;                                                  // 0x0158(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0159(0x0007) MISSED OFFSET
	class FString                                      Language;                                                 // 0x0160(0x0010) (ZeroConstructor, Config)
	int                                                HighestWeightSeenNews;                                    // 0x0170(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               ChatDefaultVisibility;                                    // 0x0174(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0175(0x0003) MISSED OFFSET
	uint32_t                                           LastPanelContextId;                                       // 0x0178(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x017C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.DBDGameUserSettings");
		return ptr;
	}


	void SaveSettings();
};


// Class DeadByDaylight.DBDGameViewportClient
// 0x0000 (0x0450 - 0x0450)
class UDBDGameViewportClient : public UGameViewportClient
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.DBDGameViewportClient");
		return ptr;
	}

};


// Class DeadByDaylight.DBDHud
// 0x0050 (0x0078 - 0x0028)
class UDBDHud : public UObject
{
public:
	TMap<struct FName, class AStatusView*>             _statusViews;                                             // 0x0028(0x0050) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.DBDHud");
		return ptr;
	}


	void RemoveStatusViewOnDestroy(class AActor* Actor);
};


// Class DeadByDaylight.DBDLocalPlayer
// 0x0000 (0x0190 - 0x0190)
class UDBDLocalPlayer : public ULocalPlayer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.DBDLocalPlayer");
		return ptr;
	}

};


// Class DeadByDaylight.DBDMaterialBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UDBDMaterialBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.DBDMaterialBlueprintLibrary");
		return ptr;
	}


	void STATIC_SetVectorParameterValueOnMeshComponent(class UMeshComponent* Mesh, const struct FName& ParameterName, const struct FLinearColor& Value);
	void STATIC_SetTransformParameterValueOnMeshComponent(class UMeshComponent* Mesh, const struct FName& ParameterName, const struct FTransform& Value);
	void STATIC_SetTransformParameterValueOnMaterialDynamic(class UMaterialInstanceDynamic* Material, const struct FName& ParameterName, const struct FTransform& Value);
	void STATIC_SetTransformParameterInverseValueOnMaterialDynamic(class UMaterialInstanceDynamic* Material, const struct FName& ParameterName, const struct FTransform& Value);
	TArray<class UMaterialInstanceDynamic*> STATIC_CreateDynamicMaterialInstanceForParticleSystem(class UParticleSystemComponent* System);
};


// Class DeadByDaylight.DBDMathBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UDBDMathBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.DBDMathBlueprintLibrary");
		return ptr;
	}


	bool STATIC_VectorIntersect(const struct FVector& OriginA, const struct FVector& ExtentA, const struct FVector& OriginB, const struct FVector& ExtentB);
	struct FVector STATIC_VectorAbsoluteValue(const struct FVector& A);
	TArray<struct FLinearColor> STATIC_TransformToMatrix(const struct FTransform& A);
};


// Class DeadByDaylight.DBDObserverPlayer
// 0x0030 (0x07D0 - 0x07A0)
class ADBDObserverPlayer : public ACharacter
{
public:
	class UDBDPlayerData*                              _playerData;                                              // 0x07A0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x07A8(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.DBDObserverPlayer");
		return ptr;
	}


	void Server_PlayerReady();
};


// Class DeadByDaylight.DBDOnlineBeaconClient
// 0x01A8 (0x0550 - 0x03A8)
class ADBDOnlineBeaconClient : public AOnlineBeacon
{
public:
	struct FScriptMulticastDelegate                    OnReservationCompleted;                                   // 0x03A8(0x0010) (ZeroConstructor, InstancedReference)
	unsigned char                                      UnknownData00[0x50];                                      // 0x03B8(0x0050) MISSED OFFSET
	class UNetConnection*                              BeaconConnection;                                         // 0x0408(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x140];                                     // 0x0410(0x0140) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.DBDOnlineBeaconClient");
		return ptr;
	}

};


// Class DeadByDaylight.DBDOnlineSessionClient
// 0x0350 (0x0610 - 0x02C0)
class UDBDOnlineSessionClient : public UOnlineSessionClient
{
public:
	unsigned char                                      UnknownData00[0x350];                                     // 0x02C0(0x0350) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.DBDOnlineSessionClient");
		return ptr;
	}

};


// Class DeadByDaylight.DBDOuterlineComponent
// 0x0030 (0x02C0 - 0x0290)
class UDBDOuterlineComponent : public USceneComponent
{
public:
	class UMaterialInterface*                          CloneCustomDepthMaterial;                                 // 0x0290(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInterface*                          CloneTranslucentMaterial;                                 // 0x0298(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    _cloneCustomDepthMaterialDynamic;                         // 0x02A0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UMaterialInstanceDynamic*                    _cloneTranslucentMaterialDynamic;                         // 0x02A8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class USkeletalMeshComponent*                      _customDepthSkeletalMesh;                                 // 0x02B0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      _overlaySkeletalMesh;                                     // 0x02B8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.DBDOuterlineComponent");
		return ptr;
	}


	void SetIntensity(float Intensity);
};


// Class DeadByDaylight.DBDOutlineComponent
// 0x0090 (0x0320 - 0x0290)
class UDBDOutlineComponent : public USceneComponent
{
public:
	float                                              InterpolationSpeed;                                       // 0x0290(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ShouldBeAboveOutlines;                                    // 0x0294(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               LimitToCustomDepthObjects;                                // 0x0295(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0296(0x0002) MISSED OFFSET
	class FString                                      OutlineName;                                              // 0x0298(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData01[0x50];                                      // 0x02A8(0x0050) MISSED OFFSET
	TArray<struct FMeshHandle>                         TargetMeshes;                                             // 0x02F8(0x0010) (ZeroConstructor, Transient)
	class UMaterialHelper*                             _materialHelper;                                          // 0x0308(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData02[0x10];                                      // 0x0310(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.DBDOutlineComponent");
		return ptr;
	}


	void SetTargetColor(const struct FLinearColor& Color);
	void SetFadeTexture(class UTexture* inFadeTexture);
	void SetFadeIntensity(float fadeIntensity);
	void RefreshOutlineComponent();
};


// Class DeadByDaylight.DBDParadiseGameMode
// 0x0000 (0x0460 - 0x0460)
class ADBDParadiseGameMode : public AGameMode
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.DBDParadiseGameMode");
		return ptr;
	}

};


// Class DeadByDaylight.DBDPawnSensingComponent
// 0x0008 (0x0138 - 0x0130)
class UDBDPawnSensingComponent : public UPawnSensingComponent
{
public:
	bool                                               bSenseEverywhere;                                         // 0x0130(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0131(0x0003) MISSED OFFSET
	float                                              PartiallyHiddenSensingDistance;                           // 0x0134(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.DBDPawnSensingComponent");
		return ptr;
	}

};


// Class DeadByDaylight.DBDPlayerController_Menu
// 0x0000 (0x08D0 - 0x08D0)
class ADBDPlayerController_Menu : public ADBDPlayerControllerBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.DBDPlayerController_Menu");
		return ptr;
	}


	void TogglePlayerReadyState();
	void SetPlayerReady(bool IsReady);
	void Server_SetReadyToTravel();
	void Server_SetPlayerReady(bool IsReady);
	void Server_SetPlayerLoadout(const struct FPlayerLoadoutData& desiredLoadout);
	void Server_SetEquipedPerks(TArray<struct FName> perkIds, TArray<int> perkLevels, bool callOnRep);
	void Server_SetCustomizationMesh(const struct FName& combinedItemId);
	void Server_SetCharacterLevel(int CharacterLevel, int PrestigeLevel, bool callOnRep);
	void Server_SetCharacterData(int CharacterIndex, const struct FPlayerDataSync& PlayerDataSync);
};


// Class DeadByDaylight.DBDPlayerLevelManager
// 0x0168 (0x0190 - 0x0028)
class UDBDPlayerLevelManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x168];                                     // 0x0028(0x0168) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.DBDPlayerLevelManager");
		return ptr;
	}

};


// Class DeadByDaylight.DBDPlayerStart
// 0x0008 (0x03B8 - 0x03B0)
class ADBDPlayerStart : public APlayerStart
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x03B0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.DBDPlayerStart");
		return ptr;
	}

};


// Class DeadByDaylight.DBDPlayerState_Lobby
// 0x0000 (0x0A50 - 0x0A50)
class ADBDPlayerState_Lobby : public ADBDPlayerState_Menu
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.DBDPlayerState_Lobby");
		return ptr;
	}

};


// Class DeadByDaylight.DBDSpectator
// 0x0000 (0x0408 - 0x0408)
class ADBDSpectator : public ASpectatorPawn
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.DBDSpectator");
		return ptr;
	}

};


// Class DeadByDaylight.DBDSpringArmComponent
// 0x0030 (0x0350 - 0x0320)
class UDBDSpringArmComponent : public USpringArmComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0320(0x0008) MISSED OFFSET
	float                                              TargetArmMinLength;                                       // 0x0328(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bEnableDistanceCameraLag : 1;                             // 0x032C(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData01[0x3];                                       // 0x032D(0x0003) MISSED OFFSET
	float                                              CameraDistanceLagSpeed;                                   // 0x0330(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0334(0x0004) MISSED OFFSET
	unsigned char                                      bDrawDebugTraceMarkers : 1;                               // 0x0338(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0339(0x0007) MISSED OFFSET
	TArray<TWeakObjectPtr<class AActor>>               ignoreActors;                                             // 0x0340(0x0010) (ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.DBDSpringArmComponent");
		return ptr;
	}


	void IgnoreActor(class AActor* Actor, bool bShouldIgnore);
	void ClearIgnoreActors();
};


// Class DeadByDaylight.DBDSurfaceTypeName
// 0x0000 (0x0028 - 0x0028)
class UDBDSurfaceTypeName : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.DBDSurfaceTypeName");
		return ptr;
	}


	struct FName STATIC_Convert(TEnumAsByte<EPhysicalSurface> surfaceType);
};


// Class DeadByDaylight.DBDTags
// 0x0000 (0x0028 - 0x0028)
class UDBDTags : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.DBDTags");
		return ptr;
	}

};


// Class DeadByDaylight.DBDTimerComponent
// 0x0020 (0x0108 - 0x00E8)
class UDBDTimerComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x00E8(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.DBDTimerComponent");
		return ptr;
	}


	void Update(float DeltaTime);
	void Stop();
	void ResetTo(float Time);
	void Reset();
	bool IsDone();
	float GetTimeLeft();
	float GetTimeElapsed();
	float GetStartTime();
	float GetPercentTimeLeft();
	float GetPercentTimeElapsed();
};


// Class DeadByDaylight.DBDUtilTimer
// 0x0000 (0x0028 - 0x0028)
class UDBDUtilTimer : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.DBDUtilTimer");
		return ptr;
	}


	void STATIC_Update(float DeltaTime, struct FDBDTimer* Timer);
	void STATIC_Stop(struct FDBDTimer* Timer);
	void STATIC_ResetTo(float Time, struct FDBDTimer* Timer);
	void STATIC_Reset(struct FDBDTimer* Timer);
	bool STATIC_IsDone(struct FDBDTimer* Timer);
	float STATIC_GetTimeLeft(struct FDBDTimer* Timer);
	float STATIC_GetTimeElapsed(struct FDBDTimer* Timer);
	float STATIC_GetStartTime(struct FDBDTimer* Timer);
	float STATIC_GetPercentTimeLeft(struct FDBDTimer* Timer);
	float STATIC_GetPercentTimeElapsed(struct FDBDTimer* Timer);
};


// Class DeadByDaylight.DeadByDaylightGameMode
// 0x0000 (0x0460 - 0x0460)
class ADeadByDaylightGameMode : public AGameMode
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.DeadByDaylightGameMode");
		return ptr;
	}

};


// Class DeadByDaylight.DlcHelper
// 0x0000 (0x0028 - 0x0028)
class UDlcHelper : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.DlcHelper");
		return ptr;
	}

};


// Class DeadByDaylight.DynamicGrass
// 0x0018 (0x0398 - 0x0380)
class ADynamicGrass : public AActor
{
public:
	class UMaterialParameterCollection*                _worldSettings;                                           // 0x0380(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0388(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.DynamicGrass");
		return ptr;
	}

};


// Class DeadByDaylight.EdgeObjectHandlingStrategy
// 0x0020 (0x0048 - 0x0028)
class UEdgeObjectHandlingStrategy : public UObject
{
public:
	TArray<class UActorSpawner*>                       _edgeObjectSpawners;                                      // 0x0028(0x0010) (ExportObject, ZeroConstructor, Transient)
	TArray<class UActorSpawner*>                       _edgeObjectBlockers;                                      // 0x0038(0x0010) (ExportObject, ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.EdgeObjectHandlingStrategy");
		return ptr;
	}

};


// Class DeadByDaylight.EditorActorVisualization
// 0x0050 (0x02E0 - 0x0290)
class UEditorActorVisualization : public USceneComponent
{
public:
	TAssetPtr<class UClass>                            ActorVisualization;                                       // 0x0290(0x0020) (Edit, BlueprintVisible)
	struct FTransform                                  RelativeTransform;                                        // 0x02B0(0x0030) (Edit, BlueprintVisible, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.EditorActorVisualization");
		return ptr;
	}

};


// Class DeadByDaylight.EditorMeshVisualization
// 0x0050 (0x02E0 - 0x0290)
class UEditorMeshVisualization : public USceneComponent
{
public:
	TAssetPtr<class USkeletalMesh>                     MeshVisualization;                                        // 0x0290(0x0020) (Edit, BlueprintVisible)
	struct FTransform                                  RelativeTransform;                                        // 0x02B0(0x0030) (Edit, BlueprintVisible, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.EditorMeshVisualization");
		return ptr;
	}

};


// Class DeadByDaylight.EffectsLocator
// 0x0068 (0x03E8 - 0x0380)
class AEffectsLocator : public AActor
{
public:
	TArray<struct FEffectsLocatorTargets>              AffectedActors;                                           // 0x0380(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              ActorCaptureRadius;                                       // 0x0390(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x54];                                      // 0x0394(0x0054) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.EffectsLocator");
		return ptr;
	}


	void OnLostActor(class AActor* lostActor);
	void OnLeaveCollisionArea(class AActor* OverlappedActor, class AActor* OtherActor);
	void OnFoundActor(class AActor* foundActor);
	void OnEnterCollisionArea(class AActor* OverlappedActor, class AActor* OtherActor);
	void OnActorTick(class UMaterialInstanceDynamic* actorMaterialInstanceDynamic);
};


// Class DeadByDaylight.EventGeneratorComponent
// 0x0010 (0x00F8 - 0x00E8)
class UEventGeneratorComponent : public UActorComponent
{
public:
	struct FName                                       _eventId;                                                 // 0x00E8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EDBDScoreTypes>                        _coinRewardEvent;                                         // 0x00F0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EDBDScoreTypes>                        _bloodpointRewardEvent;                                   // 0x00F1(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x00F2(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.EventGeneratorComponent");
		return ptr;
	}


	void OnGeneratorRepaired();
};


// Class DeadByDaylight.ExposerCirclingComponent
// 0x0060 (0x02F0 - 0x0290)
class UExposerCirclingComponent : public USceneComponent
{
public:
	bool                                               DirectionFollows;                                         // 0x0290(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0291(0x0003) MISSED OFFSET
	float                                              MinHeight;                                                // 0x0294(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxHeight;                                                // 0x0298(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinRadius;                                                // 0x029C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxRadius;                                                // 0x02A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CirclingSpeed;                                            // 0x02A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DistanceBetweenPoints;                                    // 0x02A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BezierModifier;                                           // 0x02AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Samples;                                                  // 0x02B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3C];                                      // 0x02B4(0x003C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.ExposerCirclingComponent");
		return ptr;
	}


	void SetIsCircling(bool circling);
	void Reset();
};


// Class DeadByDaylight.ExposerInteriorZoneComponent
// 0x0010 (0x0650 - 0x0640)
class UExposerInteriorZoneComponent : public UBoxComponent
{
public:
	TArray<class USceneComponent*>                     ExposerSpawnPoints;                                       // 0x0640(0x0010) (ExportObject, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.ExposerInteriorZoneComponent");
		return ptr;
	}


	void AddExposerSpawnPoint(class USceneComponent* Point);
};


// Class DeadByDaylight.Firecracker
// 0x0038 (0x03D8 - 0x03A0)
class AFirecracker : public AInteractable
{
public:
	bool                                               DebugDisplayEnabled;                                      // 0x03A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x03A1(0x0007) MISSED OFFSET
	TArray<class UGameplayModifierContainer*>          _effectModifiers;                                         // 0x03A8(0x0010) (ExportObject, ZeroConstructor, Transient)
	bool                                               _exploded;                                                // 0x03B8(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x03B9(0x0007) MISSED OFFSET
	TArray<class AActor*>                              _actorsInRange;                                           // 0x03C0(0x0010) (ZeroConstructor, Transient)
	class ADBDPlayer*                                  _playerOwner;                                             // 0x03D0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.Firecracker");
		return ptr;
	}


	bool ShouldDeafen(class ADBDPlayer* Player, float* outDuration);
	bool ShouldBlind(class ADBDPlayer* Player, float* outDuration);
	void OnFuseBurnUpdate(float DeltaSeconds, float fuseTimeLeftPercent);
	void OnFuseBurnExit();
	void OnFuseBurnEnter();
	void OnExplode();
	void OnEffectsInitialized();
	void Multicast_InitFromSpawner(class ACollectable* spawner);
	bool HasModifierOfType(const struct FGameplayTag& Type);
	bool HasFlag(const struct FGameplayTag& flag);
	class ADBDPlayer* GetPlayerOwner();
	float GetModifierValue(const struct FGameplayTag& Type);
	float GetExplosionRange();
	float GetExplosionEffectDuration();
	float GetExplosionDelay();
	bool GetExploded();
	TArray<class UGameplayModifierContainer*> GetEffects();
	class UPrimitiveComponent* GetEffectArea();
	float GetDeafnessEffectDuration(class ADBDPlayer* Player);
	float GetBlindnessEffectDuration(class ADBDPlayer* Player);
};


// Class DeadByDaylight.FirecrackerEffectHandlerComponent
// 0x0040 (0x0128 - 0x00E8)
class UFirecrackerEffectHandlerComponent : public UActorComponent
{
public:
	struct FScriptMulticastDelegate                    OnFirecrackerInRangeBegin;                                // 0x00E8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFirecrackerInRangeUpdate;                               // 0x00F8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFirecrackerInRangeEnd;                                  // 0x0108(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	TArray<struct FFirecrackerEffectData>              _effectDataList;                                          // 0x0118(0x0010) (ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.FirecrackerEffectHandlerComponent");
		return ptr;
	}


	void SetFirecrackerInRange(class AFirecracker* Firecracker, bool inRange);
	void OnFirecrackerDestroyed(class AActor* DestroyedActor);
};


// Class DeadByDaylight.FlashLightComponent
// 0x0068 (0x0150 - 0x00E8)
class UFlashLightComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00E8(0x0008) MISSED OFFSET
	float                                              BlindingScoreCooldown;                                    // 0x00F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00F4(0x0004) MISSED OFFSET
	TScriptInterface<class UAimingStrategyInterface>   AimStrategy;                                              // 0x00F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Tip;                                                      // 0x0108(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USpotLightComponent*                         _spotlight;                                               // 0x0110(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UChargerComponent*                           _charger;                                                 // 0x0118(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData02[0x30];                                      // 0x0120(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.FlashLightComponent");
		return ptr;
	}


	bool UsingCheapSpotLightOcclusion();
	void Server_UpdateTargetLitCharge(class AInteractable* Target, float DeltaSeconds);
	void Server_StopBlindCharge(class AActor* effector);
	void Server_StartBlindCharge(class AActor* effector);
	void OnUseReleased();
	void OnUse();
	bool IsSlasherBlinded();
	bool IsInUse();
	float GetOcclusionDistance();
	float GetMaxAimingDistance();
	float GetEffectiveTimeToInvisibilityBurnoutModifier();
	float GetEffectiveTimeToBlindModifier();
	float GetEffectiveBlindnessDuration();
	float GetEffectiveBeamLength();
	float GetEffectiveBeamHalfAngle();
	float GetEffectiveAccuracy();
};


// Class DeadByDaylight.FlashLightReceiverComponent
// 0x0010 (0x00F8 - 0x00E8)
class UFlashLightReceiverComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00E8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.FlashLightReceiverComponent");
		return ptr;
	}


	void RemoveFlashLight(class UFlashLightComponent* flashLight);
	bool IsInAnyFlashLightZone();
	bool STATIC_IsActorInAnyFlashLightZone(class AActor* Target);
	void AddFlashLight(class UFlashLightComponent* flashLight);
};


// Class DeadByDaylight.FleeComponent
// 0x0020 (0x0108 - 0x00E8)
class UFleeComponent : public UActorComponent
{
public:
	class AActor*                                      _threat;                                                  // 0x00E8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x00F0(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.FleeComponent");
		return ptr;
	}

};


// Class DeadByDaylight.FootSteps
// 0x0070 (0x03F0 - 0x0380)
class AFootSteps : public AActor
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0380(0x0004) MISSED OFFSET
	float                                              _raycastHalfAngle;                                        // 0x0384(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              _raycastZOffset;                                          // 0x0388(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              _raycastDistance;                                         // 0x038C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterial*                                   _material;                                                // 0x0390(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              _minimumDecalSize;                                        // 0x0398(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              _maximumDecalSize;                                        // 0x039C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              _projectionTickness;                                      // 0x03A0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x03A4(0x0004) MISSED OFFSET
	class UCurveFloat*                                 _fadeCurve;                                               // 0x03A8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 _veinsCurve;                                              // 0x03B0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FFootStep>                           _footSteps;                                               // 0x03B8(0x0010) (ZeroConstructor, Transient)
	TArray<class UDecalComponent*>                     _decalPool;                                               // 0x03C8(0x0010) (ExportObject, ZeroConstructor, Transient)
	unsigned char                                      UnknownData02[0x18];                                      // 0x03D8(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.FootSteps");
		return ptr;
	}


	void OnSoundTriggered(class AActor* originator, const struct FVector& Location, bool shouldTrack, float audibleRange);
};


// Class DeadByDaylight.OnlineSystemHandler
// 0x05F8 (0x0620 - 0x0028)
class UOnlineSystemHandler : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1B8];                                     // 0x0028(0x01B8) MISSED OFFSET
	class ADBDOnlineBeaconClient*                      _reservationBeacon;                                       // 0x01E0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x408];                                     // 0x01E8(0x0408) MISSED OFFSET
	class UDBDServerInstance*                          _serverInstance;                                          // 0x05F0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x28];                                      // 0x05F8(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.OnlineSystemHandler");
		return ptr;
	}


	void ReservationComplete(int result);
	void OnHostConnectionFailure();
	void JoinSessionOnBeaconDestroyed(class AActor* DestroyedActor);
};


// Class DeadByDaylight.GameFlowContextSystem
// 0x0090 (0x00B8 - 0x0028)
class UGameFlowContextSystem : public UObject
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0028(0x0070) MISSED OFFSET
	class URootMovie*                                  m_RootMovie;                                              // 0x0098(0x0008) (ZeroConstructor, IsPlainOldData)
	class UOnlineSystemHandler*                        m_OnlineSystemHandler;                                    // 0x00A0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x00A8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.GameFlowContextSystem");
		return ptr;
	}

};


// Class DeadByDaylight.GameFlowHandler
// 0x0038 (0x0060 - 0x0028)
class UGameFlowHandler : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	class UGameFlowContextSystem*                      _contextSystem;                                           // 0x0030(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x28];                                      // 0x0038(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.GameFlowHandler");
		return ptr;
	}

};


// Class DeadByDaylight.SaveTheBestForLastCondition
// 0x0008 (0x00F8 - 0x00F0)
class USaveTheBestForLastCondition : public UGameplayModifierCondition
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00F0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.SaveTheBestForLastCondition");
		return ptr;
	}

};


// Class DeadByDaylight.Perk
// 0x0108 (0x0290 - 0x0188)
class UPerk : public UGameplayModifierContainer
{
public:
	struct FGameplayModifierData                       PerkLevelData[0x3];                                       // 0x0188(0x0040) (Edit, Net, EditFixedSize)
	bool                                               IsUsable;                                                 // 0x0248(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0249(0x0003) MISSED OFFSET
	int                                                _perkLevel;                                               // 0x024C(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x40];                                      // 0x0250(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.Perk");
		return ptr;
	}


	void Multicast_InitializePerk(const struct FName& PerkID, int PerkLevel);
	int GetPerkLevel();
	TEnumAsByte<EInventoryItemType> GetInventoryItemType();
	struct FGameplayModifierData GetGameplayModifierData();
	struct FGameplayModifierData GetConstGameplayModifierData();
};


// Class DeadByDaylight.HexPerk
// 0x0028 (0x02B8 - 0x0290)
class UHexPerk : public UPerk
{
public:
	class ATotem*                                      TotemActor;                                               // 0x0290(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	TArray<TEnumAsByte<EDBDScoreTypes>>                BindTotemConditions;                                      // 0x0298(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<int>                                        _playersWhoKnowCurse;                                     // 0x02A8(0x0010) (Net, ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.HexPerk");
		return ptr;
	}


	void OnInitialized_Internal();
	void OnGameplayEvent(TEnumAsByte<EDBDScoreTypes> gameplayEventType, float amount, class AActor* Instigator, class AActor* Target);
	void Multicast_SetTotemActor(class ATotem* aTotemActor);
	bool IsCurseRevealedToPlayer(int playerUniqueID);
	void FireCursedStatusOnLocalPlayer();
	void Authority_SetCurseRevealedToPlayer(int playerUniqueID, bool Value);
	bool Authority_BindToDullTotem();
};


// Class DeadByDaylight.StakeOutPerk
// 0x0018 (0x02A8 - 0x0290)
class UStakeOutPerk : public UPerk
{
public:
	TArray<int>                                        MaxTokensByLevel;                                         // 0x0290(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                MaxTokens;                                                // 0x02A0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TokenChargeTime;                                          // 0x02A4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.StakeOutPerk");
		return ptr;
	}


	void Server_ConsumeToken();
	void Local_BroadcastConsumeToken();
};


// Class DeadByDaylight.SurveillancePerk
// 0x0018 (0x02A8 - 0x0290)
class USurveillancePerk : public UPerk
{
public:
	float                                              GeneratorRevealTime;                                      // 0x0290(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxNumGenerators;                                         // 0x0294(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0298(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.SurveillancePerk");
		return ptr;
	}


	void HandleGeneratorIsDamagedChanged(class AGenerator* Generator);
};


// Class DeadByDaylight.StatusEffect
// 0x0068 (0x01F0 - 0x0188)
class UStatusEffect : public UGameplayModifierContainer
{
public:
	struct FGameplayModifierData                       ModifierData;                                             // 0x0188(0x0040) (Edit, Net)
	float                                              customParam;                                              // 0x01C8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              RemainingLifeTime;                                        // 0x01CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ShouldDisplay;                                            // 0x01D0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	bool                                               BroadcastAsStatusEffectWhenApplicable;                    // 0x01D1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BroadcastAsStatusEffectByFunction;                        // 0x01D2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BroadcastAsStatusEffectAlways;                            // 0x01D3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BroadcastOriginatorGameEventNotificationWhenFirstApplicable;// 0x01D4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x01D5(0x0003) MISSED OFFSET
	class ADBDPlayer*                                  _originatingPlayer;                                       // 0x01D8(0x0008) (Net, ZeroConstructor, Transient, IsPlainOldData)
	class UGameplayModifierContainer*                  _originatingEffect;                                       // 0x01E0(0x0008) (ExportObject, Net, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x01E8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.StatusEffect");
		return ptr;
	}


	bool ShouldDisplayStatusEffectIcon();
	void SetShouldDisplay(bool On);
	void OnInitialized_Internal();
	void Multicast_SetRemainingLifetime(float lifetime);
	void Multicast_InitializeStatusEffect(const struct FName& statusEffectID, class ADBDPlayer* originatingPlayer, float customParam, class UGameplayModifierContainer* originatingEffect);
	void InitializeLifetime(float lifetime);
	float GetStatusEffectCooldownRate();
	bool GetShouldDisplay();
	class ADBDPlayer* GetOriginatingPlayer();
	struct FGameplayModifierData GetGameplayModifierData();
	struct FGameplayModifierData GetConstGameplayModifierData();
	void FireActiveStatusEffectEvent(float percentage, int LevelToDisplay);
	void BroadcastOriginatorGameEventNotification();
	void BroadcastGameEventNotification(const struct FGameplayNotificationData& notificationData, bool addToHistory);
	void Authority_SetRemainingLifetime(float lifetime);
	void Authority_RemoveSelf();
};


// Class DeadByDaylight.AdjustableCooldownStatusEffect
// 0x0008 (0x01F8 - 0x01F0)
class UAdjustableCooldownStatusEffect : public UStatusEffect
{
public:
	struct FGameplayTag                                CooldownModifierType;                                     // 0x01F0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.AdjustableCooldownStatusEffect");
		return ptr;
	}

};


// Class DeadByDaylight.ExhaustedEffect
// 0x0008 (0x0200 - 0x01F8)
class UExhaustedEffect : public UAdjustableCooldownStatusEffect
{
public:
	float                                              RunningCooldownModifier;                                  // 0x01F8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x01FC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.ExhaustedEffect");
		return ptr;
	}

};


// Class DeadByDaylight.Bloodlust
// 0x0098 (0x0288 - 0x01F0)
class UBloodlust : public UStatusEffect
{
public:
	class UCurveFloat*                                 BloodlustCurve;                                           // 0x01F0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x90];                                      // 0x01F8(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.Bloodlust");
		return ptr;
	}


	void Multicast_ResetBloodlust();
	float GetBloodlustTime();
};


// Class DeadByDaylight.GameplayModifierFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UGameplayModifierFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.GameplayModifierFunctionLibrary");
		return ptr;
	}


	void STATIC_SetPlayerGameplayModifier(class ADBDPlayer* targetPlayer, const struct FGameplayTag& ModifierType, float ModifierValue);
	void STATIC_SetPlayerGameplayFlag(class ADBDPlayer* targetPlayer, const struct FGameplayTag& flagType);
	void STATIC_ClearPlayerGameplayModifier(class ADBDPlayer* targetPlayer, const struct FGameplayTag& ModifierType);
	void STATIC_ClearPlayerGameplayFlag(class ADBDPlayer* targetPlayer, const struct FGameplayTag& flagType);
	void STATIC_ClearAllPlayerGameplayModifiers(class ADBDPlayer* targetPlayer);
	void STATIC_ClearAllPlayerGameplayFlags(class ADBDPlayer* targetPlayer);
};


// Class DeadByDaylight.Gate
// 0x0018 (0x0398 - 0x0380)
class AGate : public AActor
{
public:
	TArray<float>                                      InteractionInputs;                                        // 0x0380(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              InteractionOutput;                                        // 0x0390(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0394(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.Gate");
		return ptr;
	}

};


// Class DeadByDaylight.AndGate
// 0x0000 (0x0398 - 0x0398)
class AAndGate : public AGate
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.AndGate");
		return ptr;
	}

};


// Class DeadByDaylight.TimerGate
// 0x0010 (0x03A8 - 0x0398)
class ATimerGate : public AGate
{
public:
	float                                              _currentTime;                                             // 0x0398(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x039C(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.TimerGate");
		return ptr;
	}


	void Update(float DeltaTime);
	void SetValues(float TimerDuration, float RushGain, float RushBlockDuration);
	void Rushed(bool success);
	void Reset();
	void RemoveTime(float Time);
	void AddTime(float Time);
};


// Class DeadByDaylight.GateFactory
// 0x0000 (0x0380 - 0x0380)
class AGateFactory : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.GateFactory");
		return ptr;
	}


	class AGate* GetGate(TEnumAsByte<EGateType> GateType);
};


// Class DeadByDaylight.GeneratorDrivenActor
// 0x0010 (0x0390 - 0x0380)
class AGeneratorDrivenActor : public AActor
{
public:
	bool                                               _activated;                                               // 0x0380(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0381(0x0007) MISSED OFFSET
	class AGenerator*                                  _generator;                                               // 0x0388(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.GeneratorDrivenActor");
		return ptr;
	}


	void SetSpawnedObject(class AGenerator* Generator);
	void OnInitGeneratorDrivenActor(class AGenerator* Generator);
	void OnActivateGeneratorDrivenActor();
	void Multicast_ActivationChecked(bool activated);
};


// Class DeadByDaylight.CrowBomb
// 0x0088 (0x0418 - 0x0390)
class ACrowBomb : public AGeneratorDrivenActor
{
public:
	float                                              _innerRadius;                                             // 0x0390(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              _outerRadius;                                             // 0x0394(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              _maxTakeoffDelay;                                         // 0x0398(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                _numCrows;                                                // 0x039C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                _crowCenterDistance;                                      // 0x03A0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                _crowOuterDistance;                                       // 0x03A4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                _eliminationSamples;                                      // 0x03A8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              _eliminationStddev;                                       // 0x03AC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TAssetPtr<class UClass>                            _meshComponentClass;                                      // 0x03B0(0x0020) (Edit)
	TArray<class UWorldRunawayMeshComponent*>          _crows;                                                   // 0x03D0(0x0010) (ExportObject, Net, ZeroConstructor, Transient)
	unsigned char                                      UnknownData00[0x18];                                      // 0x03E0(0x0018) MISSED OFFSET
	class USceneComponent*                             _root;                                                    // 0x03F8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             _traceStart;                                              // 0x0400(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class USceneComponent*                             _traceEnd;                                                // 0x0408(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	bool                                               _landed;                                                  // 0x0410(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0411(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.CrowBomb");
		return ptr;
	}


	void TriggerTakeOff(const struct FVector& triggerLocation);
	void TriggerLand();
};


// Class DeadByDaylight.HookAnalyticsBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UHookAnalyticsBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.HookAnalyticsBlueprintLibrary");
		return ptr;
	}


	void STATIC_IncrementHookSpawned();
};


// Class DeadByDaylight.InputMasher
// 0x0078 (0x0160 - 0x00E8)
class UInputMasher : public UActorComponent
{
public:
	class UInputComponent*                             _inputComponent;                                          // 0x00E8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x70];                                      // 0x00F0(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.InputMasher");
		return ptr;
	}

};


// Class DeadByDaylight.Generator
// 0x0048 (0x03E8 - 0x03A0)
class AGenerator : public AInteractable
{
public:
	bool                                               activated;                                                // 0x03A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsRepaired;                                               // 0x03A1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ForceRevealToLocalPlayer;                                 // 0x03A2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x03A3(0x0005) MISSED OFFSET
	class UCurveLinearColor*                           KillerOutlineFadeCurve;                                   // 0x03A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnGeneratorRepaired;                                      // 0x03B0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnGeneratorRepairedBySurvivor;                            // 0x03C0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnIsDamagedChanged;                                       // 0x03D0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	bool                                               FireLevelScoreEventOnFix;                                 // 0x03E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x03E1(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.Generator");
		return ptr;
	}


	void SetShowRegressionOutline(bool showRegressionOutline);
	void SetGeneratorRegressionOutline(bool shouldShowRegressionOutline);
	void SetComplete(bool complete);
	void OnEscapeDoorActivated();
	class UMapActorComponent* GetMapActorComponent();
	bool GetIsDamaged();
	void BroadcastIsDamagedChangedEvent();
	void BroadcastGeneratorRepairedBySurvivor(class ADBDPlayer* repairingSurvivor);
	void BroadcastGeneratorRepaired();
};


// Class DeadByDaylight.EscapeDoor
// 0x0038 (0x03D8 - 0x03A0)
class AEscapeDoor : public AInteractable
{
public:
	bool                                               activated;                                                // 0x03A0(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x03A1(0x0007) MISSED OFFSET
	TArray<struct FVector>                             EscapePositions;                                          // 0x03A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UObject*>                             EscapeFire;                                               // 0x03B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData01[0x10];                                      // 0x03C8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.EscapeDoor");
		return ptr;
	}


	void OnRep_Activated(bool oldActivated);
	void OnExitActivationChanged(bool activated);
};


// Class DeadByDaylight.Locker
// 0x0010 (0x03B0 - 0x03A0)
class ALocker : public AInteractable
{
public:
	class ACamperPlayer*                               SurvivorInLocker;                                         // 0x03A0(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               PerformingDelayedDoorOpen;                                // 0x03A8(0x0001) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x03A9(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.Locker");
		return ptr;
	}


	void UpdateDelayedDoorOpen();
	bool IsSurvivorInLockerDead();
};


// Class DeadByDaylight.MeatHook
// 0x01C0 (0x0560 - 0x03A0)
class AMeatHook : public AInteractable
{
public:
	bool                                               IsSurvivorStruggling;                                     // 0x03A0(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               WasSurvivorStruggleCancelled;                             // 0x03A1(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x03A2(0x0006) MISSED OFFSET
	TArray<class UDBDClipRegionComponent*>             ClipRegions;                                              // 0x03A8(0x0010) (BlueprintVisible, ExportObject, ZeroConstructor, Transient)
	bool                                               IsInBasement;                                             // 0x03B8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsBreakable;                                              // 0x03B9(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x03BA(0x0006) MISSED OFFSET
	class UPollableEventListener*                      _eventListener;                                           // 0x03C0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class ACamperPlayer*                               _hookedSurvivor;                                          // 0x03C8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4A];                                      // 0x03D0(0x004A) MISSED OFFSET
	bool                                               _isSacrificed;                                            // 0x041A(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               _isSabotaged;                                             // 0x041B(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               _survivorUnhookable;                                      // 0x041C(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               _canSurvivorAttemptEscape;                                // 0x041D(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               _survivorCanStruggle;                                     // 0x041E(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               _canBeSabotaged;                                          // 0x041F(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              _drainStartTimer;                                         // 0x0420(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               _isIdle;                                                  // 0x0424(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0425(0x0003) MISSED OFFSET
	struct FHookAnalyticsController                    _hookAnalytics;                                           // 0x0428(0x00F0)
	unsigned char                                      UnknownData04[0x48];                                      // 0x0518(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.MeatHook");
		return ptr;
	}


	void OnTickStruggle(float DeltaTime);
	void OnStruggleExit();
	void OnStruggleEnter();
	void OnSacrificeOut();
	void OnSacrificeIn();
	void OnReactionIn();
	void OnReaction();
	void OnHookingExit();
	void OnHookingEnter();
	void OnHookedSurvivorAttacked();
	void OnHookedIdle();
	void OnHookedExit();
	void OnHookedEnter();
	void OnEscapeAttemptSuccessful(class ACamperPlayer* survivor);
	void OnAutoRepair();
	void Multicast_SetIsSacrificed(bool Value);
	void Multicast_SetIsSabotaged(bool Value);
	void Multicast_SetHookedSurvivor(class ACamperPlayer* survivor);
	void Multicast_EscapeAttemptResult(bool result);
	class UMontagePlayer* GetMontagePlayer();
	class UMapActorComponent* GetMapActorNative();
	bool GetIsSacrificed();
	bool GetIsSabotaged();
	bool GetIsBroken();
	class ACamperPlayer* GetHookedSurvivor();
	bool CanUnhookSurvivor(class ACamperPlayer* survivor);
	bool CanSurvivorStruggle(class ACamperPlayer* survivor);
	bool CanSurvivorAttemptEscape(class ACamperPlayer* survivor);
	bool CanHookSurvivor();
	bool CanBeSabotaged();
	void Authority_SignalUnhookingEnter();
	void Authority_SignalUnhookingCharged();
	void Authority_SignalUnhookingAborted();
	void Authority_SignalSurvivorAttemptingEscapeCharged();
	void Authority_SignalSurvivorAttemptingEscapeAborted();
	void Authority_SignalSurvivorAttemptingEscape();
	void Authority_SetIsSacrificed(bool Value);
	void Authority_SetIsSabotaged(bool Value);
	void Authority_SetHookedSurvivor(class ACamperPlayer* survivor);
};


// Class DeadByDaylight.Pallet
// 0x0008 (0x03A8 - 0x03A0)
class APallet : public AInteractable
{
public:
	bool                                               IsDestroyed;                                              // 0x03A0(0x0001) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               ShowIllusionaryPallet;                                    // 0x03A1(0x0001) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x03A2(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.Pallet");
		return ptr;
	}


	void UpdateIllusionaryPallet(class USceneComponent* IllusionaryPallet, class USceneComponent* SKPlankbool);
	void ResetPallet();
	void Multicast_ResetPallet();
};


// Class DeadByDaylight.ReverseBearTrap
// 0x0068 (0x0408 - 0x03A0)
class AReverseBearTrap : public AInteractable
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x03A0(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.ReverseBearTrap");
		return ptr;
	}


	void StopMontage();
	void StopExecutionTimer();
	bool ShouldUpdateExecutionTimer();
	void SetVisible(bool Visible);
	void SetKeyID(int keyID);
	void ResetExecutionTimer(float Time);
	void OnWarningLevelChanged(int previousWarningLevel, int currentWarningLevel);
	void OnExitWarningZone();
	void OnEnterWarningZone();
	void OnDetachSurvivor(class ACamperPlayer* survivor);
	void OnAttachSurvivor(class ACamperPlayer* survivor);
	void NotifyDetachStarted(class ACamperPlayer* survivor);
	bool IsInWarningZone();
	bool IsExecutionTimerDone();
	bool IsExecutionTimerActive();
	bool HasDetachStarted();
	int GetWarningLevel();
	int GetKeyID();
	float GetExecutionTimerTimeLeft();
	float GetExecutionTimerPercentTimeElapsed();
	class ACamperPlayer* GetAttachedSurvivor();
	void DetachSurvivor(class ACamperPlayer* survivor);
	bool CanExecute();
	void AttachSurvivor(class ACamperPlayer* survivor);
};


// Class DeadByDaylight.Searchable
// 0x0018 (0x03B8 - 0x03A0)
class ASearchable : public AInteractable
{
public:
	float                                              Weight;                                                   // 0x03A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EItemRarity>                           ItemRarity;                                               // 0x03A4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x03A5(0x0003) MISSED OFFSET
	class USearchableSpawnPoint*                       _searchableSpawnPoint;                                    // 0x03A8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       _itemIdToSpawn;                                           // 0x03B0(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.Searchable");
		return ptr;
	}


	class ACollectable* SpawnObject(class ADBDPlayer* Player);
};


// Class DeadByDaylight.Totem
// 0x0010 (0x03B0 - 0x03A0)
class ATotem : public AInteractable
{
public:
	struct FName                                       hexPerkID;                                                // 0x03A0(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               IsCleansed;                                               // 0x03A8(0x0001) (BlueprintVisible, Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x03A9(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.Totem");
		return ptr;
	}


	void OnBoundToHex();
	void Multicast_BindToHex(const struct FName& hexPerkID);
	bool HasHex();
};


// Class DeadByDaylight.InteractionAnimNotify
// 0x0008 (0x0040 - 0x0038)
class UInteractionAnimNotify : public UAnimNotify
{
public:
	struct FName                                       NotifyId;                                                 // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.InteractionAnimNotify");
		return ptr;
	}

};


// Class DeadByDaylight.InteractionDefinition
// 0x0140 (0x03D0 - 0x0290)
class UInteractionDefinition : public USceneComponent
{
public:
	class FString                                      InteractionID;                                            // 0x0290(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TEnumAsByte<EInputInteractionType>                 interactionInputType;                                     // 0x02A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x02A1(0x0003) MISSED OFFSET
	float                                              SnapTime;                                                 // 0x02A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ResetCameraDuringSnap;                                    // 0x02A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AllowStartInteractionFromHeldInput;                       // 0x02A9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               StopInteractionOnInputRelease;                            // 0x02AA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               StopInteractionOnMontageComplete;                         // 0x02AB(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               StopInteractionOnMontageBlendingOut;                      // 0x02AC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               StopInteractionOnTimerExpire;                             // 0x02AD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               StopInteractionOnHeightDelta;                             // 0x02AE(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               StopEnterMontageOnExit;                                   // 0x02AF(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               StopUpdateMontageOnExit;                                  // 0x02B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInteractionAnimation>                 InteractionAnimation;                                     // 0x02B1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               CamperCanInteract;                                        // 0x02B2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               SlasherCanInteract;                                       // 0x02B3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AllowInputPersistence;                                    // 0x02B4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               snapPosition;                                             // 0x02B5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               snapRotation;                                             // 0x02B6(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x02B7(0x0001) MISSED OFFSET
	float                                              SnapStopDistance;                                         // 0x02B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               TestClearPathDuringSnap;                                  // 0x02BC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               TestPlayerOrientationOnSnap;                              // 0x02BD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ScaleEnterAnimationToTime;                                // 0x02BE(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ScaleMainAnimationToTime;                                 // 0x02BF(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ScaleExitAnimationToTime;                                 // 0x02C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               CanInteractWhileIncapacitated;                            // 0x02C1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               CanInteractWhileCloaked;                                  // 0x02C2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               CanInteractWhileChainBlinking;                            // 0x02C3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               CanInteractWhileAttacking;                                // 0x02C4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               CanInteractWhileShocked;                                  // 0x02C5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AllowNavigation;                                          // 0x02C6(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AllowRotation;                                            // 0x02C7(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               UseCameraMontageMode;                                     // 0x02C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x02C9(0x0007) MISSED OFFSET
	class UCurveFloat*                                 NavigationSpeedCurveEnter;                                // 0x02D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 NavigationSpeedCurve;                                     // 0x02D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 NavigationSpeedCurveExit;                                 // 0x02E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               OwnerBlocksAttack;                                        // 0x02E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsHighPriority;                                           // 0x02E9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               UseAuthoritativeMovement;                                 // 0x02EA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AuthoritativeUnmoveable;                                  // 0x02EB(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               CanAuthoritativePush;                                     // 0x02EC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DisableServerPositionUpdates;                             // 0x02ED(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               CancelOnHit;                                              // 0x02EE(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               HideItem;                                                 // 0x02EF(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AutoBindToParentInteractor;                               // 0x02F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AutoBindToParentZone;                                     // 0x02F1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x02F2(0x0002) MISSED OFFSET
	float                                              CancelOnMoveInput;                                        // 0x02F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<float>                                      ProgressBasedSkillChecks;                                 // 0x02F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               CanCrouch;                                                // 0x0308(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AffectsStillness;                                         // 0x0309(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BlockSelfInteract;                                        // 0x030A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x5];                                       // 0x030B(0x0005) MISSED OFFSET
	TArray<class UInterruptionDefinition*>             _interruptionDefinitions;                                 // 0x0310(0x0010) (ExportObject, ZeroConstructor)
	struct FScriptMulticastDelegate                    OnInteractionAnimNotify;                                  // 0x0320(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	bool                                               DebugUnavailability;                                      // 0x0330(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInteractionOwnership>                 OwnershipUsability;                                       // 0x0331(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x2];                                       // 0x0332(0x0002) MISSED OFFSET
	float                                              InteractionTime;                                          // 0x0334(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ExitInteractionTime;                                      // 0x0338(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x033C(0x0004) MISSED OFFSET
	struct FText                                       InteractionDescriptionText;                               // 0x0340(0x0018) (Edit, BlueprintVisible)
	float                                              InteractionHeightDeltaMax;                                // 0x0358(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x035C(0x0004) MISSED OFFSET
	struct FAnimationMontageDescriptor                 EnterMontage;                                             // 0x0360(0x0018) (Edit, BlueprintVisible)
	struct FAnimationMontageDescriptor                 UpdateMontage;                                            // 0x0378(0x0018) (Edit, BlueprintVisible)
	struct FAnimationMontageDescriptor                 ExitMontage;                                              // 0x0390(0x0018) (Edit, BlueprintVisible)
	struct FName                                       SnapSocketName;                                           // 0x03A8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UInteractor*                                 _interactor;                                              // 0x03B0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	TArray<class UInteractionDefinition*>              _mutuallyExclusiveInteractionsClient;                     // 0x03B8(0x0010) (ExportObject, ZeroConstructor, Transient)
	unsigned char                                      UnknownData08[0x8];                                       // 0x03C8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.InteractionDefinition");
		return ptr;
	}


	void OnInterruptorUpdateStart(class UInterruptionDefinition* currentInterruption, class ADBDPlayer* interruptor, class ADBDPlayer* interruptee);
	void OnInteractionUpdateTick(class ADBDPlayer* Player, float DeltaTime);
	void OnInteractionUpdateStart(class ADBDPlayer* Player);
	void OnInteractionUpdateMontageReachedMiddle(class ADBDPlayer* Player);
	void OnInteractionUpdateEnd(class ADBDPlayer* Player);
	void OnInteractionInterruptStarted(class ADBDPlayer* Player, class UInterruptionDefinition* currentInterruption, class ADBDPlayer* interruptingPlayer);
	void OnInteractionInterruptStart(class ADBDPlayer* Player, class UInterruptionDefinition* currentInterruption, class ADBDPlayer* interruptingPlayer);
	void OnInteractionInterruptEnd(class ADBDPlayer* Player, class UInterruptionDefinition* currentInterruption, class ADBDPlayer* interruptingPlayer);
	void OnInteractionInit(class ADBDPlayer* Player);
	void OnInteractionFinished(class ADBDPlayer* Player, bool hasInteractionStarted);
	void OnInteractionExitStart(class ADBDPlayer* Player);
	void OnInteractionExitEnd(class ADBDPlayer* Player);
	void OnInteractionEnterTick(class ADBDPlayer* Player, float DeltaTime);
	void OnInteractionEnterStart(class ADBDPlayer* Player, float actualSnapTime);
	void OnInteractionEnterFailed(class ADBDPlayer* Player);
	void OnInteractionEnterEnd(class ADBDPlayer* Player);
	void OnInteractionCancelled(class ADBDPlayer* Player);
	void OnInteractionAnimNotifyEvent(const struct FName& NotifyId, class ADBDPlayer* Player);
	bool IsSupportedCharacterType(class ADBDPlayer* Player);
	bool IsInterruptionPossible(class ADBDPlayer* interruptor, class ADBDPlayer* interruptee, class UInterruptionDefinition* interruption);
	bool IsInteractionPossibleClient(class ADBDPlayer* Player, TEnumAsByte<EInputInteractionType> InteractionType);
	bool IsInteractionPossibleBP(class ADBDPlayer* Player, TEnumAsByte<EInputInteractionType> InteractionType);
	bool IsInteractionDone(class ADBDPlayer* Player, TEnumAsByte<EInputInteractionType> InteractionType);
	bool IsInputPressed(class ADBDPlayer* Player);
	bool IsCharacterFacingInteractorDirection(class ADBDPlayer* Player);
	bool IsCancelable(class ADBDPlayer* Player);
	struct FAnimationMontageDescriptor GetUpdateMontage(class ADBDPlayer* Player);
	float GetUpdateAnimationPlayRate(class ADBDPlayer* Player);
	struct FMontagePlaybackDefinition GetUpdateAnimationPlayBackDefinition(class ADBDPlayer* Player, bool Follower);
	float GetSnapTimeAtStart(class ADBDPlayer* Player);
	float GetSnapTime(class ADBDPlayer* Player);
	struct FName GetSnapSocketName(class ADBDPlayer* Player);
	struct FRotator GetSnapPointRotationAtStart(class ADBDPlayer* Player);
	struct FRotator GetSnapPointRotation(class ADBDPlayer* Player);
	struct FVector GetSnapPointPositionAtStart(class ADBDPlayer* Player);
	struct FVector GetSnapPointPosition(class ADBDPlayer* Player);
	float GetSnapDistanceAtStart(class ADBDPlayer* Player);
	float GetSnapDistance(class ADBDPlayer* Player);
	class ADBDPlayer* GetPlayerDependancy(class ADBDPlayer* interactingPlayer);
	float GetNavigationSpeedUpdate(float Time, class ADBDPlayer* Player);
	float GetNavigationSpeedExit(float Time, class ADBDPlayer* Player);
	float GetNavigationSpeedEnter(float Time, class ADBDPlayer* Player);
	TArray<class UInterruptionDefinition*> GetInterruptionDefinitions();
	class UInteractor* GetInteractor();
	float GetInteractionTime(class ADBDPlayer* Character);
	class FString GetInteractionText(class ADBDPlayer* Player);
	float GetInteractionSpeedModifier(class ADBDPlayer* Character);
	float GetInteractionExitTime(class ADBDPlayer* Character);
	struct FText GetInteractionDescriptionText();
	class AInteractable* GetInteractable();
	struct FVector GetFocalPointPosition(class ADBDPlayer* Player);
	struct FAnimationMontageDescriptor GetExitMontage(class ADBDPlayer* Player);
	struct FMontagePlaybackDefinition GetExitAnimationPlayBackDefinition(class ADBDPlayer* Player, bool Follower);
	struct FAnimationMontageDescriptor GetEnterMontage(class ADBDPlayer* Player);
	struct FMontagePlaybackDefinition GetEnterAnimationPlayBackDefinition(class ADBDPlayer* Player, bool Follower);
	bool GetAllowNavigation();
	struct FVector GetActualSnapPointPositionAtStart(class ADBDPlayer* Player);
	struct FVector GetActualSnapPointPosition(class ADBDPlayer* Player);
	TArray<class AActor*> GetActorsToIgnoreOverlap();
	float GetActorHeightDelta(class ADBDPlayer* Player);
	void EndOverlapCallback(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	bool DoesPlayerHaveClearPath(class ADBDPlayer* Player);
	void CompleteCharge();
	bool CanOverrideInteraction(class UInteractionDefinition* Interaction);
	void BeginOverlapCallback(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void AttachToZone(class UPrimitiveComponent* zone);
	void AttachToInteractor(class UInteractor* Interactor);
	void AddMutuallyExclusiveInteraction(class UInteractionDefinition* Interaction);
};


// Class DeadByDaylight.ChargeableInteractionDefinition
// 0x0110 (0x04E0 - 0x03D0)
class UChargeableInteractionDefinition : public UInteractionDefinition
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x03D0(0x0070) MISSED OFFSET
	struct FScriptMulticastDelegate                    SkillCheckResponseAestheticDelegate;                      // 0x0440(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    SkillCheckResponseAuthorityDelegate;                      // 0x0450(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	bool                                               StopInteractionOnChargeComplete;                          // 0x0460(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HasProgressivelyHarderSkillChecks;                        // 0x0461(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0462(0x0002) MISSED OFFSET
	float                                              ProgressiveDifficultyModifier;                            // 0x0464(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EChargeableInteractionBarType>         ProgressBarType;                                          // 0x0468(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0469(0x0007) MISSED OFFSET
	TArray<float>                                      ProgressPips;                                             // 0x0470(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               HideProgressBar;                                          // 0x0480(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0481(0x0007) MISSED OFFSET
	class UChargeableComponent*                        _chargeableComponent;                                     // 0x0488(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData04[0x50];                                      // 0x0490(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.ChargeableInteractionDefinition");
		return ptr;
	}


	void SetChargeableComponent(class UChargeableComponent* ChargeableComponent);
	void OnSkillCheckResponseAuthorityBP(class ADBDPlayer* Player, bool success, bool Bonus, bool hadInput, TEnumAsByte<ESkillCheckCustomType> Type);
	void OnSkillCheckResponseAuthority(bool success, bool Bonus, class ADBDPlayer* Player, bool TriggerLoudNoise, bool hadInput, TEnumAsByte<ESkillCheckCustomType> Type);
	void OnSkillCheckResponseAestheticBP(class ADBDPlayer* Player, bool success, bool Bonus, bool hadInput, TEnumAsByte<ESkillCheckCustomType> Type);
	void OnSkillCheckResponseAesthetic(bool success, bool Bonus, class ADBDPlayer* Player, bool TriggerLoudNoise, bool hadInput, TEnumAsByte<ESkillCheckCustomType> Type);
	void OnInteractionCompletionStateChanged(class ADBDPlayer* Player, bool complete);
	void OnChargeableChangedBP(class UChargeableComponent* oldChargeable, class UChargeableComponent* newChargeable);
	bool IsChargeComplete();
	bool HasSkillCheckHappened();
	float GetTunableValue(const struct FName& TunableValueID, float DefaultValue);
	float GetTotalChargeModifier();
	float GetSuccessProbability();
	float GetSkillCheckProbability();
	float GetSkillCheckFailureTimePenalty();
	float GetSkillCheckFailurePercentPenalty(class ADBDPlayer* Player);
	float GetSkillCheckDifficulityModifier();
	float GetSkillCheckCharge(class ADBDPlayer* Player, bool success, bool Bonus, TEnumAsByte<ESkillCheckCustomType> Type);
	int GetPipsPassed();
	float GetPerkMultiplier();
	class ADBDPlayer* GetOwningDBDPlayer();
	float GetMultiplicativeLuckBonus();
	float GetMaxCharge();
	float GetItemEfficiencyModifier();
	float GetGoodSkillCheckSuccessPercentReward(class ADBDPlayer* Player);
	float GetChargeAmountForTime(float DeltaSeconds);
	class UChargeableComponent* GetChargeableComponent();
	float GetBonusSkillCheckZoneSizeModifier();
	float GetBonusSkillCheckSuccessPercentReward(class ADBDPlayer* Player);
	float GetAdditiveLuckBonus();
	void Authority_ChargeWithItem(float DeltaSeconds, class ACollectable* Item);
	void AddCharge(float DeltaSeconds);
};


// Class DeadByDaylight.InteractionProficiency
// 0x0018 (0x0040 - 0x0028)
class UInteractionProficiency : public UObject
{
public:
	TArray<class FString>                              InteractionIDs;                                           // 0x0028(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.InteractionProficiency");
		return ptr;
	}


	float GetValue(class UChargeableInteractionDefinition* chargeableInteraction);
	TEnumAsByte<EStatusEffectType> GetType(float Value);
	int GetLevel(class UChargeableInteractionDefinition* chargeableInteraction);
	bool GetIsActive(class UChargeableInteractionDefinition* chargeableInteraction);
};


// Class DeadByDaylight.Interactor
// 0x0040 (0x02D0 - 0x0290)
class UInteractor : public USceneComponent
{
public:
	class FString                                      InteractorName;                                           // 0x0290(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               IsUsable;                                                 // 0x02A0(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x02A1(0x0003) MISSED OFFSET
	struct FLock                                       _lock;                                                    // 0x02A4(0x0008) (Transient)
	struct FLock                                       _reservation;                                             // 0x02AC(0x0008) (Transient)
	unsigned char                                      UnknownData01[0x4];                                       // 0x02B4(0x0004) MISSED OFFSET
	class UInteractionDefinition*                      _currentInteraction;                                      // 0x02B8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	TArray<class UInteractionDefinition*>              _interactionDefinitions;                                  // 0x02C0(0x0010) (ExportObject, ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.Interactor");
		return ptr;
	}


	void Multicast_ReservationStatus(class ADBDPlayer* Player, bool Lock);
	void Multicast_LockStatus(class ADBDPlayer* Player, class UInteractionDefinition* currentInteraction, bool Lock);
	bool IsInterruptionPossible(class ADBDPlayer* interruptor, class ADBDPlayer* interruptee, class UInteractionDefinition* definition, class UInterruptionDefinition* interruption);
	bool IsInteracting();
	TArray<class UInteractionDefinition*> GetInteractionDefinitions();
	class ADBDPlayer* GetInteractingPlayer();
	class AInteractable* GetInteractable();
	class UInteractionDefinition* GetCurrentInteraction();
	bool CanPerformInteraction(class ADBDPlayer* Player, class UInteractionDefinition* definition);
	void BPPostInitializeComponents();
};


// Class DeadByDaylight.InterruptionDefinition
// 0x00B0 (0x0340 - 0x0290)
class UInterruptionDefinition : public USceneComponent
{
public:
	struct FName                                       InterruptionID;                                           // 0x0290(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               _usesWorldCoordinates;                                    // 0x0298(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               _snapInterruptor;                                         // 0x0299(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x029A(0x0006) MISSED OFFSET
	struct FTransform                                  _interruptionSnapPointForInterruptor;                     // 0x02A0(0x0030) (Edit, IsPlainOldData)
	struct FAnimationMontageDescriptor                 _animationMontageToPlayOnInterruptionForInterruptorNew;   // 0x02D0(0x0018) (Edit)
	bool                                               _snapInterruptee;                                         // 0x02E8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x02E9(0x0007) MISSED OFFSET
	struct FTransform                                  _interruptionSnapPointForInterruptee;                     // 0x02F0(0x0030) (Edit, IsPlainOldData)
	struct FAnimationMontageDescriptor                 _animationMontageToPlayOnInterruptionForInterrupteeNew;   // 0x0320(0x0018) (Edit)
	bool                                               _pickUpOnInterrupt;                                       // 0x0338(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               _canInterruptWhileCarrying;                               // 0x0339(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               _useMontageFollower;                                      // 0x033A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x033B(0x0001) MISSED OFFSET
	float                                              _maxHeightDeltaBetweenCharacters;                         // 0x033C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.InterruptionDefinition");
		return ptr;
	}


	void SetInterruptorSnapPoint(const struct FTransform& Point);
	void SetInterrupteeSnapPoint(const struct FTransform& Point);
	void OnInterruptionUpdateStart(class ADBDPlayer* interruptor, class ADBDPlayer* interruptee);
	void OnInterruptionExitEnd(class ADBDPlayer* interruptor, class ADBDPlayer* interruptee);
	void OnInterruptionEnterStart(class ADBDPlayer* interruptor, class ADBDPlayer* interruptee);
	bool IsUsingMontageFollower();
	bool IsUsingAttack();
	bool IsInterruptionPossible(class ADBDPlayer* interruptor, class ADBDPlayer* interruptee);
	bool InteractionCheckHeightDelta(class ADBDPlayer* interruptor, class ADBDPlayer* interruptee);
	struct FRotator GetInterruptionSnapPointRotationForInterruptor(class ADBDPlayer* interruptor, class ADBDPlayer* interruptee);
	struct FRotator GetInterruptionSnapPointRotationForInterruptee(class ADBDPlayer* interruptor, class ADBDPlayer* interruptee);
	struct FVector GetInterruptionSnapPointPositionForInterruptor(class ADBDPlayer* interruptor, class ADBDPlayer* interruptee);
	struct FVector GetInterruptionSnapPointPositionForInterruptee(class ADBDPlayer* interruptor, class ADBDPlayer* interruptee);
	class UInteractionDefinition* GetInteractionDefinition();
	class AInteractable* GetInteractable();
	bool CanInterruptWhileCarrying();
};


// Class DeadByDaylight.ItemVfx
// 0x0000 (0x0380 - 0x0380)
class AItemVfx : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.ItemVfx");
		return ptr;
	}


	void SetEmittersVisibility(bool Visible);
	void OnAttackEnd();
	void OnAttackBegin();
	void AttachToSkeletalMesh(class USkeletalMeshComponent* SkeletonPart);
};


// Class DeadByDaylight.LightFollower
// 0x0030 (0x0118 - 0x00E8)
class ULightFollower : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x00E8(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.LightFollower");
		return ptr;
	}


	void SetLeader(class ULightComponent* leader, float maxIntensity);
	void AddFollower(class ULightComponent* Follower);
};


// Class DeadByDaylight.LightingHelper
// 0x0070 (0x0098 - 0x0028)
class ULightingHelper : public UObject
{
public:
	class ABaseSky*                                    _levelLighting;                                           // 0x0028(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class ABaseSky*                                    _levelLightingWithoutExposure;                            // 0x0030(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class ULightingInterpolator*                       _lightingInterpolator;                                    // 0x0038(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class ULightingFactory*                            _lightingFactory;                                         // 0x0040(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UPostProcessComponent*                       _postProcessCache;                                        // 0x0048(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x48];                                      // 0x0050(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.LightingHelper");
		return ptr;
	}


	void SetPlayerExposureOffset(float Value);
	void DBD_ModifyExposure(float Value);
};


// Class DeadByDaylight.LightingInterpolator
// 0x0048 (0x0070 - 0x0028)
class ULightingInterpolator : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnInterpolationDone;                                      // 0x0028(0x0010) (ZeroConstructor, Transient, InstancedReference)
	unsigned char                                      UnknownData00[0x30];                                      // 0x0038(0x0030) MISSED OFFSET
	class ABaseSky*                                    _targetLighting;                                          // 0x0068(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.LightingInterpolator");
		return ptr;
	}


	void STATIC_LerpSkylight(class USkyLightComponent* Target, class USkyLightComponent* A, class USkyLightComponent* B, float Alpha);
	void STATIC_LerpLight(class ULightComponent* Target, class ULightComponent* A, class ULightComponent* B, float Alpha);
	void STATIC_LerpHeightFog(class UExponentialHeightFogComponent* Target, class UExponentialHeightFogComponent* A, class UExponentialHeightFogComponent* B, float Alpha);
};


// Class DeadByDaylight.LobbyLevel
// 0x0060 (0x03E8 - 0x0388)
class ALobbyLevel : public ALevelScriptActor
{
public:
	TEnumAsByte<EWorldFlowEvent>                       LobbyLoadedEvent;                                         // 0x0388(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0389(0x0003) MISSED OFFSET
	TWeakObjectPtr<class APlayerStart>                 _localCamperStart;                                        // 0x038C(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TWeakObjectPtr<class APlayerStart>                 _localSlasherStart;                                       // 0x0394(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x039C(0x0004) MISSED OFFSET
	TArray<TWeakObjectPtr<class APlayerStart>>         _camperSpawns;                                            // 0x03A0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<TWeakObjectPtr<class APlayerStart>>         _slasherSpawns;                                           // 0x03B0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<class APlayerStart*>                        _registeredSpawns;                                        // 0x03C0(0x0010) (ZeroConstructor, Transient)
	TArray<struct FVector>                             _slasherPOVTrackerOffsets;                                // 0x03D0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData02[0x8];                                       // 0x03E0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.LobbyLevel");
		return ptr;
	}


	void SetLobbySubLevelLoaded();
	struct FName GetMainLobbySubLevelName();
};


// Class DeadByDaylight.OfflineLobbyLevel
// 0x0038 (0x0420 - 0x03E8)
class AOfflineLobbyLevel : public ALobbyLevel
{
public:
	TArray<TWeakObjectPtr<class APlayerStart>>         _roleSelectionCamperSpawns;                               // 0x03E8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<TWeakObjectPtr<class APlayerStart>>         _roleSelectionSlasherSpawns;                              // 0x03F8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0408(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.OfflineLobbyLevel");
		return ptr;
	}


	void CheckDestroyingPawns(class AActor* DestroyedActor);
};


// Class DeadByDaylight.OnlineLobbyLevel
// 0x0008 (0x03F0 - 0x03E8)
class AOnlineLobbyLevel : public ALobbyLevel
{
public:
	class UProceduralGenerationData*                   ProceduralGenerationData;                                 // 0x03E8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.OnlineLobbyLevel");
		return ptr;
	}

};


// Class DeadByDaylight.LocalPlayerTrackerComponent
// 0x0010 (0x02A0 - 0x0290)
class ULocalPlayerTrackerComponent : public USceneComponent
{
public:
	struct FScriptMulticastDelegate                    TrackerOnLocallyObservedChanged;                          // 0x0290(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.LocalPlayerTrackerComponent");
		return ptr;
	}


	void TriggerOnLocallyObservedChanged();
};


// Class DeadByDaylight.LoudNoiseHUDIndicator
// 0x0070 (0x0300 - 0x0290)
class ULoudNoiseHUDIndicator : public USceneComponent
{
public:
	TArray<struct FLoudNoiseIndicatorData>             TrackedNoises;                                            // 0x0290(0x0010) (ZeroConstructor, Transient)
	class UStaticMesh*                                 MaskMesh;                                                 // 0x02A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMesh*                                 DistortionMesh;                                           // 0x02A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EdgePadding;                                              // 0x02B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CornerRoundness;                                          // 0x02B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ScreenFadeOutDistance;                                    // 0x02B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x02BC(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    LoudNoiseAddedEvent;                                      // 0x02C0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x30];                                      // 0x02D0(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.LoudNoiseHUDIndicator");
		return ptr;
	}


	void AddTrackedNoise(const struct FVector& Location, float duration);
};


// Class DeadByDaylight.MapActorComponent
// 0x0088 (0x0170 - 0x00E8)
class UMapActorComponent : public UActorComponent
{
public:
	TEnumAsByte<EMapActorCategory>                     Category;                                                 // 0x00E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x77];                                      // 0x00E9(0x0077) MISSED OFFSET
	bool                                               _detectionEnabled;                                        // 0x0160(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0xF];                                       // 0x0161(0x000F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.MapActorComponent");
		return ptr;
	}


	void Multicast_SetDetectionEnabled(bool Enabled);
	bool IsKnownBy(class ADBDPlayer* Character);
	bool GetDetectionEnabled();
};


// Class DeadByDaylight.MapActorDB
// 0x0040 (0x0068 - 0x0028)
class UMapActorDB : public UObject
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0028(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.MapActorDB");
		return ptr;
	}


	TArray<class AActor*> GetUniqueRandom(TArray<TEnumAsByte<EMapActorCategory>> Categories, int Count);
	class AActor* GetRandom(TEnumAsByte<EMapActorCategory> Category);
};


// Class DeadByDaylight.MapActorDetectorComponent
// 0x0028 (0x0110 - 0x00E8)
class UMapActorDetectorComponent : public UActorComponent
{
public:
	struct FScriptMulticastDelegate                    OnActorDetected;                                          // 0x00E8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	TArray<TEnumAsByte<EMapActorCategory>>             CollectedCategories;                                      // 0x00F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UPrimitiveComponent*                         _primitive;                                               // 0x0108(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.MapActorDetectorComponent");
		return ptr;
	}


	void SetDetectionPrimitive(class UPrimitiveComponent* Primitive);
	void OnOverlapEnter(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
};


// Class DeadByDaylight.MaterialHelper
// 0x00A0 (0x0330 - 0x0290)
class UMaterialHelper : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0290(0x0070) MISSED OFFSET
	TArray<struct FMaterialNamedGroup>                 Groups;                                                   // 0x0300(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FMaterialHelperOriginalMeshState>    TargetMeshes;                                             // 0x0310(0x0010) (ZeroConstructor, Transient)
	class FString                                      _materialGroupName;                                       // 0x0320(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.MaterialHelper");
		return ptr;
	}


	void UpdateMaterials();
	void SetVectorParameter(const struct FName& ParameterName, const struct FVector& NewValue);
	void SetTextureParameter(const struct FName& ParameterName, class UTexture* NewTexture);
	void SetScalarParameter(const struct FName& ParameterName, float NewValue);
	void SetRenderInCustomDepth(bool RenderInCustomDepth);
	void SetRenderInCustomColourNoDepth(bool RenderInCustomColour);
	void SetReceivesDecals(bool ReceivesDecals);
	void SetMaterial(const class FString& GroupName);
	void SetColourParameter(const struct FName& ParameterName, const struct FLinearColor& NewValue);
	void SetCastCinematicShadows(bool CastCinematicShadows);
	void ResetMaterials();
	void RefreshMeshes();
	void RefreshMesh(class UMeshComponent* mc);
};


// Class DeadByDaylight.MenuUtilities
// 0x0000 (0x0028 - 0x0028)
class UMenuUtilities : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.MenuUtilities");
		return ptr;
	}

};


// Class DeadByDaylight.MovementModifierActor
// 0x0008 (0x0388 - 0x0380)
class AMovementModifierActor : public AActor
{
public:
	float                                              MaxSpeedMultiplier;                                       // 0x0380(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0384(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.MovementModifierActor");
		return ptr;
	}

};


// Class DeadByDaylight.NewsContentManager
// 0x00D8 (0x0100 - 0x0028)
class UNewsContentManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x0028(0x0078) MISSED OFFSET
	TWeakObjectPtr<class UDBDGameInstance>             _gameInstance;                                            // 0x00A0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x58];                                      // 0x00A8(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.NewsContentManager");
		return ptr;
	}

};


// Class DeadByDaylight.ObjectRandomizer
// 0x0020 (0x02B0 - 0x0290)
class UObjectRandomizer : public USceneComponent
{
public:
	TArray<class UActorSpawner*>                       Spawners;                                                 // 0x0290(0x0010) (Edit, BlueprintVisible, ExportObject, ZeroConstructor)
	int                                                MinPopulation;                                            // 0x02A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxPopulation;                                            // 0x02A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x02A8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.ObjectRandomizer");
		return ptr;
	}

};


// Class DeadByDaylight.ActorSpawnerRandomizer
// 0x0020 (0x02D0 - 0x02B0)
class UActorSpawnerRandomizer : public UObjectRandomizer
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x02B0(0x0008) MISSED OFFSET
	TArray<struct FSpawnerElement>                     DeactivatedSpawnerContentLists;                           // 0x02B8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData01[0x8];                                       // 0x02C8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.ActorSpawnerRandomizer");
		return ptr;
	}

};


// Class DeadByDaylight.OfferingCard
// 0x0020 (0x03A0 - 0x0380)
class AOfferingCard : public AActor
{
public:
	TArray<struct FRarityTexture>                      RarityTextures;                                           // 0x0380(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FOfferingTypeTexture>                OfferingTypeTextures;                                     // 0x0390(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.OfferingCard");
		return ptr;
	}


	void PlayAnim(TEnumAsByte<EOfferingAnimState> State);
};


// Class DeadByDaylight.OfferingHandler
// 0x0008 (0x0030 - 0x0028)
class UOfferingHandler : public UObject
{
public:
	class UDBDGameInstance*                            _gameInstance;                                            // 0x0028(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.OfferingHandler");
		return ptr;
	}

};


// Class DeadByDaylight.OfferingSequenceManager
// 0x0050 (0x03D0 - 0x0380)
class AOfferingSequenceManager : public AActor
{
public:
	class UDBDGameInstance*                            _gameInstance;                                            // 0x0380(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class APlayerController*                           _localPlayerController;                                   // 0x0388(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UOfferingHandler*                            _offeringHandler;                                         // 0x0390(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class AOfferingSequenceAssets*                     _sequenceAssets;                                          // 0x0398(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class ADBDLobbyHud*                                _hud;                                                     // 0x03A0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class ACameraActor*                                _offeringCamera;                                          // 0x03A8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x20];                                      // 0x03B0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.OfferingSequenceManager");
		return ptr;
	}


	void FadeInScreen();
};


// Class DeadByDaylight.OfferingSequenceAssets
// 0x0020 (0x03A0 - 0x0380)
class AOfferingSequenceAssets : public AActor
{
public:
	TArray<struct FOfferingRevealDelays>               OfferingRevealDelays;                                     // 0x0380(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class AOfferingCard*>                       Cards;                                                    // 0x0390(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.OfferingSequenceAssets");
		return ptr;
	}


	void PlaySmoke();
	void PlayFadeOut();
	void PlayFadeIn();
};


// Class DeadByDaylight.OutfitHelper
// 0x0000 (0x0028 - 0x0028)
class UOutfitHelper : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.OutfitHelper");
		return ptr;
	}

};


// Class DeadByDaylight.OutlineUpdateStrategy
// 0x0008 (0x00F0 - 0x00E8)
class UOutlineUpdateStrategy : public UActorComponent
{
public:
	class UDBDOutlineComponent*                        _outlineComponent;                                        // 0x00E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.OutlineUpdateStrategy");
		return ptr;
	}

};


// Class DeadByDaylight.DefaultOutlineUpdateStrategy
// 0x0020 (0x0110 - 0x00F0)
class UDefaultOutlineUpdateStrategy : public UOutlineUpdateStrategy
{
public:
	struct FLinearColor                                _revealedColorToSurvivor;                                 // 0x00F0(0x0010) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	struct FLinearColor                                _revealedColorToKiller;                                   // 0x0100(0x0010) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.DefaultOutlineUpdateStrategy");
		return ptr;
	}

};


// Class DeadByDaylight.BearTrapOutlineUpdateStrategy
// 0x0038 (0x0128 - 0x00F0)
class UBearTrapOutlineUpdateStrategy : public UOutlineUpdateStrategy
{
public:
	struct FLinearColor                                UnrevealedColor;                                          // 0x00F0(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                RevealedColorToSurvivor;                                  // 0x0100(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	class UCurveLinearColor*                           KillerOutlineFadeCurve;                                   // 0x0110(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0118(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.BearTrapOutlineUpdateStrategy");
		return ptr;
	}


	void SetOwningBearTrapMapActorComponent(class UMapActorComponent* MapActorComponent);
	void SetOwningBearTrapIsBroken(bool isBroken);
};


// Class DeadByDaylight.HatchOutlineUpdateStrategy
// 0x0000 (0x0110 - 0x0110)
class UHatchOutlineUpdateStrategy : public UDefaultOutlineUpdateStrategy
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.HatchOutlineUpdateStrategy");
		return ptr;
	}

};


// Class DeadByDaylight.LockerOutlineUpdateStrategy
// 0x0000 (0x0110 - 0x0110)
class ULockerOutlineUpdateStrategy : public UDefaultOutlineUpdateStrategy
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.LockerOutlineUpdateStrategy");
		return ptr;
	}

};


// Class DeadByDaylight.RBTOutlineUpdateStrategy
// 0x0000 (0x0110 - 0x0110)
class URBTOutlineUpdateStrategy : public UDefaultOutlineUpdateStrategy
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.RBTOutlineUpdateStrategy");
		return ptr;
	}


	bool IsRevealedToLocalPlayer_BP(class ADBDPlayer* Player);
};


// Class DeadByDaylight.VaultableOutlineUpdateStrategy
// 0x0008 (0x0118 - 0x0110)
class UVaultableOutlineUpdateStrategy : public UDefaultOutlineUpdateStrategy
{
public:
	bool                                               _canBeRevealedToLocalPlayer;                              // 0x0110(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0111(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.VaultableOutlineUpdateStrategy");
		return ptr;
	}


	void SetCanBeRevealedToLocalPlayer(bool canBeRevealedToLocalPlayer);
};


// Class DeadByDaylight.PalletOutlineUpdateStrategy
// 0x0000 (0x0118 - 0x0118)
class UPalletOutlineUpdateStrategy : public UVaultableOutlineUpdateStrategy
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.PalletOutlineUpdateStrategy");
		return ptr;
	}

};


// Class DeadByDaylight.GeneratorOutlineUpdateStrategy
// 0x0038 (0x0128 - 0x00F0)
class UGeneratorOutlineUpdateStrategy : public UOutlineUpdateStrategy
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x00F0(0x0004) MISSED OFFSET
	struct FLinearColor                                _revealedColorToSurvivor;                                 // 0x00F4(0x0010) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	struct FLinearColor                                _defaultRevealedColorToSlasher;                           // 0x0104(0x0010) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	unsigned char                                      UnknownData01[0x14];                                      // 0x0114(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.GeneratorOutlineUpdateStrategy");
		return ptr;
	}


	void SetRevealedColorToSurvivor(const struct FLinearColor& newColor);
	void SetRevealedColorToSlasher(const struct FLinearColor& newColor);
	void ResetRevealedColorToSlasher();
};


// Class DeadByDaylight.MeatHookOutlineUpdateStrategy
// 0x0040 (0x0130 - 0x00F0)
class UMeatHookOutlineUpdateStrategy : public UOutlineUpdateStrategy
{
public:
	struct FLinearColor                                HookedOutlineColorSlasher;                                // 0x00F0(0x0010) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	struct FLinearColor                                CarryingOutlineColorSlasher;                              // 0x0100(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	struct FLinearColor                                DefaultOutlineColorSlasher;                               // 0x0110(0x0010) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	struct FLinearColor                                VisibleOutlineColorCamper;                                // 0x0120(0x0010) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.MeatHookOutlineUpdateStrategy");
		return ptr;
	}

};


// Class DeadByDaylight.SurvivorOutlineUpdateStrategy
// 0x0048 (0x0138 - 0x00F0)
class USurvivorOutlineUpdateStrategy : public UOutlineUpdateStrategy
{
public:
	struct FLinearColor                                _inDangerColorForSurvivor;                                // 0x00F0(0x0010) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	struct FLinearColor                                _saviourColorForSurvivor;                                 // 0x0100(0x0010) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	struct FLinearColor                                _colorForKiller;                                          // 0x0110(0x0010) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class UTexture*                                    _revealedGradient;                                        // 0x0120(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class UTexture*                                    _nonRevealedGradient;                                     // 0x0128(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	bool                                               _trappedIconActive;                                       // 0x0130(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0131(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.SurvivorOutlineUpdateStrategy");
		return ptr;
	}


	void SetTrappedIconActive(bool Value);
	bool IsActivelyHidingAuraFromKiller(class ACamperPlayer* subject, class ASlasherPlayer* witness);
};


// Class DeadByDaylight.ParticleSystemDistanceFaderComponent
// 0x0020 (0x0108 - 0x00E8)
class UParticleSystemDistanceFaderComponent : public UActorComponent
{
public:
	class UParticleSystemComponent*                    ParticleSystemComponent;                                  // 0x00E8(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       OpacityParameterName;                                     // 0x00F0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StartFadeDistance;                                        // 0x00F8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              EndFadeDistance;                                          // 0x00FC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0100(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.ParticleSystemDistanceFaderComponent");
		return ptr;
	}

};


// Class DeadByDaylight.PerkManager
// 0x0000 (0x00E8 - 0x00E8)
class UPerkManager : public UActorComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.PerkManager");
		return ptr;
	}


	bool HasPerkModifierOfType(const struct FGameplayTag& Type);
	bool HasPerkFlag(const struct FGameplayTag& flag, TEnumAsByte<EGameplayModifierSource> Filter);
	bool HasAnyEffectWithID(const struct FName& ID);
	bool HasAnyAddonWithTag(const struct FName& Tag);
	bool HasAllCharacterPerksEquipped();
	class UStatusEffect* GetStatusEffect(const struct FName& ID);
	class UGameplayModifierContainer* GetSourceWithModifier(const struct FGameplayTag& Type, TEnumAsByte<EGameplayModifierSource> Filter);
	class UGameplayModifierContainer* GetSourceWithFlag(const struct FGameplayTag& flag, TEnumAsByte<EGameplayModifierSource> Filter);
	float GetPerkModifierMinValue(const struct FGameplayTag& Type, float startValue);
	float GetPerkModifierMaxValue(const struct FGameplayTag& Type);
	float GetPerkModifier(const struct FGameplayTag& Type, TEnumAsByte<EGameplayModifierSource> Filter);
	class UPerk* GetPerk(const struct FName& ID);
	float GetMultiplicativeModifierValueWithCompoundNegative(const struct FGameplayTag& Type, TEnumAsByte<EGameplayModifierSource> Filter);
	float GetMultiplicativeModifierValue(const struct FGameplayTag& Type);
};


// Class DeadByDaylight.PigAnalytics
// 0x0000 (0x0028 - 0x0028)
class UPigAnalytics : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.PigAnalytics");
		return ptr;
	}


	void STATIC_RecordRBTSearch(class ACamperPlayer* searchingPlayer, bool success);
	void STATIC_OnRBTAttached_Analytics(class ASlasherPlayer* attacher, class ACamperPlayer* attachee);
	void STATIC_IncrementRBTTimerActived(class ACamperPlayer* attachedPlayer);
	void STATIC_IncrementRBTKilledCount(class ACamperPlayer* playerKilled, bool killedByExecutionZone);
};


// Class DeadByDaylight.PlayerDataStorageFacade
// 0x00B8 (0x00E0 - 0x0028)
class UPlayerDataStorageFacade : public UObject
{
public:
	unsigned char                                      UnknownData00[0xB8];                                      // 0x0028(0x00B8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.PlayerDataStorageFacade");
		return ptr;
	}

};


// Class DeadByDaylight.SkillCheck
// 0x00D0 (0x0360 - 0x0290)
class USkillCheck : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0290(0x0004) MISSED OFFSET
	float                                              ProgressRate;                                             // 0x0294(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SuccessZoneStart;                                         // 0x0298(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SuccessZoneEnd;                                           // 0x029C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BonusZoneLength;                                          // 0x02A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                SkillCheckCount;                                          // 0x02A4(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                xOffset;                                                  // 0x02A8(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              xOffset_max;                                              // 0x02AC(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                yOffset;                                                  // 0x02B0(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              yOffset_max;                                              // 0x02B4(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              InsaneSkillCheckJitterAmplitude;                          // 0x02B8(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              kSuccessZoneMinimum;                                      // 0x02BC(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x28];                                      // 0x02C0(0x0028) MISSED OFFSET
	class ADBDPlayer*                                  _owner;                                                   // 0x02E8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UChargeableInteractionDefinition*            _currentInteraction;                                      // 0x02F0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData02[0x68];                                      // 0x02F8(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.SkillCheck");
		return ptr;
	}


	bool ShouldDeactivateSkillCheckOnInteractionEnd();
	void Server_SetInteraction(class UChargeableInteractionDefinition* Interaction);
	void Server_OnSkillCheckSuccess(bool Bonus, TEnumAsByte<ESkillCheckCustomType> Type);
	void Server_OnSkillCheckFailure(bool hadInput, TEnumAsByte<ESkillCheckCustomType> Type);
	void Multicast_SkillCheckResponse(bool hadInput, bool success, bool Bonus, TEnumAsByte<ESkillCheckCustomType> Type, bool TriggerLoudNoise, class UChargeableInteractionDefinition* Interaction);
	void ActivateSkillCheck(class UInteractionDefinition* Interaction, float Delay);
	void ActivateCustomSkillCheck(TEnumAsByte<ESkillCheckCustomType> Type, float Delay);
};


// Class DeadByDaylight.PlayerInteractionHandler
// 0x0228 (0x0310 - 0x00E8)
class UPlayerInteractionHandler : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00E8(0x0008) MISSED OFFSET
	float                                              PriorityConeAngle;                                        // 0x00F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00F4(0x0004) MISSED OFFSET
	TArray<class UInteractionDefinition*>              InteractionsInZone;                                       // 0x00F8(0x0010) (ExportObject, ZeroConstructor, Transient)
	unsigned char                                      UnknownData02[0x88];                                      // 0x0108(0x0088) MISSED OFFSET
	TEnumAsByte<EInteractionLayer>                     InteractionLayer;                                         // 0x0190(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0xF];                                       // 0x0191(0x000F) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnDesactivateSkillCheckDelegate;                          // 0x01A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	bool                                               _hasInteractionRequest;                                   // 0x01B0(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               _hasInteractionRequestInBuffer;                           // 0x01B1(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x6];                                       // 0x01B2(0x0006) MISSED OFFSET
	class UInteractionDefinition*                      _requestedInteraction;                                    // 0x01B8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	TEnumAsByte<EInputInteractionType>                 _requestedInteractionType;                                // 0x01C0(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	TEnumAsByte<ERequestState>                         _requestedInteractionState;                               // 0x01C1(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x6];                                       // 0x01C2(0x0006) MISSED OFFSET
	class UInteractionDefinition*                      _currentInteraction;                                      // 0x01C8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData06[0x58];                                      // 0x01D0(0x0058) MISSED OFFSET
	TArray<class ADBDPlayer*>                          _currentPlayerDependencies;                               // 0x0228(0x0010) (ZeroConstructor, Transient)
	TEnumAsByte<EInputInteractionType>                 _currentInteractionType;                                  // 0x0238(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData07[0x7];                                       // 0x0239(0x0007) MISSED OFFSET
	class USkillCheck*                                 _skillCheck;                                              // 0x0240(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData08[0x8];                                       // 0x0248(0x0008) MISSED OFFSET
	TArray<float>                                      _progressBasedSkillChecks;                                // 0x0250(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData09[0x60];                                      // 0x0260(0x0060) MISSED OFFSET
	class ADBDPlayer*                                  _requestedInterruptionOtherParty;                         // 0x02C0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UInterruptionDefinition*                     _requestedInterruptionDefinition;                         // 0x02C8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	bool                                               _requestedInterruptionIsInterruptor;                      // 0x02D0(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData10[0x7];                                       // 0x02D1(0x0007) MISSED OFFSET
	class ADBDPlayer*                                  _currentInterruptionOtherParty;                           // 0x02D8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UInterruptionDefinition*                     _currentInterruptionDefinition;                           // 0x02E0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	bool                                               _currentInterruptionIsInterruptor;                        // 0x02E8(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               _interactionInProgress;                                   // 0x02E9(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData11[0x26];                                      // 0x02EA(0x0026) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.PlayerInteractionHandler");
		return ptr;
	}


	void UnPauseSkillCheckTimer();
	void TriggerSkillCheck();
	void StartCustomSkillCheck(TEnumAsByte<ESkillCheckCustomType> Type, float Delay);
	void SetSkillCheckTimer(float Delay);
	void SetScanForInteractionsEnabled(bool Enabled);
	void Server_StoreInterruption_Interruptor(class ADBDPlayer* interruptionOtherParty, class UInterruptionDefinition* InterruptionDefinition);
	void Server_StoreInteraction(TEnumAsByte<EInputInteractionType> InteractionType, class UInteractionDefinition* Interaction);
	void Server_RequestInterruption_Interruptor();
	void Server_RequestInteraction();
	void Server_EndInteraction(class UInteractionDefinition* Interaction);
	void Server_DebugRequestInteraction(const class FString& interactionName, const class FString& InteractorName, const class FString& interactableName);
	void Server_AnswerInterruption_Interruptee(bool success);
	void ResetSuccessiveSkillCheckCount();
	void RemoveInteraction(class UInteractionDefinition* Interaction);
	void PauseSkillCheckTimer();
	int NumInteractionsInZone();
	void Multicast_StoreInterruption_Interruptor(class ADBDPlayer* interruptionOtherParty, class UInterruptionDefinition* InterruptionDefinition);
	void Multicast_StoreInteraction(TEnumAsByte<EInputInteractionType> InteractionType, class UInteractionDefinition* Interaction);
	void Multicast_RequestInterruption_Interruptee(class ADBDPlayer* interruptionOtherParty, class UInterruptionDefinition* InterruptionDefinition);
	void Multicast_InterruptionRequestResult_Interruptor(bool success);
	void Multicast_InteractionRequestResult(bool success);
	void IncrementSuccessiveSkillCheckCount();
	bool HasAvailableInteraction(TEnumAsByte<EInputInteractionType> InteractionType);
	bool HasActiveSkillCheck();
	float GetMultiplicativeSkillCheckProbabilityModifier();
	class UInteractionDefinition* GetCurrentInteraction();
	class UInteractionDefinition* GetAvailableInteraction(TEnumAsByte<EInputInteractionType> InteractionType);
	float GetAdditiveSkillCheckProbabilityModifier();
	void ForceBeginSkillCheckProgress();
	void Client_NotifyChargeCompleted(class UInteractionDefinition* Interaction);
	void CleanInteractionArray(class AActor* DestroyedActor);
	bool CanPerformInteraction(const class FString& interactionName);
	void Broadcast_Multicast_ConfirmChargedCompleted(bool chargeComplete);
	void Broadcast_InteractionPlayerProperties_Multicast(const struct FInteractionPlayerProperties& playerProperties);
	void Broadcast_InteractionPlayerProperties(const struct FInteractionPlayerProperties& playerProperties);
	void Broadcast_ConfirmChargedCompleted(bool chargeComplete);
	void Authority_ClearPlayerDependency(class ADBDPlayer* playerDependency);
	void Authority_ClearPlayerDependencies();
	void AddInteraction(class UInteractionDefinition* Interaction);
};


// Class DeadByDaylight.PlayerProfileDAL
// 0x0118 (0x0140 - 0x0028)
class UPlayerProfileDAL : public UObject
{
public:
	unsigned char                                      UnknownData00[0x118];                                     // 0x0028(0x0118) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.PlayerProfileDAL");
		return ptr;
	}

};


// Class DeadByDaylight.PlayerReportManager
// 0x0088 (0x00B0 - 0x0028)
class UPlayerReportManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x88];                                      // 0x0028(0x0088) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.PlayerReportManager");
		return ptr;
	}

};


// Class DeadByDaylight.PollableEventListener
// 0x0010 (0x00F8 - 0x00E8)
class UPollableEventListener : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00E8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.PollableEventListener");
		return ptr;
	}

};


// Class DeadByDaylight.PopupFactory
// 0x0008 (0x0030 - 0x0028)
class UPopupFactory : public UObject
{
public:
	class UDBDGameInstance*                            _gameInstance;                                            // 0x0028(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.PopupFactory");
		return ptr;
	}

};


// Class DeadByDaylight.PopupSequencer
// 0x0038 (0x0060 - 0x0028)
class UPopupSequencer : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	class UDBDGameInstance*                            _gameInstance;                                            // 0x0030(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x28];                                      // 0x0038(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.PopupSequencer");
		return ptr;
	}

};


// Class DeadByDaylight.ProceduralLevelBuilder
// 0x04A0 (0x0820 - 0x0380)
class AProceduralLevelBuilder : public AActor
{
public:
	class FString                                      PathToMapDirectory;                                       // 0x0380(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class FString                                      PathToTilesDirectory;                                     // 0x0390(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	float                                              KillerMinProximityFromCamper;                             // 0x03A0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              SurvivorMinProximityFromOtherCamper;                      // 0x03A4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MinProximityBetweenGenerators;                            // 0x03A8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              SurvivorMinProximityFromGenerator;                        // 0x03AC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              SurvivorMinProximityFromTotem;                            // 0x03B0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x03B4(0x0004) MISSED OFFSET
	class UClass*                                      DebugMap;                                                 // 0x03B8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<class UClass*>                              DebugTiles;                                               // 0x03C0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	float                                              SmallMeatLockerMinProximityFromKillerLair;                // 0x03D0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              SmallMeatLockerMinProximityFromEachOther;                 // 0x03D4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UProceduralGenerationData*                   ProceduralGenerationData;                                 // 0x03D8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x03E0(0x0008) MISSED OFFSET
	struct FGeneratedLevelData                         _generatedData;                                           // 0x03E8(0x00D0)
	TArray<struct FDependency>                         _escapeDependencies;                                      // 0x04B8(0x0010) (ZeroConstructor)
	class UClass*                                      _tileClass;                                               // 0x04C8(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FRandomStream                               _proceduralRandomizationStream;                           // 0x04D0(0x0008) (ZeroConstructor, Transient)
	class UMapData*                                    _mapData;                                                 // 0x04D8(0x0008) (ZeroConstructor, IsPlainOldData)
	class UObjectLibrary*                              _availableMapsLibrary;                                    // 0x04E0(0x0008) (ZeroConstructor, IsPlainOldData)
	class UObjectLibrary*                              _availableTilesLibrary;                                   // 0x04E8(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FStreamableManager                          _streamable;                                              // 0x04F0(0x00A0)
	class UObjectLibrary*                              _availableDerivedTileLibrary;                             // 0x0590(0x0008) (ZeroConstructor, IsPlainOldData)
	class UTileMatrix*                                 _tileMatrix;                                              // 0x0598(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UTileBank*                                   _tileBank;                                                // 0x05A0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x68];                                      // 0x05A8(0x0068) MISSED OFFSET
	class UActorSpawner*                               _killerLairSpawner;                                       // 0x0610(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData03[0x10];                                      // 0x0618(0x0010) MISSED OFFSET
	TArray<struct FStringAssetReference>               _itemAssetReferences;                                     // 0x0628(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData04[0x18];                                      // 0x0638(0x0018) MISSED OFFSET
	TArray<class ATile*>                               _tilesThatHaveBeenSpawned;                                // 0x0650(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData05[0x10];                                      // 0x0660(0x0010) MISSED OFFSET
	class AProceduralLevelData*                        _debugProceduralDatas;                                    // 0x0670(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class ADBDClientSyncer*                            _syncer;                                                  // 0x0678(0x0008) (Net, ZeroConstructor, Transient, IsPlainOldData)
	class UEdgeObjectHandlingStrategy*                 _edgeObjectHandlingStrategy;                              // 0x0680(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData06[0x198];                                     // 0x0688(0x0198) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.ProceduralLevelBuilder");
		return ptr;
	}


	void SyncSeeds();
	void StartGenerationOnSyncerReady();
	class AActor* SpawnActor(class UClass* ActorClass, TEnumAsByte<ETileSpawnPointType> spawnPointType);
	void OfferingAdjustFog(float Modifier);
	void Multicast_DebugShareGenerationData(const struct FGenerationParams& usedParams);
	void BuildFromSeed();
};


// Class DeadByDaylight.ProceduralLevelData
// 0x0130 (0x04B0 - 0x0380)
class AProceduralLevelData : public AActor
{
public:
	TAssetPtr<class UPaperTileMap>                     SelectedPaperMap;                                         // 0x0380(0x0020) (Edit)
	int                                                GenerationSeed;                                           // 0x03A0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EKillerMoodInfluence>                  LevelMood;                                                // 0x03A4(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x03A5(0x0003) MISSED OFFSET
	struct FGeneratedLevelData                         GeneratedData;                                            // 0x03A8(0x00D0) (Edit, BlueprintVisible, BlueprintReadOnly)
	TArray<struct FName>                               Offerings;                                                // 0x0478(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                PerksLevel;                                               // 0x0488(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x048C(0x0004) MISSED OFFSET
	TArray<struct FName>                               Perks;                                                    // 0x0490(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	bool                                               SkipGameplayElementGeneration;                            // 0x04A0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x04A1(0x0007) MISSED OFFSET
	class AActor*                                      _builder;                                                 // 0x04A8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.ProceduralLevelData");
		return ptr;
	}

};


// Class DeadByDaylight.ProjectedUserInterface
// 0x0028 (0x03A8 - 0x0380)
class AProjectedUserInterface : public AActor
{
public:
	class FString                                      ScreenClassName;                                          // 0x0380(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class URootMovie*                                  _rootMovie;                                               // 0x0390(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     _projectionPanelSize;                                     // 0x0398(0x000C) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x03A4(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.ProjectedUserInterface");
		return ptr;
	}


	void UpdateMouseInput();
	void InitializeComponents(class UStaticMeshComponent* projectionPanel);
};


// Class DeadByDaylight.PulldownAnalytics
// 0x0000 (0x0028 - 0x0028)
class UPulldownAnalytics : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.PulldownAnalytics");
		return ptr;
	}


	void STATIC_IncrementPalletStun(class ACamperPlayer* survivor);
	void STATIC_IncrementPalletSpawned(class AActor* Actor);
	void STATIC_IncrementPalletDrop(class ACamperPlayer* survivor);
	void STATIC_IncrementPalletDestroy(class ASlasherPlayer* killer);
};


// Class DeadByDaylight.RegionFinder
// 0x0078 (0x00A0 - 0x0028)
class URegionFinder : public UObject
{
public:
	TArray<struct FRegion>                             Regions;                                                  // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              TIMEOUT;                                                  // 0x0038(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x64];                                      // 0x003C(0x0064) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.RegionFinder");
		return ptr;
	}

};


// Class DeadByDaylight.RitualHandlerComponent
// 0x01D8 (0x02C0 - 0x00E8)
class URitualHandlerComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x00E8(0x0048) MISSED OFFSET
	TMap<struct FName, class URitualEvaluatorBase*>    _evaluators;                                              // 0x0130(0x0050) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData01[0x140];                                     // 0x0180(0x0140) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.RitualHandlerComponent");
		return ptr;
	}


	void ReceiveGameEvent(TEnumAsByte<EDBDScoreTypes> ScoreType, float amount, class AActor* Instigator, class AActor* Target);
};


// Class DeadByDaylight.BasePopupScreen
// 0x0000 (0x0200 - 0x0200)
class UBasePopupScreen : public UScreenBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.BasePopupScreen");
		return ptr;
	}

};


// Class DeadByDaylight.GenericPopupScreen
// 0x0070 (0x0270 - 0x0200)
class UGenericPopupScreen : public UBasePopupScreen
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0200(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.GenericPopupScreen");
		return ptr;
	}


	void OnChoiceSelected(int selectedButtonType);
};


// Class DeadByDaylight.SeasonEndPopupScreen
// 0x0000 (0x0270 - 0x0270)
class USeasonEndPopupScreen : public UGenericPopupScreen
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.SeasonEndPopupScreen");
		return ptr;
	}

};


// Class DeadByDaylight.UnlockPersonalPerksPopupScreen
// 0x0000 (0x0270 - 0x0270)
class UUnlockPersonalPerksPopupScreen : public UGenericPopupScreen
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.UnlockPersonalPerksPopupScreen");
		return ptr;
	}

};


// Class DeadByDaylight.StoreProcessingPopupScreen
// 0x0000 (0x0200 - 0x0200)
class UStoreProcessingPopupScreen : public UBasePopupScreen
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.StoreProcessingPopupScreen");
		return ptr;
	}

};


// Class DeadByDaylight.CharacterInfoScreen
// 0x0070 (0x0270 - 0x0200)
class UCharacterInfoScreen : public UScreenBase
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0200(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.CharacterInfoScreen");
		return ptr;
	}


	void OnBackButtonClick();
};


// Class DeadByDaylight.CreditsScreen
// 0x0000 (0x0200 - 0x0200)
class UCreditsScreen : public UScreenBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.CreditsScreen");
		return ptr;
	}


	void SetCreditsHtml(const class FString& CreditsHtml);
	void ScrollCreditsScreen(float scrollAmount);
};


// Class DeadByDaylight.DailyRitualsScreen
// 0x01C0 (0x03C0 - 0x0200)
class UDailyRitualsScreen : public UScreenBase
{
public:
	unsigned char                                      UnknownData00[0x1C0];                                     // 0x0200(0x01C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.DailyRitualsScreen");
		return ptr;
	}


	void OnRemoveRitual(const class FString& ID);
	void OnClosed();
	void OnClaimRitual(const class FString& ID);
	void OnClaimAllRituals();
};


// Class DeadByDaylight.HudScreen
// 0x0380 (0x0580 - 0x0200)
class UHudScreen : public UScreenBase
{
public:
	unsigned char                                      UnknownData00[0x380];                                     // 0x0200(0x0380) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.HudScreen");
		return ptr;
	}


	void OnTutorialTallyNext();
	void OnTutorialTallyLeave();
	void OnTutorialNotificationClosedByUserInput();
	void OnQuitGameButtonClick();
	void OnPreviousButtonClick();
	void OnNextButtonClick();
	void OnLeaveButtonClick();
	void OnCancelQuitGameButtonClick();
};


// Class DeadByDaylight.LegalMenuScreen
// 0x00E0 (0x02E0 - 0x0200)
class ULegalMenuScreen : public UScreenBase
{
public:
	unsigned char                                      UnknownData00[0xE0];                                      // 0x0200(0x00E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.LegalMenuScreen");
		return ptr;
	}


	void OnDeclineClick();
	void OnAcceptClick();
};


// Class DeadByDaylight.LoadingScreen
// 0x0000 (0x0200 - 0x0200)
class ULoadingScreen : public UScreenBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.LoadingScreen");
		return ptr;
	}


	void ShowLoadingTip(const struct FHintData& tipData);
	void ShowLoadingProgressBar(bool show);
	void ShowLoadingImageTips(bool IsKiller);
	void SetLoadingProgressValue(float Value);
};


// Class DeadByDaylight.MatchManagementScreen
// 0x04D0 (0x06D0 - 0x0200)
class UMatchManagementScreen : public UScreenBase
{
public:
	unsigned char                                      UnknownData00[0x4D0];                                     // 0x0200(0x04D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.MatchManagementScreen");
		return ptr;
	}


	void OnToggleMatchAccessibility();
	void OnRemoveMap(const class FString& MapId);
	void OnPerksSettingsChange(int Value);
	void OnOfferingsSettingsChange(int Value);
	void OnItemsAndAddonsSettingsChange(int Value);
	void OnChooseMapButtonClick();
	void OnBackToOverviewButtonClick();
	void OnBackButtonClick();
	void OnApplyChangesClicked();
	void OnAllowDlcSettingsClick();
	void OnAddMap(const class FString& MapId);
};


// Class DeadByDaylight.NavigationScreen
// 0x0540 (0x0740 - 0x0200)
class UNavigationScreen : public UScreenBase
{
public:
	unsigned char                                      UnknownData00[0x540];                                     // 0x0200(0x0540) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.NavigationScreen");
		return ptr;
	}


	void OnToggleChatVisibility();
	void OnStartButtonClick();
	void OnSettingsClick();
	void OnSendChatMsgButtonClick(const class FString& Message);
	void OnReadyButtonClick();
	void OnPlayerInfoClick(int PlayerId);
	void OnMatchManagementButtonClick();
	void OnInviteFriendClick();
	void OnDailyRitualsClick();
	void OnChatInputMouseOver(int isMouseOver);
	void OnCharacterInfoClick();
	void OnCancelButtonClick();
};


// Class DeadByDaylight.OverlayMenuScreen
// 0x0B60 (0x0D60 - 0x0200)
class UOverlayMenuScreen : public UScreenBase
{
public:
	unsigned char                                      UnknownData00[0xB60];                                     // 0x0200(0x0B60) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.OverlayMenuScreen");
		return ptr;
	}


	void OnTutorialLevelSelected(const class FString& tutorialLevelId);
	void OnTopicVideoPositioned(float stageX, float stageY, float stageWidth, float stageHeight);
	void OnTopicVideoChanged(const class FString& VideoID);
	void OnSurvivorMouseSensitivityChanged(int Value);
	void OnSurvivorControllerSensitivityChanged(int Value);
	void OnSelectTab(int tabIndex);
	void OnResolutionClick(int Value);
	void OnResetDefaults(const class FString& keyBindingsData, int mustBeGamepadKey);
	void OnRequestKeyInput(const class FString& Name, bool isAxis, float Scale, const class FString& Key);
	void OnQuitGameButtonClick();
	void OnQuitButtonClick();
	void OnQualitySetIndex(int Index);
	void OnPlayerInfoClick(const class FString& PlayerId);
	void OnMuteOnFocusLostClick();
	void OnMenuMusicVolumeClick(int Value);
	void OnMainVolumeClick(int Value);
	void OnLanguageChange(int Value);
	void OnKillerMouseSensitivityChanged(int Value);
	void OnKillerControllerSensitivityChanged(int Value);
	void OnInvertYClick();
	void OnHideTutorialClick();
	void OnHeadphonesClick();
	void OnFullScreenClick();
	void OnBackButtonClick();
	void OnAutoAdjustClick();
};


// Class DeadByDaylight.PanelScreen
// 0x0700 (0x0900 - 0x0200)
class UPanelScreen : public UScreenBase
{
public:
	unsigned char                                      UnknownData00[0x700];                                     // 0x0200(0x0700) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.PanelScreen");
		return ptr;
	}


	void OnWebNodeSelected(int ID, int nodeDepth);
	void OnWebBuilt();
	void OnStoreButtonClick();
	void OnSideTabButtonClick(int tabIndex);
	void OnRoleButtonClick();
	void OnReservedBloodPoints(int BloodPoints, bool fullCost);
	void OnRegenerateButtonClick(int levelUp);
	void OnPrestigeUp();
	void OnLoadoutSlotButtonClick(int SlotIndex);
	void OnItemUnselected(int ItemIndex);
	void OnItemSelected(int ItemIndex);
	void OnConfirmCollectSelectedNode();
	void OnCharInfoClick();
	void OnCharacterSlotButtonClick(int CharacterIndex);
	void OnCategoryIndexSelected(int categoryIndex);
	void OnAvailableItemSelected(int ItemIndex);
};


// Class DeadByDaylight.RoleSelectionScreen
// 0x00E0 (0x02E0 - 0x0200)
class URoleSelectionScreen : public UScreenBase
{
public:
	unsigned char                                      UnknownData00[0xE0];                                      // 0x0200(0x00E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.RoleSelectionScreen");
		return ptr;
	}


	void OnChangeUserButtonClick();
	void OnButtonSelected(int buttonId);
};


// Class DeadByDaylight.SplashScreen
// 0x00E0 (0x02E0 - 0x0200)
class USplashScreen : public UScreenBase
{
public:
	unsigned char                                      UnknownData00[0xE0];                                      // 0x0200(0x00E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.SplashScreen");
		return ptr;
	}


	void ShowSaveGamePopup();
	void ShowPressKeyState();
	void ShowLoadingState();
	void SetVersionText(const class FString& versionText);
	void OnSaveGamePopupComplete();
	void OnKeyPressed();
	void HidePressKeyState();
};


// Class DeadByDaylight.StoreScreen
// 0x0710 (0x0910 - 0x0200)
class UStoreScreen : public UScreenBase
{
public:
	unsigned char                                      UnknownData00[0x710];                                     // 0x0200(0x0710) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.StoreScreen");
		return ptr;
	}


	void OnUnlockWithCurrency(int currencyId, const class FString& combinedItem);
	void OnTabSelected(int Index);
	void OnStorySelected();
	void OnStoreItemSelected(const class FString& combinedItemId);
	void OnStoreItemLinkSelected(const class FString& combinedItemId);
	void OnStoreCharacterSelected(int CharacterIndex);
	void OnStoreCatalogCategorySelected(TEnumAsByte<ECustomizationCategory> Category);
	void OnSearchInputChanged(const class FString& searchInput);
	void OnRotateCharacter(float mouseDistanceChange);
	void OnNotEnoughTokens();
	void OnMarketSlotButtonClick(int SlotIndex);
	void OnFiltersUpdated(bool All, bool rarityCommon, bool rarityUncommon, bool rarityRare, bool rarityVeryRare, bool rarityUltraRare, bool includeAllOwnedItems);
	void OnFeaturedButtonSelected(int linkIndex);
	void OnEquipItem(const class FString& combinedItemId);
	void OnCatalogSelected();
	void OnBuyCurrencyBundle(int Index);
};


// Class DeadByDaylight.SystemPromptsScreen
// 0x0230 (0x0430 - 0x0200)
class USystemPromptsScreen : public UScreenBase
{
public:
	unsigned char                                      UnknownData00[0x230];                                     // 0x0200(0x0230) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.SystemPromptsScreen");
		return ptr;
	}


	void OnTextInputMouseOver(int isMouseOver);
	void OnSystemPromptsEnd();
	void OnReplyLegalTerms(int accepted);
	void OnConfirmReportPlayer(const class FString& Category, const class FString& Comment);
	void OnConfirmBuyMarketItem();
};


// Class DeadByDaylight.TallyScreen
// 0x0380 (0x0580 - 0x0200)
class UTallyScreen : public UScreenBase
{
public:
	unsigned char                                      UnknownData00[0x380];                                     // 0x0200(0x0380) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.TallyScreen");
		return ptr;
	}


	void OnSpectateButtonClick();
	void OnShowSlasherInfos();
	void OnReportPlayerButtonClick(const class FString& plateformAccountId, const class FString& MirrorsId, const class FString& PlayerName, int IsKiller);
	void OnRateMatch(int rateValue);
	void OnPlayerInfoClick(const class FString& PlayerId);
	void OnLevelingSequenceComplete();
	void OnLeaveButtonClick();
	void OnBloodwebButtonClick();
};


// Class DeadByDaylight.ScreenCenterAimingStrategy
// 0x0010 (0x00F8 - 0x00E8)
class UScreenCenterAimingStrategy : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00E8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.ScreenCenterAimingStrategy");
		return ptr;
	}

};


// Class DeadByDaylight.ScreenSpaceLocationComponent
// 0x0030 (0x02C0 - 0x0290)
class UScreenSpaceLocationComponent : public USceneComponent
{
public:
	float                                              ScreenSpaceX;                                             // 0x0290(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ScreenSpaceY;                                             // 0x0294(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                FrameDelay;                                               // 0x0298(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   _currentResolution;                                       // 0x029C(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x02A4(0x0004) MISSED OFFSET
	TArray<struct FTransform>                          _previousTransforms;                                      // 0x02A8(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData01[0x8];                                       // 0x02B8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.ScreenSpaceLocationComponent");
		return ptr;
	}


	bool HasValidPosition();
	struct FVector2D GetCurrentResolution();
};


// Class DeadByDaylight.SeasonManager
// 0x0010 (0x0390 - 0x0380)
class ASeasonManager : public AActor
{
public:
	class UDBDGameInstance*                            _gameInstance;                                            // 0x0380(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0388(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.SeasonManager");
		return ptr;
	}


	int GetOldSlasherPips();
	int GetOldCamperPips();
};


// Class DeadByDaylight.SelectiveVisibilityComponent
// 0x0000 (0x0290 - 0x0290)
class USelectiveVisibilityComponent : public USceneComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.SelectiveVisibilityComponent");
		return ptr;
	}


	void Local_SetVisibility(bool bNewVisibility, bool bPropagateToChildren);
};


// Class DeadByDaylight.Sequencer
// 0x0098 (0x00C0 - 0x0028)
class USequencer : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnNextStep;                                               // 0x0028(0x0010) (ZeroConstructor, Transient, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x88];                                      // 0x0038(0x0088) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.Sequencer");
		return ptr;
	}


	void Unregister(class AActor* Step);
	void Register(class AActor* Step);
	void CleanSequence(class AActor* DestroyedActor);
};


// Class DeadByDaylight.ShopBoxSpawnManager
// 0x0090 (0x0410 - 0x0380)
class AShopBoxSpawnManager : public AActor
{
public:
	TArray<class ATargetPoint*>                        BoxItemsArray1;                                           // 0x0380(0x0010) (Edit, ZeroConstructor)
	TArray<class ATargetPoint*>                        BoxItemsArray2;                                           // 0x0390(0x0010) (Edit, ZeroConstructor)
	TArray<class ATargetPoint*>                        BoxItemsArray3;                                           // 0x03A0(0x0010) (Edit, ZeroConstructor)
	TArray<class ATargetPoint*>                        BoxItemsArray4;                                           // 0x03B0(0x0010) (Edit, ZeroConstructor)
	TArray<class ATargetPoint*>                        BoxItemsArray5;                                           // 0x03C0(0x0010) (Edit, ZeroConstructor)
	TArray<class ATargetPoint*>                        BoxItemsArray6;                                           // 0x03D0(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x30];                                      // 0x03E0(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.ShopBoxSpawnManager");
		return ptr;
	}

};


// Class DeadByDaylight.ShopCameraManager
// 0x0020 (0x03A0 - 0x0380)
class AShopCameraManager : public AInfo
{
public:
	TArray<struct FCharacterCameraTag>                 CatalogCharactersCamera;                                  // 0x0380(0x0010) (Edit, ZeroConstructor)
	TArray<struct FCharacterCameraTag>                 StoryCharactersCamera;                                    // 0x0390(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.ShopCameraManager");
		return ptr;
	}

};


// Class DeadByDaylight.ShopScene
// 0x0010 (0x0038 - 0x0028)
class UShopScene : public UObject
{
public:
	class UObject*                                     _worldContext;                                            // 0x0028(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UClass*                                      _boxClass;                                                // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.ShopScene");
		return ptr;
	}

};


// Class DeadByDaylight.SlaveAnimInstance
// 0x0008 (0x0480 - 0x0478)
class USlaveAnimInstance : public UAnimInstance
{
public:
	TWeakObjectPtr<class USkeletalMeshComponent>       _masterMesh;                                              // 0x0478(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.SlaveAnimInstance");
		return ptr;
	}


	void SetMasterMesh(class USkeletalMeshComponent* masterMesh);
	class USkeletalMeshComponent* GetMasterMesh();
};


// Class DeadByDaylight.SoundMarker
// 0x0010 (0x0390 - 0x0380)
class ASoundMarker : public AActor
{
public:
	TEnumAsByte<EHudIndicatorIconType>                 HudIndicatorIconType;                                     // 0x0380(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EHudOffscreenIndicatorType>            HudOffscreenIndicatorType;                                // 0x0381(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0382(0x0002) MISSED OFFSET
	float                                              LifeSpan;                                                 // 0x0384(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                DistanceLimit;                                            // 0x0388(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x038C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.SoundMarker");
		return ptr;
	}

};


// Class DeadByDaylight.StalkedComponent
// 0x00A8 (0x0190 - 0x00E8)
class UStalkedComponent : public UActorComponent
{
public:
	struct FScriptMulticastDelegate                    OnStalkedAudioWarning;                                    // 0x00E8(0x0010) (Edit, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnStalkedAudioWarningStopStart;                           // 0x00F8(0x0010) (Edit, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnStalkedAudioWarningVolume;                              // 0x0108(0x0010) (Edit, ZeroConstructor, InstancedReference, BlueprintAssignable)
	float                                              _percentForHightlight;                                    // 0x0118(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              _rangeForHightlight;                                      // 0x011C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              _percentForOutline;                                       // 0x0120(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              _rangeForOutline;                                         // 0x0124(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              _percentForStalkWarningMin;                               // 0x0128(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              _percentForStalkWarningMax;                               // 0x012C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0130(0x0008) MISSED OFFSET
	float                                              _maxStalkPoints;                                          // 0x0138(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x44];                                      // 0x013C(0x0044) MISSED OFFSET
	class UChargeableComponent*                        _chargeableComponent;                                     // 0x0180(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0188(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.StalkedComponent");
		return ptr;
	}


	void SetChargeableComponent(class UChargeableComponent* ChargeableComponent);
	void OnPlayerDisconnect(class ADBDPlayer* Player);
	bool IsStalkHighlightVisible();
	bool IsOutlineVisible();
	bool IsBeingStalked();
	float GetStalkPoints(class ADBDPlayer* caller);
	float GetPercentStalkPoints(class ADBDPlayer* caller);
	float GetOutlineVisibleRange();
	float GetMaxStalkPoints(class ADBDPlayer* caller);
	class UChargeableComponent* GetChargeableComponent();
	bool CanBeStandingKilled();
};


// Class DeadByDaylight.StalkerComponent
// 0x0068 (0x0150 - 0x00E8)
class UStalkerComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00E8(0x0008) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnTierChange;                                             // 0x00F0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	TArray<class UStalkedComponent*>                   _playerStalkedComponents;                                 // 0x0100(0x0010) (ExportObject, ZeroConstructor, Transient)
	unsigned char                                      UnknownData01[0x40];                                      // 0x0110(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.StalkerComponent");
		return ptr;
	}


	void Update(float DeltaTime, class ADBDPlayer* Player, TEnumAsByte<EDetectionZone> stalkerDetectionZone);
	void OnPlayerDisconnect(class ADBDPlayer* Player);
	void NotifyKill(class ADBDPlayer* killedPlayer);
	bool IsStalkingSomeone();
	bool IsAtLastStalkTier();
	bool HasMaxStalkPoints();
	float GetTotalStalkingPoints();
	float GetRequirementForTier(int tier);
	float GetPercentStalkingPointsInCurrentTier();
	float GetPercentStalkingPoints();
	int GetMaxStalkTier();
	float GetMaxStalkingPoints();
	float GetEvilWithinScoreMultiplier();
	int GetCurrentTier();
	bool CanStandKill(class ADBDPlayer* Player);
	bool CanStalk();
	void Broadcast_Tier(int previousTier, int currentTier, bool IsFirstTime);
	void Broadcast_SetStalkPoints(float stalkPoints);
	void Broadcast_Multicast_Tier(int previousTier, int currentTier, bool IsFirstTime);
	void Broadcast_Multicast_SetStalkPoints(float stalkPoints);
	void Broadcast_BeingStalked_Server(class ADBDPlayer* Player, bool beingStalked);
	void Broadcast_BeingStalked_Multicast(class ADBDPlayer* Player, bool beingStalked);
	void Broadcast_AddStalkPointsToPlayer_Server(class ADBDPlayer* Player, float stalkPoints);
	void Broadcast_AddStalkPointsToPlayer_Multicast(class ADBDPlayer* Player, float stalkPoints);
};


// Class DeadByDaylight.StartScreenBase
// 0x0078 (0x0400 - 0x0388)
class AStartScreenBase : public ALevelScriptActor
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x0388(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.StartScreenBase");
		return ptr;
	}


	void TravelToMenu();
	void BeginDestroyTravelSequence();
};


// Class DeadByDaylight.StateMachine
// 0x0068 (0x0150 - 0x00E8)
class UStateMachine : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x00E8(0x0050) MISSED OFFSET
	TArray<uint16_t>                                   _netStateIDStackInitial;                                  // 0x0138(0x0010) (Net, ZeroConstructor)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0148(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.StateMachine");
		return ptr;
	}


	void Server_SetStateStack(TArray<uint16_t> netStateIDStack);
	void NetIDStackChanged();
	void Multicast_SetStateStack(TArray<uint16_t> netStateIDStack);
};


// Class DeadByDaylight.FirecrackerStateMachine
// 0x0000 (0x0150 - 0x0150)
class UFirecrackerStateMachine : public UStateMachine
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.FirecrackerStateMachine");
		return ptr;
	}

};


// Class DeadByDaylight.MeatHookStateMachine
// 0x0000 (0x0150 - 0x0150)
class UMeatHookStateMachine : public UStateMachine
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.MeatHookStateMachine");
		return ptr;
	}

};


// Class DeadByDaylight.PlayerStateMachine
// 0x0000 (0x0150 - 0x0150)
class UPlayerStateMachine : public UStateMachine
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.PlayerStateMachine");
		return ptr;
	}

};


// Class DeadByDaylight.CamperStateMachine
// 0x0000 (0x0150 - 0x0150)
class UCamperStateMachine : public UPlayerStateMachine
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.CamperStateMachine");
		return ptr;
	}

};


// Class DeadByDaylight.SlasherStateMachine
// 0x0050 (0x01A0 - 0x0150)
class USlasherStateMachine : public UPlayerStateMachine
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0150(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.SlasherStateMachine");
		return ptr;
	}

};


// Class DeadByDaylight.StillnessTrackerComponent
// 0x0038 (0x0120 - 0x00E8)
class UStillnessTrackerComponent : public UActorComponent
{
public:
	float                                              SpeedThreshold;                                           // 0x00E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DistanceThreshold;                                        // 0x00EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DistanceDecay;                                            // 0x00F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DecayWhileMoving;                                         // 0x00F4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00F5(0x0003) MISSED OFFSET
	float                                              StillnessThreshhold;                                      // 0x00F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StillnessTimerLimit;                                      // 0x00FC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DecaySpeedMultiplier;                                     // 0x0100(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0104(0x0008) MISSED OFFSET
	TWeakObjectPtr<class ADBDPlayer>                   _trackedPlayer;                                           // 0x010C(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0xC];                                       // 0x0114(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.StillnessTrackerComponent");
		return ptr;
	}


	void StartTracking();
};


// Class DeadByDaylight.CamperStillnessTrackerComponent
// 0x0058 (0x0178 - 0x0120)
class UCamperStillnessTrackerComponent : public UStillnessTrackerComponent
{
public:
	float                                              ChickenShitModifier;                                      // 0x0120(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LoudNoiseTime;                                            // 0x0124(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0128(0x0010) MISSED OFFSET
	TArray<float>                                      ExposerSpawnTimes;                                        // 0x0138(0x0010) (ZeroConstructor, Transient)
	TArray<float>                                      ExposerDespawnTimes;                                      // 0x0148(0x0010) (ZeroConstructor, Transient)
	class UClass*                                      _exposerInstanceToSpawn;                                  // 0x0158(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<class ACamperExposerInstance*>              _exposerInstances;                                        // 0x0160(0x0010) (ZeroConstructor, Transient)
	class UExposerInteriorZoneComponent*               _interiorZone;                                            // 0x0170(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.CamperStillnessTrackerComponent");
		return ptr;
	}


	void OnOverlapExit(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void OnOverlapEnter(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void OnLevelReadyToPlay();
	void ExitInteriorZone(class UExposerInteriorZoneComponent* zone);
	void EnterInteriorZone(class UExposerInteriorZoneComponent* zone);
};


// Class DeadByDaylight.SurvivorInteractionAnalytics
// 0x0000 (0x0028 - 0x0028)
class USurvivorInteractionAnalytics : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.SurvivorInteractionAnalytics");
		return ptr;
	}


	void STATIC_RecordHealSuccess(class ACamperPlayer* survivor);
	void STATIC_RecordHatchEscape(class ACamperPlayer* survivor);
	void STATIC_IncrementUnhookCount(class ACamperPlayer* survivor);
	void STATIC_IncrementHealCount(class ACamperPlayer* survivor);
};


// Class DeadByDaylight.TickInEditorSkeletalMesh
// 0x0000 (0x0408 - 0x0408)
class ATickInEditorSkeletalMesh : public ASkeletalMeshActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.TickInEditorSkeletalMesh");
		return ptr;
	}

};


// Class DeadByDaylight.Tile
// 0x00F8 (0x0478 - 0x0380)
class ATile : public AActor
{
public:
	int                                                MinimumSpacing;                                           // 0x0380(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaximumSpacing;                                           // 0x0384(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaximumCount;                                             // 0x0388(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Dimension;                                                // 0x038C(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0394(0x0004) MISSED OFFSET
	TArray<TEnumAsByte<EscapeStrategyType>>            AvailableEscapeTypes;                                     // 0x0398(0x0010) (Edit, ZeroConstructor)
	TEnumAsByte<ETileType>                             Type;                                                     // 0x03A8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EDensity>                              Density;                                                  // 0x03A9(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EPathType>                             Path;                                                     // 0x03AA(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x03AB(0x0001) MISSED OFFSET
	int                                                Number;                                                   // 0x03AC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               PlaceHolder;                                              // 0x03B0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               TestTile;                                                 // 0x03B1(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x03B2(0x0006) MISSED OFFSET
	TArray<class UActorComponent*>                     SpawnPointsCache;                                         // 0x03B8(0x0010) (ExportObject, ZeroConstructor, Transient)
	TArray<class UActorComponent*>                     ObjectRandomizersCache;                                   // 0x03C8(0x0010) (ExportObject, ZeroConstructor, Transient)
	TArray<class UActorComponent*>                     ActorSpawnersCache;                                       // 0x03D8(0x0010) (ExportObject, ZeroConstructor, Transient)
	TArray<class UActorComponent*>                     ActorVariationSpawnersCache;                              // 0x03E8(0x0010) (ExportObject, ZeroConstructor, Transient)
	unsigned char                                      UnknownData03[0x7C];                                      // 0x03F8(0x007C) MISSED OFFSET
	bool                                               _initialized;                                             // 0x0474(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               TypeSpacing;                                              // 0x0475(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x0476(0x0002) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.Tile");
		return ptr;
	}


	void OnSetSpawnObject(class UTileSpawnPoint* TileSpawnPoint, class AActor* spawnedObject);
	void OnRep_Initialized(bool OldValue);
	void InitOnSpawned();
};


// Class DeadByDaylight.BorderTile
// 0x0020 (0x0498 - 0x0478)
class ABorderTile : public ATile
{
public:
	TArray<struct FBorderElements>                     Borders;                                                  // 0x0478(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UMapData*                                    _map;                                                     // 0x0488(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0490(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.BorderTile");
		return ptr;
	}

};


// Class DeadByDaylight.EscapeTile
// 0x0008 (0x0480 - 0x0478)
class AEscapeTile : public ATile
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0478(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.EscapeTile");
		return ptr;
	}

};


// Class DeadByDaylight.TileBank
// 0x00A0 (0x00C8 - 0x0028)
class UTileBank : public UObject
{
public:
	TMap<unsigned char, struct FConstArrayOfTiles>     _tileBlueprints;                                          // 0x0028(0x0050) (ZeroConstructor, Transient)
	TMap<unsigned char, struct FConstArrayOfTiles>     _escapeTileBlueprints;                                    // 0x0078(0x0050) (ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.TileBank");
		return ptr;
	}

};


// Class DeadByDaylight.TileMatrix
// 0x0020 (0x0048 - 0x0028)
class UTileMatrix : public UObject
{
public:
	TArray<struct FArrayOfTiles>                       _matrix;                                                  // 0x0028(0x0010) (ZeroConstructor, Transient)
	TArray<class ATile*>                               _extraTiles;                                              // 0x0038(0x0010) (ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.TileMatrix");
		return ptr;
	}

};


// Class DeadByDaylight.SearchableSpawnPoint
// 0x0010 (0x0300 - 0x02F0)
class USearchableSpawnPoint : public UTileSpawnPoint
{
public:
	class UClass*                                      ActorToSpawn;                                             // 0x02F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x02F8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.SearchableSpawnPoint");
		return ptr;
	}

};


// Class DeadByDaylight.TimerGateDecrease
// 0x0008 (0x0388 - 0x0380)
class ATimerGateDecrease : public AActor
{
public:
	class ATimerGate*                                  TimerGate;                                                // 0x0380(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.TimerGateDecrease");
		return ptr;
	}


	void Update(float DeltaTime);
};


// Class DeadByDaylight.TransformFollower
// 0x0020 (0x02B0 - 0x0290)
class UTransformFollower : public USceneComponent
{
public:
	struct FVector                                     FollowSpeed;                                              // 0x0290(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x14];                                      // 0x029C(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.TransformFollower");
		return ptr;
	}

};


// Class DeadByDaylight.TrapPlacerComponent
// 0x0040 (0x02D0 - 0x0290)
class UTrapPlacerComponent : public USceneComponent
{
public:
	class UStaticMeshComponent*                        _trapMesh;                                                // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       _socketName;                                              // 0x0298(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	float                                              _indicatorOffset;                                         // 0x02A0(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	struct FVector                                     _trapPlacementRaycastStart;                               // 0x02A4(0x000C) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	struct FVector                                     _trapPlacementRaycastEnd;                                 // 0x02B0(0x000C) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x02BC(0x0004) MISSED OFFSET
	struct FName                                       _itemTrapId;                                              // 0x02C0(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x02C8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.TrapPlacerComponent");
		return ptr;
	}


	bool IsPlacementValid();
};


// Class DeadByDaylight.TriggerableWorldObjectComponent
// 0x0048 (0x0130 - 0x00E8)
class UTriggerableWorldObjectComponent : public UActorComponent
{
public:
	struct FScriptMulticastDelegate                    OnTriggered;                                              // 0x00E8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnTriggerReset;                                           // 0x00F8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0108(0x0004) MISSED OFFSET
	float                                              _triggerResetTime;                                        // 0x010C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0110(0x0008) MISSED OFFSET
	float                                              _randomChance;                                            // 0x0118(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              _rollFrequency;                                           // 0x011C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class UPrimitiveComponent>          _conditionalTriggerVolume;                                // 0x0120(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	TWeakObjectPtr<class UPrimitiveComponent>          _guaranteedTriggerVolume;                                 // 0x0128(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.TriggerableWorldObjectComponent");
		return ptr;
	}


	void SetGuaranteedTriggerVolume(class UPrimitiveComponent* Volume);
	void SetConditionalTriggerVolume(class UPrimitiveComponent* Volume);
	void Multicast_OnTriggerReset();
	void Multicast_OnTriggered(class AActor* Instigator, const struct FVector& triggerLocation);
	void GetConditionalModifiers(class ADBDPlayer* Player, float* outAdditive, float* outMultiplicative);
	bool CanPlayerTriggerGuaranteed(class ADBDPlayer* Player);
	bool CanPlayerTriggerConditional(class ADBDPlayer* Player);
	void Authority_Trigger(class AActor* Instigator, const struct FVector& triggerLocation);
	void Authority_ResetTrigger();
	void Authority_GuaranteedVolumeOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* Other, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& HitResult);
};


// Class DeadByDaylight.TriplanarDecalComponent
// 0x0050 (0x02E0 - 0x0290)
class UTriplanarDecalComponent : public USceneComponent
{
public:
	float                                              MinHeight;                                                // 0x0290(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Height;                                                   // 0x0294(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaskIntensity;                                            // 0x0298(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x029C(0x0004) MISSED OFFSET
	class UTexture2D*                                  TopTexture;                                               // 0x02A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  BottomTexture;                                            // 0x02A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  MaskTexture;                                              // 0x02B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EDetailMode>                           MinQualitySetting;                                        // 0x02B8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x02B9(0x0007) MISSED OFFSET
	class UDecalComponent*                             _triPlanarDecal;                                          // 0x02C0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UClass*                                      _triPlanarDecalClass;                                     // 0x02C8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UMaterial*                                   _decalMaterial;                                           // 0x02D0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x02D8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.TriplanarDecalComponent");
		return ptr;
	}


	void UpdateTriplanarDecal();
};


// Class DeadByDaylight.TutorialFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UTutorialFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.TutorialFunctionLibrary");
		return ptr;
	}


	bool STATIC_IsInTutorial(class UObject* WorldContextObject);
	class ATutorialGameState* STATIC_GetTutorialGameState(class UObject* WorldContextObject);
	class ATutorialGameMode* STATIC_GetTutorialGameMode(class UObject* WorldContextObject);
};


// Class DeadByDaylight.VaultableComponent
// 0x0020 (0x0108 - 0x00E8)
class UVaultableComponent : public UActorComponent
{
public:
	struct FScriptMulticastDelegate                    OnVault;                                                  // 0x00E8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x10];                                      // 0x00F8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.VaultableComponent");
		return ptr;
	}


	void SignalVault(class ADBDPlayer* survivor);
	void OnChaseEnded(class ACamperPlayer* survivor);
};


// Class DeadByDaylight.VideoThumbnailPlayer
// 0x0028 (0x03A8 - 0x0380)
class AVideoThumbnailPlayer : public AActor
{
public:
	class UMediaPlayer*                                MediaPlayer;                                              // 0x0380(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMediaSoundWave*                             SoundWave;                                                // 0x0388(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UUserWidget*                                 VideoPlayerWidget;                                        // 0x0390(0x0008) (ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             _audioComponent;                                          // 0x0398(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x03A0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.VideoThumbnailPlayer");
		return ptr;
	}

};


// Class DeadByDaylight.WorldRunawayMeshComponent
// 0x0020 (0x0E30 - 0x0E10)
class UWorldRunawayMeshComponent : public USkeletalMeshComponent
{
public:
	float                                              ResetCooldown;                                            // 0x0E10(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1C];                                      // 0x0E14(0x001C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.WorldRunawayMeshComponent");
		return ptr;
	}


	void SetShouldRunAwayWithRandomDelay(bool should, float delayRange);
	void SetShouldRunAwayWithDelay(bool should, float Delay);
	void SetShouldRunAway(bool should);
	bool GetShouldRunAway();
	float GetRunawayMustTickDuration();
	float GetReturnMustTickDuration();
};


// Class DeadByDaylight.LevelCrowWRMeshComponent
// 0x0010 (0x0E40 - 0x0E30)
class ULevelCrowWRMeshComponent : public UWorldRunawayMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0E30(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.LevelCrowWRMeshComponent");
		return ptr;
	}


	void SetVisibilityHeight(float InVisibilityHeight);
};


// Class DeadByDaylight.ZoneDetectorComponent
// 0x0020 (0x0108 - 0x00E8)
class UZoneDetectorComponent : public UActorComponent
{
public:
	TArray<class UPrimitiveComponent*>                 _zones;                                                   // 0x00E8(0x0010) (ExportObject, ZeroConstructor, Transient)
	TArray<struct FName>                               _tags;                                                    // 0x00F8(0x0010) (ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DeadByDaylight.ZoneDetectorComponent");
		return ptr;
	}


	void OnOverlapExit(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void OnOverlapEnter(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
