#pragma once

// DeadByDaylight (2.0.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DBD_Basic.hpp"
#include "DBD_CoreUObject_classes.hpp"
#include "DBD_GameplayTags_classes.hpp"
#include "DBD_BHVRAnalytics_classes.hpp"
#include "DBD_Engine_classes.hpp"
#include "DBD_AIModule_classes.hpp"
#include "DBD_InputCore_classes.hpp"
#include "DBD_OnlineSubsystemUtils_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum DeadByDaylight.EDBDScoreTypes
enum class EDBDScoreTypes : uint8_t
{
	EDBDScoreTypes__DBDCamperScore_SurviveHealthy = 0,
	EDBDScoreTypes__DBDCamperScore_SurviveWounded = 1,
	EDBDScoreTypes__DBDCamperScore_SurviveKO = 2,
	EDBDScoreTypes__DBDCamperScore_UnlockHatch = 3,
	EDBDScoreTypes__DBDCamperScore_EscapeThroughHatch = 4,
	EDBDScoreTypes__DBDCamperScore_AllEscapeThroughHatch = 5,
	EDBDScoreTypes__DBDCamperScore_EscapeCarry = 6,
	EDBDScoreTypes__DBDCamperScore_SurviveStreakSmall = 7,
	EDBDScoreTypes__DBDCamperScore_SurviveStreakBig = 8,
	EDBDScoreTypes__DBDCamperScore_DamageStateChanged = 9,
	EDBDScoreTypes__DBDCamperScore_NearFriendInNeed = 10,
	EDBDScoreTypes__DBDCamperScore_NearFriendInNeed_PostExit = 11,
	EDBDScoreTypes__DBDCamperScore_FoundCamper = 12,
	EDBDScoreTypes__DBDCamperScore_CoopObjectives = 13,
	EDBDScoreTypes__DBDCamperScore_OpenDoorPercent = 14,
	EDBDScoreTypes__DBDCamperScore_OpenDoor = 15,
	EDBDScoreTypes__DBDCamperScore_GeneratorPercent = 16,
	EDBDScoreTypes__DBDCamperScore_GeneratorSkillCheckSuccess = 17,
	EDBDScoreTypes__DBDCamperScore_GeneratorSkillCheckBonus = 18,
	EDBDScoreTypes__DBDCamperScore_SearchablePercent = 19,
	EDBDScoreTypes__DBDCamperScore_SearchCompleteFinalContributionPercent = 20,
	EDBDScoreTypes__DBDCamperScore_AddItemToMap = 21,
	EDBDScoreTypes__DBDCamperScore_FixGenerator = 22,
	EDBDScoreTypes__DBDCamperScore_FixSpecialMapGenerator = 23,
	EDBDScoreTypes__DBDCamperScore_LastSurvivorFixGenerator = 24,
	EDBDScoreTypes__DBDCamperScore_RepairDamagedGenerator = 25,
	EDBDScoreTypes__DBDCamperScore_PowerExitGates = 26,
	EDBDScoreTypes__DBDCamperScore_CoopAltruism = 27,
	EDBDScoreTypes__DBDCamperScore_HealPercent = 28,
	EDBDScoreTypes__DBDCamperScore_HealPercent_PostExit = 29,
	EDBDScoreTypes__DBDCamperScore_HealFromDying = 30,
	EDBDScoreTypes__DBDCamperScore_HealFromDying_PostExit = 31,
	EDBDScoreTypes__DBDCamperScore_HealFromInjured = 32,
	EDBDScoreTypes__DBDCamperScore_HealFromInjured_PostExit = 33,
	EDBDScoreTypes__DBDCamperScore_HealSkillCheckSuccess = 34,
	EDBDScoreTypes__DBDCamperScore_HealSkillCheckBonus = 35,
	EDBDScoreTypes__DBDCamperScore_HealSelfPercent = 36,
	EDBDScoreTypes__DBDCamperScore_HealSelfSkillCheckSuccess = 37,
	EDBDScoreTypes__DBDCamperScore_HealSelfSkillCheckBonus = 38,
	EDBDScoreTypes__DBDCamperScore_HitAfterHookSave = 39,
	EDBDScoreTypes__DBDCamperScore_HitNearFriendInNeed = 40,
	EDBDScoreTypes__DBDCamperScore_HitNearUnhookedFriendInNeed = 41,
	EDBDScoreTypes__DBDCamperScore_SabotageHook = 42,
	EDBDScoreTypes__DBDCamperScore_SabotageHookSkillCheckSuccess = 43,
	EDBDScoreTypes__DBDCamperScore_SabotageHookSkillCheckBonus = 44,
	EDBDScoreTypes__DBDCamperScore_EscapeFromHook = 45,
	EDBDScoreTypes__DBDCamperScore_HookStrugglePerSecond = 46,
	EDBDScoreTypes__DBDCamperScore_SaveFromHook = 47,
	EDBDScoreTypes__DBDCamperScore_SaveFromHook_PostExit = 48,
	EDBDScoreTypes__DBDCamperScore_WasUnhooked = 49,
	EDBDScoreTypes__DBDCamperScore_SabotageBearTrap = 50,
	EDBDScoreTypes__DBDCamperScore_SabotageBearTrapSkillCheckSuccess = 51,
	EDBDScoreTypes__DBDCamperScore_SabotageBearTrapSkillCheckBonus = 52,
	EDBDScoreTypes__DBDCamperScore_DisableBearTrap = 53,
	EDBDScoreTypes__DBDCamperScore_SaveFromBearTrap = 54,
	EDBDScoreTypes__DBDCamperScore_SaveFromBearTrap_PostExit = 55,
	EDBDScoreTypes__DBDCamperScore_EscapeBearTrap = 56,
	EDBDScoreTypes__DBDCamperScore_BasementChillingPerSecond = 57,
	EDBDScoreTypes__DBDCamperScore_CoopBoldness = 58,
	EDBDScoreTypes__DBDCamperScore_SlasherStun = 59,
	EDBDScoreTypes__DBDCamperScore_SlasherStunCarrying = 60,
	EDBDScoreTypes__DBDCamperScore_SlasherBlind = 61,
	EDBDScoreTypes__DBDCamperScore_SlasherBurnInvisibility = 62,
	EDBDScoreTypes__DBDCamperScore_ChasePerSecond = 63,
	EDBDScoreTypes__DBDCamperScore_ChaseEscape = 64,
	EDBDScoreTypes__DBDCamperScore_ChaseSteal = 65,
	EDBDScoreTypes__DBDCamperScore_ChaseBlind = 66,
	EDBDScoreTypes__DBDCamperScore_VaultInChase = 67,
	EDBDScoreTypes__DBDCamperScore_NoiseDistraction = 68,
	EDBDScoreTypes__DBDCamperScore_SprintingNearSlasherPerSecond = 69,
	EDBDScoreTypes__DBDCamperScore_UnhideNearSlasher = 70,
	EDBDScoreTypes__DBDCamperScore_EscapeWhileChased = 71,
	EDBDScoreTypes__DBDCamperScore_DestroyPhantomTrap = 72,
	EDBDScoreTypes__DBDCamperScore_NewItem = 73,
	EDBDScoreTypes__DBDCamperScore_StartMatchWithUltraRareItem = 74,
	EDBDScoreTypes__DBDCamperScore_ItemFrom = 75,
	EDBDScoreTypes__DBDCamperScore_ExposerAdded = 76,
	EDBDScoreTypes__DBDSlasherScore_Destroy = 77,
	EDBDScoreTypes__DBDSlasherScore_Kill = 78,
	EDBDScoreTypes__DBDSlasherScore_BleedOut = 79,
	EDBDScoreTypes__DBDSlasherScore_BleedOutPercent = 80,
	EDBDScoreTypes__DBDSlasherScore_AttackSuccess = 81,
	EDBDScoreTypes__DBDSlasherScore_AttackDeviousness = 82,
	EDBDScoreTypes__DBDSlasherScore_InterruptGenerator = 83,
	EDBDScoreTypes__DBDSlasherScore_InterruptWindow = 84,
	EDBDScoreTypes__DBDSlasherScore_InterruptHide = 85,
	EDBDScoreTypes__DBDSlasherScore_InterruptExit = 86,
	EDBDScoreTypes__DBDSlasherScore_InterruptUnhook = 87,
	EDBDScoreTypes__DBDSlasherScore_InterruptChest = 88,
	EDBDScoreTypes__DBDSlasherScore_InterruptOpenHatch = 89,
	EDBDScoreTypes__DBDSlasherScore_InterruptExitHatch = 90,
	EDBDScoreTypes__DBDSlasherScore_FindHiding = 91,
	EDBDScoreTypes__DBDSlasherScore_PlaceTrap = 92,
	EDBDScoreTypes__DBDSlasherScore_Trap = 93,
	EDBDScoreTypes__DBDSlasherScore_TrapPickup = 94,
	EDBDScoreTypes__DBDSlasherScore_Hook = 95,
	EDBDScoreTypes__DBDSlasherScore_SacrificePercent = 96,
	EDBDScoreTypes__DBDSlasherScore_SacrificeSuccess = 97,
	EDBDScoreTypes__DBDSlasherScore_SacrificedCount = 98,
	EDBDScoreTypes__DBDSlasherScore_NoEscape = 99,
	EDBDScoreTypes__DBDSlasherScore_ChaseStart = 100,
	EDBDScoreTypes__DBDSlasherScore_ChasePerSecond = 101,
	EDBDScoreTypes__DBDSlasherScore_CloakStalkPerSecond = 102,
	EDBDScoreTypes__DBDSlasherScore_UncloakInView = 103,
	EDBDScoreTypes__DBDSlasherScore_UncloakAttack = 104,
	EDBDScoreTypes__DBDSlasherScore_EvadeInvisBurn = 105,
	EDBDScoreTypes__DBDSlasherScore_EvadeBlind = 106,
	EDBDScoreTypes__DBDSlasherScore_CamperDisconnect = 107,
	EDBDScoreTypes__DBDSlasherScore_HitCamperWithChainsaw = 108,
	EDBDScoreTypes__DBDSlasherScore_RunningWithChainsaw = 109,
	EDBDScoreTypes__DBDSlasherScore_ChainBlinkAttack = 110,
	EDBDScoreTypes__DBDSlasherScore_ChainBlinkInterrupt = 111,
	EDBDScoreTypes__DBDSlasherScore_ChainBlinkInterruptAfter3 = 112,
	EDBDScoreTypes__DBDSlasherScore_ChainBlinkStartChase = 113,
	EDBDScoreTypes__DBDSlasherScore_StalkpointGained = 114,
	EDBDScoreTypes__DBDSlasherScore_StalkerTierIncrement = 115,
	EDBDScoreTypes__DBDSlasherScore_StalkerTierFirstTime = 116,
	EDBDScoreTypes__DBDSlasherScore_StalkerKillAllCampers = 117,
	EDBDScoreTypes__DBDSlasherScore_PhantomTrapSet = 118,
	EDBDScoreTypes__DBDSlasherScore_PhantomTrapTrigger = 119,
	EDBDScoreTypes__DBDSlasherScore_PhantomTrapTriggerAttack = 120,
	EDBDScoreTypes__DBDSlasherScore_PhantomTrapTeleportAttack = 121,
	EDBDScoreTypes__DBDSlasherScore_PhantomTrapTeleportAttackAllCampers = 122,
	EDBDScoreTypes__DBDSlasherScore_ThrillOfTheHunt = 123,
	EDBDScoreTypes__DBDPlayerScore_BloodwebLevelUp = 124,
	EDBDScoreTypes__DBDPlayerScore_BloodwebPrestigeLevelUp = 125,
	EDBDScoreTypes__DBDPlayerScore_BloodwebPrestige3LevelUp = 126,
	EDBDScoreTypes__DBDPlayerScore_AwardPips = 127,
	EDBDScoreTypes__DBDPlayerScore_AddBloodpoints = 128,
	EDBDScoreTypes__DBDPlayerScore_BloodpointsOneCategory = 129,
	EDBDScoreTypes__DBDPlayerScore_MaxBloodpointsAllCategories = 130,
	EDBDScoreTypes__DBDPlayerScore_AddNewPerk = 131,
	EDBDScoreTypes__DBDPlayerScore_PerkLevelUp = 132,
	EDBDScoreTypes__DBDPlayerScore_BurnOfferingUltraRare = 133,
	EDBDScoreTypes__DBDPlayerScore_StartGame = 134,
	EDBDScoreTypes__DBDPlayerScore_UnlockRanking = 135,
	EDBDScoreTypes__DBDPlayerScore_FinishWithPerks = 136,
	EDBDScoreTypes__DBDCamperScore_CheatObjectives = 137,
	EDBDScoreTypes__DBDCamperScore_CheatSurvival = 138,
	EDBDScoreTypes__DBDCamperScore_CheatAltruism = 139,
	EDBDScoreTypes__DBDCamperScore_CheatBoldness = 140,
	EDBDScoreTypes__DBDSlasherScore_CheatSacrifice = 141,
	EDBDScoreTypes__DBDSlasherScore_CheatBrutality = 142,
	EDBDScoreTypes__DBDSlasherScore_CheatDeviousness = 143,
	EDBDScoreTypes__DBDSlasherScore_CheatHunter = 144,
	EDBDScoreTypes__DBDCamperScore_CleanseDullTotem = 145,
	EDBDScoreTypes__DBDCamperScore_CleanseHexTotem = 146,
	EDBDScoreTypes__DBDPlayerScore_BalancedLanding = 147,
	EDBDScoreTypes__DBDPlayerScore_Lithe = 148,
	EDBDScoreTypes__DBDPlayerScore_PharmacyItemGranted = 149,
	EDBDScoreTypes__DBDSlasherScore_DamageGenerator = 150,
	EDBDScoreTypes__DBDSlasherScore_Vault = 151,
	EDBDScoreTypes__DBDCamperScore_StartInjuredBleedout = 152,
	EDBDScoreTypes__DBDCamperScore_FullRecovery = 153,
	EDBDScoreTypes__DBDCamperScore_FirstTimeDying = 154,
	EDBDScoreTypes__DBDCamperScore_SecondTimeDying = 155,
	EDBDScoreTypes__DBDCamperScore_FirecrackerDisturbance = 156,
	EDBDScoreTypes__DBDCamperScore_GeneratorSkillCheckRuinBonus = 157,
	EDBDScoreTypes__DBDCamperScore_SlasherBurnBlink = 158,
	EDBDScoreTypes__DBDCamperScore_DieSacrificed = 159,
	EDBDScoreTypes__DBDCamperScore_DieBleedOut = 160,
	EDBDScoreTypes__DBDCamperScore_DieKill = 161,
	EDBDScoreTypes__DBDPlayerScore_EndGame = 162,
	EDBDScoreTypes__DBDPlayerScore_EnterParadise = 163,
	EDBDScoreTypes__DBDSlasherScore_CamperHookedFirstTime = 164,
	EDBDScoreTypes__DBDSlasherScore_CamperEnterHookStrugglePhase = 165,
	EDBDScoreTypes__DBDSlasherScore_ElectroShockSurvivor = 166,
	EDBDScoreTypes__DBDSlasherScore_BringAllSurvivorsToMadnessTier3 = 167,
	EDBDScoreTypes__DBDSlasherScore_BringSurvivorUpOneMadnessTier = 168,
	EDBDScoreTypes__DBDSlasherScore_HitSurvivorAfterElectroShock = 169,
	EDBDScoreTypes__DBDSlasherScore_PickupCamper = 170,
	EDBDScoreTypes__DBDSlasherScore_Blink = 171,
	EDBDScoreTypes__DBDSlasherScore_TeleportToPhantomTrap = 172,
	EDBDScoreTypes__DBDSlasherScore_HatchetThrow = 173,
	EDBDScoreTypes__DBDSlasherScore_HatchetHit = 174,
	EDBDScoreTypes__DBDSlasherScore_HatchetSkillShotHit = 175,
	EDBDScoreTypes__DBDSlasherScore_HatchetFarHit = 176,
	EDBDScoreTypes__DBDCamperScore_QuickVault = 177,
	EDBDScoreTypes__DBDCamperScore_QuickCloset = 178,
	EDBDScoreTypes__DBDCamperScore_StartGeneratorRepair = 179,
	EDBDScoreTypes__DBDCamperScore_StartCleansingTotem = 180,
	EDBDScoreTypes__DBDCamperScore_FirstRepairSkillCheck = 181,
	EDBDScoreTypes__DBDSlasherScore_CamperDisconnectedBeforeMatchStart = 182,
	EDBDScoreTypes__DBDSlasherScore_CamperDisconnectedDuringMatch = 183,
	EDBDScoreTypes__DBDCamperScore_NearFriendInNeed_GeneratorsComplete = 184,
	EDBDScoreTypes__DBDCamperScore_HealPercent_GeneratorsComplete = 185,
	EDBDScoreTypes__DBDCamperScore_HealFromDying_GeneratorsComplete = 186,
	EDBDScoreTypes__DBDCamperScore_SaveFromHook_GeneratorsComplete = 187,
	EDBDScoreTypes__DBDCamperScore_SaveFromBearTrap_GeneratorsComplete = 188,
	EDBDScoreTypes__DBDCamperScore_SnapOutOfIt = 189,
	EDBDScoreTypes__DBDSlasherScore_HookInBasement = 190,
	EDBDScoreTypes__DBDSlasherScore_LFChainsawHit = 191,
	EDBDScoreTypes__DBDCamperScore_PalletDrop = 192,
	EDBDScoreTypes__DBDCamperScore_Vault = 193,
	EDBDScoreTypes__DBDSlasherScore_StartChaseWithChainsawAttack = 194,
	EDBDScoreTypes__DBDSlasherScore_MissedAttackInChase = 195,
	EDBDScoreTypes__DBDCamperScore_DodgeAndVault = 196,
	EDBDScoreTypes__DBDCamperScore_BeginQuickVault = 197,
	EDBDScoreTypes__DBDSlasherScore_StartChainsawAttack = 198,
	EDBDScoreTypes__DBDCamperScore_WakeUpBySkillCheck = 199,
	EDBDScoreTypes__DBDCamperScore_FallAsleep = 200,
	EDBDScoreTypes__DBDCamperScore_WakeUpSelf = 201,
	EDBDScoreTypes__DBDCamperScore_WakeUpOther = 202,
	EDBDScoreTypes__DBDSlasherScore_RecentlyAsleepAttack = 203,
	EDBDScoreTypes__DBDSlasherScore_SurvivorPartyOnBasementHooks = 204,
	EDBDScoreTypes__DBDCamperScore_LootBasementChest = 205,
	EDBDScoreTypes__DBDPlayerScore_OpenMysteryBox = 206,
	EDBDScoreTypes__DBDGameEvent_SurvivorDowned = 207,
	EDBDScoreTypes__DBDGameEvent_SurvivorDied = 208,
	EDBDScoreTypes__DBDGameEvent_KillerCloak = 209,
	EDBDScoreTypes__DBDSlasherScore_SetReverseBearTrap = 210,
	EDBDScoreTypes__DBDSlasherScore_AbductionDash = 211,
	EDBDScoreTypes__DBDSlasherScore_DashHitSuccess = 212,
	EDBDScoreTypes__DBDSlasherScore_KillWithReverseBearTrap = 213,
	EDBDScoreTypes__DBDCamperScore_SearchRBTKey = 214,
	EDBDScoreTypes__DBDCamperScore_EscapeRBT = 215,
	EDBDScoreTypes__DBDGameEvent_ReplacedGoodSkillCheckAsGreat = 216,
	EDBDScoreTypes__DBDCamperScore_RemoveReverseBearTrapSkillCheckSuccess = 217,
	EDBDScoreTypes__DBDCamperScore_RemoveReverseBearTrapSkillCheckBonus = 218,
	EDBDScoreTypes__DBDSlasherScore_DamageGeneratorWhileHooked = 219,
	EDBDScoreTypes__DBDGameEvent_SurvivorDamaged = 220,
	EDBDScoreTypes__DBDGameEvent_SurvivorHealed = 221,
	EDBDScoreTypes__DBDGameEvent_Interruption = 222,
	EDBDScoreTypes__DBDGameEvent_SurvivorFailedHealSkillcheck = 223,
	EDBDScoreTypes__DBDGameEvent_HookedSurvivorSacrificeBegin = 224,
	EDBDScoreTypes__DBDGameEvent_AcquireEventKillerCoin = 225,
	EDBDScoreTypes__DBDGameEvent_AcquireEventSurvivorCoin = 226,
	EDBDScoreTypes__DBDCamperScore_EventGeneratorFixed = 227,
	EDBDScoreTypes__DBDSlasherScore_HookedOnEventHook = 228,
	EDBDScoreTypes__DBDGameEvent_GeneratorProgress = 229,
	EDBDScoreTypes__DBDSlasherScore_DownSmokedCamper = 230,
	EDBDScoreTypes__DBDSlasherScore_HitSmokedCamper = 231,
	EDBDScoreTypes__DBDSlasherScore_SurvivorEnterGasCloud = 232,
	EDBDScoreTypes__DBDSlasherScore_BombDirectHit = 233,
	EDBDScoreTypes__DBDSlasherScore_ThrowBomb = 234,
	EDBDScoreTypes__DBDGameEvent_CoopAction = 235,
	EDBDScoreTypes__DBDScore_Count = 236,
	EDBDScoreTypes__EDBDScoreTypes_MAX = 237
};


// Enum DeadByDaylight.EDBDCameraSocketID
enum class EDBDCameraSocketID : uint8_t
{
	EDBDCameraSocketID__VE_None    = 0,
	EDBDCameraSocketID__VE_Default = 1,
	EDBDCameraSocketID__VE_Killcam = 2,
	EDBDCameraSocketID__VE_Reaction = 3,
	EDBDCameraSocketID__VE_Struggle = 4,
	EDBDCameraSocketID__VE_Sacrifice = 5,
	EDBDCameraSocketID__VE_MAX     = 6
};


// Enum DeadByDaylight.EAttackType
enum class EAttackType : uint8_t
{
	EAttackType__VE_None           = 0,
	EAttackType__VE_Slash          = 1,
	EAttackType__VE_Pounce         = 2,
	EAttackType__VE_Chainsaw       = 3,
	EAttackType__VE_Blink          = 4,
	EAttackType__VE_Lunge          = 5,
	EAttackType__VE_LFChainsaw     = 6,
	EAttackType__VE_Ambush         = 7,
	EAttackType__VE_MAX            = 8
};


// Enum DeadByDaylight.ESkillCheckCustomType
enum class ESkillCheckCustomType : uint8_t
{
	ESkillCheckCustomType__VE_None = 0,
	ESkillCheckCustomType__VE_OnPickedUp = 1,
	ESkillCheckCustomType__VE_OnAttacked = 2,
	ESkillCheckCustomType__VE_DecisiveStrikeWhileWiggling = 3,
	ESkillCheckCustomType__VE_GeneratorOvercharge1 = 4,
	ESkillCheckCustomType__VE_GeneratorOvercharge2 = 5,
	ESkillCheckCustomType__VE_GeneratorOvercharge3 = 6,
	ESkillCheckCustomType__VE_Insane = 7,
	ESkillCheckCustomType__VE_BrandNewPart = 8,
	ESkillCheckCustomType__VE_MAX  = 9
};


// Enum DeadByDaylight.EDBDScoreCategory
enum class EDBDScoreCategory : uint8_t
{
	EDBDScoreCategory__DBD_CamperScoreCat_Objectives = 0,
	EDBDScoreCategory__DBD_CamperScoreCat_Survival = 1,
	EDBDScoreCategory__DBD_CamperScoreCat_Altruism = 2,
	EDBDScoreCategory__DBD_CamperScoreCat_Boldness = 3,
	EDBDScoreCategory__DBD_SlasherScoreCat_Brutality = 4,
	EDBDScoreCategory__DBD_SlasherScoreCat_Deviousness = 5,
	EDBDScoreCategory__DBD_SlasherScoreCat_Hunter = 6,
	EDBDScoreCategory__DBD_SlasherScoreCat_Sacrifice = 7,
	EDBDScoreCategory__DBD_CamperScoreCat_Untracked = 8,
	EDBDScoreCategory__DBD_CamperScoreCat_Streak = 9,
	EDBDScoreCategory__DBD_ScoreCat_SpecialEvents = 10,
	EDBDScoreCategory__DBD_MAX     = 11
};


// Enum DeadByDaylight.ELoginType
enum class ELoginType : uint8_t
{
	ELoginType__Reservation        = 0,
	ELoginType__Join               = 1,
	ELoginType__None               = 2,
	ELoginType__ELoginType_MAX     = 3
};


// Enum DeadByDaylight.EGameType
enum class EGameType : uint8_t
{
	EGameType__Online              = 0,
	EGameType__PartyMode           = 1,
	EGameType__SurvivorGroup       = 2,
	EGameType__None                = 3,
	EGameType__EGameType_MAX       = 4
};


// Enum DeadByDaylight.EDBDAnalyticsGameMode
enum class EDBDAnalyticsGameMode : uint8_t
{
	EDBDAnalyticsGameMode__AnalyticsServer = 0,
	EDBDAnalyticsGameMode__AnalyticsClient = 1,
	EDBDAnalyticsGameMode__AnalyticsLoading = 2,
	EDBDAnalyticsGameMode__AnalyticsLobby = 3,
	EDBDAnalyticsGameMode__AnalyticsMenu = 4,
	EDBDAnalyticsGameMode__AnalyticsPostGame = 5,
	EDBDAnalyticsGameMode__AnalyticsPerfTests = 6,
	EDBDAnalyticsGameMode__AnalyticsSplashScreen = 7,
	EDBDAnalyticsGameMode__EDBDAnalyticsGameMode_MAX = 8
};


// Enum DeadByDaylight.EInventoryItemType
enum class EInventoryItemType : uint8_t
{
	EInventoryItemType__None       = 0,
	EInventoryItemType__Item       = 1,
	EInventoryItemType__ItemAddOn  = 2,
	EInventoryItemType__CamperPerk = 3,
	EInventoryItemType__Power      = 4,
	EInventoryItemType__PowerAddOn = 5,
	EInventoryItemType__SlasherPerk = 6,
	EInventoryItemType__Favor      = 7,
	EInventoryItemType__Customization = 8,
	EInventoryItemType__Count      = 9,
	EInventoryItemType__EInventoryItemType_MAX = 10
};


// Enum DeadByDaylight.EItemRarity
enum class EItemRarity : uint8_t
{
	EItemRarity__Common            = 0,
	EItemRarity__Uncommon          = 1,
	EItemRarity__Rare              = 2,
	EItemRarity__VeryRare          = 3,
	EItemRarity__UltraRare         = 4,
	EItemRarity__Artifact          = 5,
	EItemRarity__Spectral          = 6,
	EItemRarity__Teachable         = 7,
	EItemRarity__Count             = 8,
	EItemRarity__None              = 9,
	EItemRarity__EItemRarity_MAX   = 10
};


// Enum DeadByDaylight.ECharacterDifficulty
enum class ECharacterDifficulty : uint8_t
{
	ECharacterDifficulty__VE_Easy  = 0,
	ECharacterDifficulty__VE_Intermediate = 1,
	ECharacterDifficulty__VE_Hard  = 2,
	ECharacterDifficulty__VE_MAX   = 3
};


// Enum DeadByDaylight.EGender
enum class EGender : uint8_t
{
	EGender__VE_Male               = 0,
	EGender__VE_Female             = 1,
	EGender__VE_Undefined          = 2,
	EGender__VE_MAX                = 3
};


// Enum DeadByDaylight.EAttackSubstate
enum class EAttackSubstate : uint8_t
{
	EAttackSubstate__VE_None       = 0,
	EAttackSubstate__VE_Open       = 1,
	EAttackSubstate__VE_Hitting    = 2,
	EAttackSubstate__VE_HitSucceed = 3,
	EAttackSubstate__VE_HitMiss    = 4,
	EAttackSubstate__VE_HitObstructed = 5,
	EAttackSubstate__VE_Done       = 6,
	EAttackSubstate__VE_MAX        = 7
};


// Enum DeadByDaylight.EDetectionZone
enum class EDetectionZone : uint8_t
{
	EDetectionZone__VE_None        = 0,
	EDetectionZone__VE_Slash       = 1,
	EDetectionZone__VE_Pounce      = 2,
	EDetectionZone__VE_Chainsaw    = 3,
	EDetectionZone__VE_Obstructed  = 4,
	EDetectionZone__VE_Interruption = 5,
	EDetectionZone__VE_ChainsawLockExtended = 6,
	EDetectionZone__VE_Damage      = 7,
	EDetectionZone__VE_ChainsawObstruction = 8,
	EDetectionZone__VE_Blink       = 9,
	EDetectionZone__VE_ChainsawDamageExtended = 10,
	EDetectionZone__VE_Stalker     = 11,
	EDetectionZone__VE_Lunge       = 12,
	EDetectionZone__VE_Max         = 13
};


// Enum DeadByDaylight.EAttackSuccess
enum class EAttackSuccess : uint8_t
{
	EAttackSuccess__VE_None        = 0,
	EAttackSuccess__VE_Success     = 1,
	EAttackSuccess__VE_Failure     = 2,
	EAttackSuccess__VE_Obstructed  = 3,
	EAttackSuccess__VE_MAX         = 4
};


// Enum DeadByDaylight.EBlindType
enum class EBlindType : uint8_t
{
	EBlindType__VE_None            = 0,
	EBlindType__VE_Flashlight      = 1,
	EBlindType__VE_SacrificeSuspended = 2,
	EBlindType__VE_Firecracker     = 3,
	EBlindType__VE_MAX             = 4
};


// Enum DeadByDaylight.EStunType
enum class EStunType : uint8_t
{
	EStunType__VE_None             = 0,
	EStunType__VE_Bookshelf        = 1,
	EStunType__VE_BearTrap         = 2,
	EStunType__VE_Flashlight       = 3,
	EStunType__VE_WiggleFree       = 4,
	EStunType__VE_EvilWithin       = 5,
	EStunType__VE_Kicked           = 6,
	EStunType__VE_MAX              = 7
};


// Enum DeadByDaylight.EInteractionAnimation
enum class EInteractionAnimation : uint8_t
{
	EInteractionAnimation__VE_None = 0,
	EInteractionAnimation__VE_Generator = 1,
	EInteractionAnimation__VE_PullDownLeft = 2,
	EInteractionAnimation__VE_PullDownRight = 3,
	EInteractionAnimation__VE_Hiding = 4,
	EInteractionAnimation__VE_SearchCloset = 5,
	EInteractionAnimation__VE_HealingOther = 6,
	EInteractionAnimation__VE_OpenEscape = 7,
	EInteractionAnimation__VE_StruggleFree = 8,
	EInteractionAnimation__VE_HealOther = 9,
	EInteractionAnimation__VE_HealSelf = 10,
	EInteractionAnimation__VE_PickedUp = 11,
	EInteractionAnimation__VE_Unused01 = 12,
	EInteractionAnimation__VE_Dropped = 13,
	EInteractionAnimation__VE_Unused02 = 14,
	EInteractionAnimation__VE_BeingHooked = 15,
	EInteractionAnimation__VE_Sabotage = 16,
	EInteractionAnimation__VE_ChargeBlink = 17,
	EInteractionAnimation__VE_ThrowFirecracker = 18,
	EInteractionAnimation__VE_WakeUpOther = 19,
	EInteractionAnimation__VE_RemoveReverseBearTrap = 20,
	EInteractionAnimation__VE_DeadHard = 21,
	EInteractionAnimation__VE_MAX  = 22
};


// Enum DeadByDaylight.ECamperState
enum class ECamperState : uint8_t
{
	ECamperState__VE_None          = 0,
	ECamperState__VE_Navigate      = 1,
	ECamperState__VE_Interact      = 2,
	ECamperState__VE_MAX           = 3
};


// Enum DeadByDaylight.EAnimNotifyType
enum class EAnimNotifyType : uint8_t
{
	EAnimNotifyType__VE_None       = 0,
	EAnimNotifyType__VE_Pickup     = 1,
	EAnimNotifyType__VE_Release    = 2,
	EAnimNotifyType__VE_MAX        = 3
};


// Enum DeadByDaylight.EKillerMoodInfluence
enum class EKillerMoodInfluence : uint8_t
{
	EKillerMoodInfluence__VE_None  = 0,
	EKillerMoodInfluence__VE_Chuckles = 1,
	EKillerMoodInfluence__VE_Banshee = 2,
	EKillerMoodInfluence__VE_Hillbilly = 3,
	EKillerMoodInfluence__VE_Nurse = 4,
	EKillerMoodInfluence__VE_Shape = 5,
	EKillerMoodInfluence__VE_MAX   = 6
};


// Enum DeadByDaylight.EKillerAbilities
enum class EKillerAbilities : uint8_t
{
	EKillerAbilities__VE_None      = 0,
	EKillerAbilities__VE_SpawnTraps = 1,
	EKillerAbilities__VE_Cloak     = 2,
	EKillerAbilities__VE_Kill01    = 3,
	EKillerAbilities__VE_Kill02    = 4,
	EKillerAbilities__VE_Chainsaw  = 5,
	EKillerAbilities__VE_Kill03    = 6,
	EKillerAbilities__VE_Blink     = 7,
	EKillerAbilities__VE_PhantomTrap = 8,
	EKillerAbilities__VE_Kill04    = 9,
	EKillerAbilities__VE_Stalker   = 10,
	EKillerAbilities__VE_Kill05    = 11,
	EKillerAbilities__VE_Kill06    = 12,
	EKillerAbilities__VE_Killer07Ability = 13,
	EKillerAbilities__VE_Kill07    = 14,
	EKillerAbilities__VE_Killer08Ability = 15,
	EKillerAbilities__VE_Kill08    = 16,
	EKillerAbilities__VE_LFChainsaw = 17,
	EKillerAbilities__VE_Kill09    = 18,
	EKillerAbilities__VE_InduceDreams = 19,
	EKillerAbilities__VE_KillNightmare = 20,
	EKillerAbilities__VE_ReverseBearTrap = 21,
	EKillerAbilities__VE_KillPig   = 22,
	EKillerAbilities__VE_GasBomb   = 23,
	EKillerAbilities__VE_KillClown = 24,
	EKillerAbilities__VE_MAX       = 25
};


// Enum DeadByDaylight.EGameState
enum class EGameState : uint8_t
{
	EGameState__VE_Active          = 0,
	EGameState__VE_Dead            = 1,
	EGameState__VE_Escaped         = 2,
	EGameState__VE_EscapedInjured  = 3,
	EGameState__VE_Sacrificed      = 4,
	EGameState__VE_None            = 5,
	EGameState__VE_Disconnected    = 6,
	EGameState__VE_ManuallyLeftMatch = 7,
	EGameState__VE_MAX             = 8
};


// Enum DeadByDaylight.EPlayerRole
enum class EPlayerRole : uint8_t
{
	EPlayerRole__VE_None           = 0,
	EPlayerRole__VE_Slasher        = 1,
	EPlayerRole__VE_Camper         = 2,
	EPlayerRole__VE_Observer       = 3,
	EPlayerRole__VE_MAX            = 4
};


// Enum DeadByDaylight.EItemHandPosition
enum class EItemHandPosition : uint8_t
{
	EItemHandPosition__None        = 0,
	EItemHandPosition__HandleItem  = 1,
	EItemHandPosition__AimItem     = 2,
	EItemHandPosition__SmallItem   = 3,
	EItemHandPosition__FirecrackerItem = 4,
	EItemHandPosition__EItemHandPosition_MAX = 5
};


// Enum DeadByDaylight.ECurrencyType
enum class ECurrencyType : uint8_t
{
	ECurrencyType__None            = 0,
	ECurrencyType__BloodPoints     = 1,
	ECurrencyType__FearTokens      = 2,
	ECurrencyType__Dust            = 3,
	ECurrencyType__ECurrencyType_MAX = 4
};


// Enum DeadByDaylight.ELegalTermsStatus
enum class ELegalTermsStatus : uint8_t
{
	ELegalTermsStatus__None        = 0,
	ELegalTermsStatus__Accepted    = 1,
	ELegalTermsStatus__Declined    = 2,
	ELegalTermsStatus__ELegalTermsStatus_MAX = 3
};


// Enum DeadByDaylight.ETestBuildType
enum class ETestBuildType : uint8_t
{
	ETestBuildType__None           = 0,
	ETestBuildType__PublicTestBuild = 1,
	ETestBuildType__PaxBuild       = 2,
	ETestBuildType__ConsolePreAlphaBuild = 3,
	ETestBuildType__ETestBuildType_MAX = 4
};


// Enum DeadByDaylight.ELoadoutSlot
enum class ELoadoutSlot : uint8_t
{
	ELoadoutSlot__SKIN             = 0,
	ELoadoutSlot__ITEM_POWER       = 1,
	ELoadoutSlot__ADD_ON           = 2,
	ELoadoutSlot__ADD_ON01         = 3,
	ELoadoutSlot__PERK             = 4,
	ELoadoutSlot__PERK01           = 5,
	ELoadoutSlot__PERK02           = 6,
	ELoadoutSlot__PERK03           = 7,
	ELoadoutSlot__FAVOR            = 8,
	ELoadoutSlot__ELoadoutSlot_MAX = 9
};


// Enum DeadByDaylight.EPlatform
enum class EPlatform : uint8_t
{
	EPlatform__STEAM               = 0,
	EPlatform__XBOX                = 1,
	EPlatform__PSN                 = 2,
	EPlatform__EPlatform_MAX       = 3
};


// Enum DeadByDaylight.EControlMode
enum class EControlMode : uint8_t
{
	EControlMode__MOUSE_KB         = 0,
	EControlMode__XBOX             = 1,
	EControlMode__PS               = 2,
	EControlMode__VITA             = 3,
	EControlMode__UNDEFINED        = 4,
	EControlMode__EControlMode_MAX = 5
};


// Enum DeadByDaylight.ENewContentType
enum class ENewContentType : uint8_t
{
	ENewContentType__COMING_SOON   = 0,
	ENewContentType__NEW_CONTENT   = 1,
	ENewContentType__PATCH_NOTES   = 2,
	ENewContentType__DEV_MESSAGES  = 3,
	ENewContentType__EVENTS        = 4,
	ENewContentType__ENewContentType_MAX = 5
};


// Enum DeadByDaylight.EOverlayButtonOptions
enum class EOverlayButtonOptions : uint8_t
{
	EOverlayButtonOptions__HIDDEN  = 0,
	EOverlayButtonOptions__DISABLED = 1,
	EOverlayButtonOptions__ENABLED = 2,
	EOverlayButtonOptions__EOverlayButtonOptions_MAX = 3
};


// Enum DeadByDaylight.EConnectionMessage
enum class EConnectionMessage : uint8_t
{
	EConnectionMessage__NONE       = 0,
	EConnectionMessage__JOINED_LOBBY = 1,
	EConnectionMessage__CREATED_LOBBY = 2,
	EConnectionMessage__FAILED_TO_JOIN = 3,
	EConnectionMessage__NO_LOBBIES_FOUND = 4,
	EConnectionMessage__HOST_LEFT  = 5,
	EConnectionMessage__SEARCHING_FOR_GAMES = 6,
	EConnectionMessage__CANCELED_MATCHMAKING = 7,
	EConnectionMessage__EConnectionMessage_MAX = 8
};


// Enum DeadByDaylight.EHudComponent
enum class EHudComponent : uint8_t
{
	EHudComponent__ACTION_PROMPT   = 0,
	EHudComponent__ACTION_PROGRESS_BAR = 1,
	EHudComponent__GENERATOR_ICON  = 2,
	EHudComponent__HATCH_ICON      = 3,
	EHudComponent__LOCAL_PLAYER_STATUS = 4,
	EHudComponent__OTHER_PLAYER_STATUSES = 5,
	EHudComponent__EHudComponent_MAX = 6
};


// Enum DeadByDaylight.EUIControllerType
enum class EUIControllerType : uint8_t
{
	EUIControllerType__KeyboardMouse = 0,
	EUIControllerType__GamePad     = 1,
	EUIControllerType__EUIControllerType_MAX = 2
};


// Enum DeadByDaylight.EReverseBearTrapUIState
enum class EReverseBearTrapUIState : uint8_t
{
	EReverseBearTrapUIState__Off   = 0,
	EReverseBearTrapUIState__Stage1 = 1,
	EReverseBearTrapUIState__Stage2 = 2,
	EReverseBearTrapUIState__EReverseBearTrapUIState_MAX = 3
};


// Enum DeadByDaylight.EHudOffscreenIndicatorType
enum class EHudOffscreenIndicatorType : uint8_t
{
	EHudOffscreenIndicatorType__NONE = 0,
	EHudOffscreenIndicatorType__WHITE = 1,
	EHudOffscreenIndicatorType__RED = 2,
	EHudOffscreenIndicatorType__EHudOffscreenIndicatorType_MAX = 3
};


// Enum DeadByDaylight.EHudIndicatorIconType
enum class EHudIndicatorIconType : uint8_t
{
	EHudIndicatorIconType__NONE    = 0,
	EHudIndicatorIconType__LOUD_SOUND = 1,
	EHudIndicatorIconType__RUNNING_FOOTSTEPS = 2,
	EHudIndicatorIconType__EHudIndicatorIconType_MAX = 3
};


// Enum DeadByDaylight.EPlayerStatus
enum class EPlayerStatus : uint8_t
{
	EPlayerStatus__HOOK            = 0,
	EPlayerStatus__TRAP            = 1,
	EPlayerStatus__DEAD            = 2,
	EPlayerStatus__ESCAPED         = 3,
	EPlayerStatus__INJURED         = 4,
	EPlayerStatus__CRAWLING        = 5,
	EPlayerStatus__SACRIFICED      = 6,
	EPlayerStatus__DISCONNECTED    = 7,
	EPlayerStatus__DEFAULT         = 8,
	EPlayerStatus__EPlayerStatus_MAX = 9
};


// Enum DeadByDaylight.EBloodwebNodeGateTypes
enum class EBloodwebNodeGateTypes : uint8_t
{
	EBloodwebNodeGateTypes__RequiredRank = 0,
	EBloodwebNodeGateTypes__RequiredItem = 1,
	EBloodwebNodeGateTypes__Count  = 2,
	EBloodwebNodeGateTypes__EBloodwebNodeGateTypes_MAX = 3
};


// Enum DeadByDaylight.EBloodwebNodeContentType
enum class EBloodwebNodeContentType : uint8_t
{
	EBloodwebNodeContentType__Empty = 0,
	EBloodwebNodeContentType__Perks = 1,
	EBloodwebNodeContentType__PerkBuffs_Do_Not_Use_Deprecated = 2,
	EBloodwebNodeContentType__Offerings = 3,
	EBloodwebNodeContentType__Items = 4,
	EBloodwebNodeContentType__AddOn = 5,
	EBloodwebNodeContentType__Chests = 6,
	EBloodwebNodeContentType__PerksPacks = 7,
	EBloodwebNodeContentType__Count = 8,
	EBloodwebNodeContentType__EBloodwebNodeContentType_MAX = 9
};


// Enum DeadByDaylight.EBloodwebNodeState
enum class EBloodwebNodeState : uint8_t
{
	EBloodwebNodeState__Inactive   = 0,
	EBloodwebNodeState__Available  = 1,
	EBloodwebNodeState__Locked_Do_Not_Use_Deprecated = 2,
	EBloodwebNodeState__Collected  = 3,
	EBloodwebNodeState__Consumed   = 4,
	EBloodwebNodeState__EBloodwebNodeState_MAX = 5
};


// Enum DeadByDaylight.EBloodwebRing
enum class EBloodwebRing : uint8_t
{
	EBloodwebRing__CenterRing      = 0,
	EBloodwebRing__InnerRing       = 1,
	EBloodwebRing__MiddleRing      = 2,
	EBloodwebRing__OuterRing       = 3,
	EBloodwebRing__EntityRing      = 4,
	EBloodwebRing__RingCount       = 5,
	EBloodwebRing__EBloodwebRing_MAX = 6
};


// Enum DeadByDaylight.EStatusEffectType
enum class EStatusEffectType : uint8_t
{
	EStatusEffectType__None        = 0,
	EStatusEffectType__Buff        = 1,
	EStatusEffectType__Debuff      = 2,
	EStatusEffectType__EStatusEffectType_MAX = 3
};


// Enum DeadByDaylight.EGameplayModifierSource
enum class EGameplayModifierSource : uint8_t
{
	EGameplayModifierSource__VE_Perk = 0,
	EGameplayModifierSource__VE_StatusEffect = 1,
	EGameplayModifierSource__VE_Item = 2,
	EGameplayModifierSource__VE_ItemAddon = 3,
	EGameplayModifierSource__VE_All = 4,
	EGameplayModifierSource__VE_PerkAndStatusEffect = 5,
	EGameplayModifierSource__VE_PerkStatusAndAddon = 6,
	EGameplayModifierSource__VE_MAX = 7
};


// Enum DeadByDaylight.EGameplayModifierFlag
enum class EGameplayModifierFlag : uint8_t
{
	EGameplayModifierFlag__VE_RevealSurvivors = 0,
	EGameplayModifierFlag__VE_RevealKiller = 1,
	EGameplayModifierFlag__VE_RevealTraps = 2,
	EGameplayModifierFlag__VE_RevealObjectives = 3,
	EGameplayModifierFlag__VE_RevealASurvivor = 4,
	EGameplayModifierFlag__VE_AttackToDyingState = 5,
	EGameplayModifierFlag__VE_RevealChests = 6,
	EGameplayModifierFlag__VE_RevealToKiller = 7,
	EGameplayModifierFlag__VE_BearTrapsInflictDying = 8,
	EGameplayModifierFlag__VE_BearTrapsInflictHeavyBleeding = 9,
	EGameplayModifierFlag__VE_BearTrapsInflictHealingPenalty = 10,
	EGameplayModifierFlag__VE_InvisibilityBellGrantsStealth = 11,
	EGameplayModifierFlag__VE_AllowSabotage = 12,
	EGameplayModifierFlag__VE_AllowOpenHatch = 13,
	EGameplayModifierFlag__VE_AllowSlasherStealth = 14,
	EGameplayModifierFlag__VE_AllowCamperSprint = 15,
	EGameplayModifierFlag__VE_AllowCamperSprintOnLanding = 16,
	EGameplayModifierFlag__VE_TriggerSprintOnDecloak = 17,
	EGameplayModifierFlag__VE_AllowSecondaryAction = 18,
	EGameplayModifierFlag__VE_AllowSelfHealNoMedkit = 19,
	EGameplayModifierFlag__VE_DoNotLoseItemOnUse = 20,
	EGameplayModifierFlag__VE_DoNotLoseItemOnDeath = 21,
	EGameplayModifierFlag__VE_ExtendChainsawRange = 22,
	EGameplayModifierFlag__VE_ApplyRustedChainsDebuffOnChainsawAttack = 23,
	EGameplayModifierFlag__VE_ApplyGrislyChainsDebuffOnChainsawAttack = 24,
	EGameplayModifierFlag__VE_ApplyBegrimedChainsDebuffOnChainsawAttack = 25,
	EGameplayModifierFlag__VE_ChainsawHalfDamage = 26,
	EGameplayModifierFlag__VE_ShareMapToSurvivor = 27,
	EGameplayModifierFlag__VE_AddBlackLock = 28,
	EGameplayModifierFlag__VE_AddKillerObject = 29,
	EGameplayModifierFlag__VE_AddExitGate = 30,
	EGameplayModifierFlag__VE_IntensifyBloodColourMinor = 31,
	EGameplayModifierFlag__VE_IntensifyBloodColourMedium = 32,
	EGameplayModifierFlag__VE_IntensifyBloodColourMajor = 33,
	EGameplayModifierFlag__VE_ShowBlinkIndicator = 34,
	EGameplayModifierFlag__VE_AutomaticBlinkAttack = 35,
	EGameplayModifierFlag__VE_ShowHoningStoneWarning = 36,
	EGameplayModifierFlag__VE_ShowDiamondStoneWarning = 37,
	EGameplayModifierFlag__VE_SkillCheckOnPickup = 38,
	EGameplayModifierFlag__VE_AllowStandingKill = 39,
	EGameplayModifierFlag__VE_DisableStalking = 40,
	EGameplayModifierFlag__VE_EnableObsession = 41,
	EGameplayModifierFlag__VE_DisableTier3StalkerDecay = 42,
	EGameplayModifierFlag__VE_DetectionImmunity = 43,
	EGameplayModifierFlag__VE_DisruptAuraReading = 44,
	EGameplayModifierFlag__VE_DisableTeleport = 45,
	EGameplayModifierFlag__VE_EnablePhantomCollision = 46,
	EGameplayModifierFlag__VE_AllowTeleportAnywhere = 47,
	EGameplayModifierFlag__VE_SlowdownInTrapZone = 48,
	EGameplayModifierFlag__VE_SilentTrapTrigger = 49,
	EGameplayModifierFlag__VE_DelayedDamage = 50,
	EGameplayModifierFlag__VE_NotifyOnHexCleanseStart = 51,
	EGameplayModifierFlag__VE_TotallyInsane = 52,
	EGameplayModifierFlag__VE_ShowShockTherapyArea = 53,
	EGameplayModifierFlag__VE_IsExhausted = 54,
	EGameplayModifierFlag__VE_GeneratorOvercharge1 = 55,
	EGameplayModifierFlag__VE_GeneratorOvercharge2 = 56,
	EGameplayModifierFlag__VE_GeneratorOvercharge3 = 57,
	EGameplayModifierFlag__VE_ShowFakeKillerStain = 58,
	EGameplayModifierFlag__VE_RemoveShockTherapyCone = 59,
	EGameplayModifierFlag__VE_AddShockTherapyLine = 60,
	EGameplayModifierFlag__VE_AddShockTherapyCircle = 61,
	EGameplayModifierFlag__VE_ShockTherapyGrantsRandomAfflictions = 62,
	EGameplayModifierFlag__VE_ShowIncomingScreamWarning = 63,
	EGameplayModifierFlag__VE_OutlineSharedHallucination = 64,
	EGameplayModifierFlag__VE_AllowInstallBrandNewPart = 65,
	EGameplayModifierFlag__VE_SuppressTerrorRadius = 66,
	EGameplayModifierFlag__VE_HideKillerStain = 67,
	EGameplayModifierFlag__VE_SkillCheckWarningOff = 68,
	EGameplayModifierFlag__VE_HatchetSkillShotDoubleDamage = 69,
	EGameplayModifierFlag__VE_HideBloodTrail = 70,
	EGameplayModifierFlag__VE_CannotHealToHealthy = 71,
	EGameplayModifierFlag__VE_ImmuneToDamageAndTraps = 72,
	EGameplayModifierFlag__VE_Dash = 73,
	EGameplayModifierFlag__VE_CanPerformDash = 74,
	EGameplayModifierFlag__VE_BlockAllInteractions = 75,
	EGameplayModifierFlag__VE_ShowIllusionaryPallets = 76,
	EGameplayModifierFlag__VE_SuppressFootsteps = 77,
	EGameplayModifierFlag__VE_InBetweenWorlds = 78,
	EGameplayModifierFlag__VE_CancelRevealSelf = 79,
	EGameplayModifierFlag__VE_UnhideKiller = 80,
	EGameplayModifierFlag__VE_ImmuneToUnhide = 81,
	EGameplayModifierFlag__VE_RevealAllSurvivorsDuringInBetweenWorlds = 82,
	EGameplayModifierFlag__VE_MAX  = 83
};


// Enum DeadByDaylight.EGameplayModifierType
enum class EGameplayModifierType : uint8_t
{
	EGameplayModifierType__VE_PerkEffectDuration = 0,
	EGameplayModifierType__VE_StatusEffectLifetime = 1,
	EGameplayModifierType__VE_StatusEffectOriginatorRange = 2,
	EGameplayModifierType__VE_PerkEffectRange = 3,
	EGameplayModifierType__VE_ActionSpeed = 4,
	EGameplayModifierType__VE_ModifySkillCheckProbability = 5,
	EGameplayModifierType__VE_ModifySkillCheckDifficulty = 6,
	EGameplayModifierType__VE_ModifySkillCheckFailurePenalty = 7,
	EGameplayModifierType__VE_ModifySkillCheckBonusZoneSize = 8,
	EGameplayModifierType__VE_ModifySkillCheckWarningTime = 9,
	EGameplayModifierType__VE_RevealKillerInRange = 10,
	EGameplayModifierType__VE_RevealTrapsInRange = 11,
	EGameplayModifierType__VE_RevealChestsInRange = 12,
	EGameplayModifierType__VE_RevealInjuredSurvivorsInRange = 13,
	EGameplayModifierType__VE_RevealDyingSurvivorsInRange = 14,
	EGameplayModifierType__VE_RevealAllSurvivorsInRange = 15,
	EGameplayModifierType__VE_RevealToKillerInRange = 16,
	EGameplayModifierType__VE_ModifyRevealSurvivorsInRange = 17,
	EGameplayModifierType__VE_ModifyRevealIf1Dead = 18,
	EGameplayModifierType__VE_ModifyRevealIf2Dead = 19,
	EGameplayModifierType__VE_ModifyRevealIf3Dead = 20,
	EGameplayModifierType__VE_TimedRevealToKiller = 21,
	EGameplayModifierType__VE_NotifyKillerOfSurvivorsInRange = 22,
	EGameplayModifierType__VE_IncreaseAllMovementSpeed = 23,
	EGameplayModifierType__VE_ModifyAttackHitCooldown = 24,
	EGameplayModifierType__VE_ModifyAttackMissCooldown = 25,
	EGameplayModifierType__VE_ModifySkillCheckProbabilityInTerrorRadius = 26,
	EGameplayModifierType__VE_ModifySkillCheckDifficultyInTerrorRadius = 27,
	EGameplayModifierType__VE_IncreaseTerrorRadiusAdditive = 28,
	EGameplayModifierType__VE_IncreaseTerrorRadiusMultiplicative = 29,
	EGameplayModifierType__VE_ModifyEmittersTerrorRadiusAdditive = 30,
	EGameplayModifierType__VE_IncreaseFootstepIndicatorDurationAdditive = 31,
	EGameplayModifierType__VE_IncreaseFootstepIndicatorDurationMultiplicative = 32,
	EGameplayModifierType__VE_IncreaseBrutalityPoints = 33,
	EGameplayModifierType__VE_IncreaseDeviousnessPoints = 34,
	EGameplayModifierType__VE_IncreaseHunterPoints = 35,
	EGameplayModifierType__VE_IncreaseSacrificePoints = 36,
	EGameplayModifierType__VE_IncreaseObjectivePoints = 37,
	EGameplayModifierType__VE_IncreaseSurvivalPoints = 38,
	EGameplayModifierType__VE_IncreaseAltruismPoints = 39,
	EGameplayModifierType__VE_IncreaseBoldnessPoints = 40,
	EGameplayModifierType__VE_IncreaseStreakPoints = 41,
	EGameplayModifierType__VE_IncreaseUntrackedPoints = 42,
	EGameplayModifierType__VE_IncreaseAllPoints = 43,
	EGameplayModifierType__VE_ModifyFOV = 44,
	EGameplayModifierType__VE_ModifyBlindnessDuration = 45,
	EGameplayModifierType__VE_ModifyBlindnessSusceptability = 46,
	EGameplayModifierType__VE_CustomPerkEffectValue1 = 47,
	EGameplayModifierType__VE_CustomPerkEffectValue2 = 48,
	EGameplayModifierType__VE_CustomPerkEffectValue3 = 49,
	EGameplayModifierType__VE_IncreaseItemCharge = 50,
	EGameplayModifierType__VE_ModifyItemMaxCharge = 51,
	EGameplayModifierType__VE_ModifyItemEfficiency = 52,
	EGameplayModifierType__VE_OverrideWalkSpeedFactorWhenCarrying = 53,
	EGameplayModifierType__VE_BranchCracksTriggerNoiseIndicatorInRange = 54,
	EGameplayModifierType__VE_RushSuccessChance = 55,
	EGameplayModifierType__VE_ModifyBeamRange = 56,
	EGameplayModifierType__VE_ModifyBeamWidth = 57,
	EGameplayModifierType__VE_ModifyBeamAccuracy = 58,
	EGameplayModifierType__VE_ModifyBeamBrightness = 59,
	EGameplayModifierType__VE_ModifyBeamBlindingTime = 60,
	EGameplayModifierType__VE_ModifyBeamRevealTime = 61,
	EGameplayModifierType__VE_ModifyCloakingSoundRange = 62,
	EGameplayModifierType__VE_ModifyInvisibilityBellDisappearanceTime = 63,
	EGameplayModifierType__VE_ModifyInvisibilityBellAppearanceTime = 64,
	EGameplayModifierType__VE_ModifyInvisibilityBellSpeedBoost = 65,
	EGameplayModifierType__VE_ModifyEscapeHookProbability = 66,
	EGameplayModifierType__VE_ModifyEscapeTrapProbability = 67,
	EGameplayModifierType__VE_ModifyInvisibilityBurnoutSusceptability = 68,
	EGameplayModifierType__VE_ModifySlasherEnterStealthSpeed = 69,
	EGameplayModifierType__VE_ModifySprintDuration = 70,
	EGameplayModifierType__VE_ModifySprintCooldown = 71,
	EGameplayModifierType__VE_ModifyBasementHookDrainRate = 72,
	EGameplayModifierType__VE_ModifyItemRange = 73,
	EGameplayModifierType__VE_ModifyItemActiveTime = 74,
	EGameplayModifierType__VE_ModifyChainsawChargeYawSpeed = 75,
	EGameplayModifierType__VE_ModifyInjuredVoiceLevel = 76,
	EGameplayModifierType__VE_ModifyFootNoiseChance = 77,
	EGameplayModifierType__VE_ModifyChainsawCooldownSuccess = 78,
	EGameplayModifierType__VE_ModifyChainsawCooldownObstruction = 79,
	EGameplayModifierType__VE_ModifyDisturbCrowChance = 80,
	EGameplayModifierType__VE_ModifyChainsawScoreEvents = 81,
	EGameplayModifierType__VE_ModifyWiggleFreeTimer = 82,
	EGameplayModifierType__VE_ModifyWiggleIntensity = 83,
	EGameplayModifierType__VE_ModifyLoudNoiseRangeFromSelf = 84,
	EGameplayModifierType__VE_ModifyBloodDecalDuration = 85,
	EGameplayModifierType__VE_ModifyAutoExposureBias = 86,
	EGameplayModifierType__VE_ModifyCrowLoudNoiseRangeAdditive = 87,
	EGameplayModifierType__VE_ModifyCrowLoudNoiseProbabilityAdditive = 88,
	EGameplayModifierType__VE_ModifyChainsawSoundRange = 89,
	EGameplayModifierType__VE_ModifyAddonChargeBonus = 90,
	EGameplayModifierType__VE_SpecialTinkererBonus = 91,
	EGameplayModifierType__VE_ModifyBeamInaccuracyAmplitude = 92,
	EGameplayModifierType__VE_ModifyBeamInaccuracyFrequency = 93,
	EGameplayModifierType__VE_IncreaseItemChargeMultiplicative = 94,
	EGameplayModifierType__VE_ModifyItemMaxChargeMultiplicative = 95,
	EGameplayModifierType__VE_ModifyDropStaggerDuration = 96,
	EGameplayModifierType__VE_IncreaseCrouchSpeed = 97,
	EGameplayModifierType__VE_ModifySkillCheckProbabilityAdditive = 98,
	EGameplayModifierType__VE_ModifySkillCheckProbabilityInTerrorRadiusAdditive = 99,
	EGameplayModifierType__VE_ModifyNurseBlinkRangeMultiplicative = 100,
	EGameplayModifierType__VE_ModifyNurseReappearanceTimeMultiplicative = 101,
	EGameplayModifierType__VE_ModifyNurseChainBlinkStateDuration = 102,
	EGameplayModifierType__VE_ModifyNurseCooldownStateDuration = 103,
	EGameplayModifierType__VE_ModifyNurseBlinkEnergyCost = 104,
	EGameplayModifierType__VE_ModifyNurseMaxEnergyMultiplicative = 105,
	EGameplayModifierType__VE_ModifyNurseEnergyRegenerationAdditive = 106,
	EGameplayModifierType__VE_ModifyNurseEnergyRegenerationMultiplicative = 107,
	EGameplayModifierType__VE_ModifyNurseBlinkAccuracy = 108,
	EGameplayModifierType__VE_ActionSpeedMultiplicative = 109,
	EGameplayModifierType__VE_ModifyInjuredBleedingFrequency = 110,
	EGameplayModifierType__VE_ModifyNormalVoiceLevel = 111,
	EGameplayModifierType__VE_ModifyNurseMaximumBlinks = 112,
	EGameplayModifierType__VE_ModifyEscapeHookProbabilityAdditive = 113,
	EGameplayModifierType__VE_ModifyEscapeTrapProbabilityAdditive = 114,
	EGameplayModifierType__VE_BearTrapsInflictDyingChance = 115,
	EGameplayModifierType__VE_TriggerSprintOnDecloak = 116,
	EGameplayModifierType__VE_ModifyMaximumBearTrapCapacity = 117,
	EGameplayModifierType__VE_ModifyInteractionExitTime = 118,
	EGameplayModifierType__VE_ModifyStalkPowerSpeed = 119,
	EGameplayModifierType__VE_ModifyStalkResidualAuraAdditive = 120,
	EGameplayModifierType__VE_ModifyStalkLastTierTimeAdditive = 121,
	EGameplayModifierType__VE_ModifyStalkLastTierRequirementAdditive = 122,
	EGameplayModifierType__VE_ModifyStalkTier0ModeAuraRangeAdditive = 123,
	EGameplayModifierType__VE_ModifyStalkTier1ModeAuraRangeAdditive = 124,
	EGameplayModifierType__VE_SetMaxStalkTier = 125,
	EGameplayModifierType__VE_ModifyStalkBloodPointsMultiplicative = 126,
	EGameplayModifierType__VE_ModifyStalkerKillCost = 127,
	EGameplayModifierType__VE_ModifyObsessionTargetWeight = 128,
	EGameplayModifierType__VE_ModifyAttackLungeDurationAdditive = 129,
	EGameplayModifierType__VE_ModifyAttackLungeDurationMultiplicative = 130,
	EGameplayModifierType__VE_ModifyStalkPointsGainedFromObsession = 131,
	EGameplayModifierType__VE_ModifyDropBySkillCheckStunTime = 132,
	EGameplayModifierType__VE_ModifySkillCheckSuccessReward = 133,
	EGameplayModifierType__VE_ModifySkillCheckBonusSuccessReward = 134,
	EGameplayModifierType__VE_ModifyLuck = 135,
	EGameplayModifierType__VE_ModifyPowerRangeMultiplicative = 136,
	EGameplayModifierType__VE_ModifyChestRarity = 137,
	EGameplayModifierType__VE_ModifyAuraReadingRangeAdditive = 138,
	EGameplayModifierType__VE_ModifyChestItemAddonChance = 139,
	EGameplayModifierType__VE_SetChestItemAddonMaxRarity = 140,
	EGameplayModifierType__VE_TimedDeafenOnTrigger = 141,
	EGameplayModifierType__VE_ModifyDeviousnessPointsOnAttackAdditive = 142,
	EGameplayModifierType__VE_ModifyItemBlindnessEffectDuration = 143,
	EGameplayModifierType__VE_ModifyFirecrackerExplosionDelay = 144,
	EGameplayModifierType__VE_ModifyItemCount = 145,
	EGameplayModifierType__VE_OverrideRecoverStopPercent = 146,
	EGameplayModifierType__VE_ModifyRecoverSpeed = 147,
	EGameplayModifierType__VE_SetFirecrackerBlindDurationMin = 148,
	EGameplayModifierType__VE_SetFirecrackerBlindDurationMax = 149,
	EGameplayModifierType__VE_SetFirecrackerDeafDurationMin = 150,
	EGameplayModifierType__VE_SetFirecrackerDeafDurationMax = 151,
	EGameplayModifierType__VE_SetInjuredBleedoutTime = 152,
	EGameplayModifierType__VE_GrantWiggleSkillCheckAtPercent = 153,
	EGameplayModifierType__VE_ModifyFailedSkillCheckLoudNoiseChance = 154,
	EGameplayModifierType__VE_SetExhaustedCooldown = 155,
	EGameplayModifierType__VE_ModifyStaticFieldMadnessGain = 156,
	EGameplayModifierType__VE_ModifyShockTherapyMadnessGain = 157,
	EGameplayModifierType__VE_InsaneSkillCheckChance = 158,
	EGameplayModifierType__VE_FakeKillerStainChance = 159,
	EGameplayModifierType__VE_FakeKillerStainDuration = 160,
	EGameplayModifierType__VE_OverrideTerrorRadiusPerception = 161,
	EGameplayModifierType__VE_RevealSurvivorAuraOnMadnessTierUpDuration = 162,
	EGameplayModifierType__VE_ModifyShockTherapyZoneScale = 163,
	EGameplayModifierType__VE_SetSkillCheckDelayOnSuccess = 164,
	EGameplayModifierType__VE_ModifyMovementSpeedAdditive = 165,
	EGameplayModifierType__VE_RageModifyMovementSpeedAdditive = 166,
	EGameplayModifierType__VE_ModifyIllusionaryDoctorDurationAdditive = 167,
	EGameplayModifierType__VE_ModifyQuickActionLoudNoiseRange = 168,
	EGameplayModifierType__VE_ModifyHookEscapeFailurePenalty = 169,
	EGameplayModifierType__VE_ModifyHatchetAmmoCapacity = 170,
	EGameplayModifierType__VE_ModifyHatchetThrowCooldown = 171,
	EGameplayModifierType__VE_ModifyHatchetReloadTime = 172,
	EGameplayModifierType__VE_ModifyHatchetWindUpTime = 173,
	EGameplayModifierType__VE_RevealClosetsInRange = 174,
	EGameplayModifierType__VE_ModifyBonusAllBloodpoints = 175,
	EGameplayModifierType__VE_HideDyingSurvivorsOutsideRange = 176,
	EGameplayModifierType__VE_ModifyChainsawAcceleration = 177,
	EGameplayModifierType__VE_RevealVaultablesInRange = 178,
	EGameplayModifierType__VE_RevealExitGateInRange = 179,
	EGameplayModifierType__VE_RevealToSurvivorInRange = 180,
	EGameplayModifierType__VE_ModifyExhaustedCooldownRate = 181,
	EGameplayModifierType__VE_ModifyHemorrhageCooldownRate = 182,
	EGameplayModifierType__VE_ModifyMangledCooldownRate = 183,
	EGameplayModifierType__VE_ModifyHinderedCooldownRate = 184,
	EGameplayModifierType__VE_ModifyBlindnessCooldownRate = 185,
	EGameplayModifierType__VE_ModifyPowerRange = 186,
	EGameplayModifierType__VE_ModifySleepTransitionTime = 187,
	EGameplayModifierType__VE_ModifyTimeBeforeEndChaseAuraAppears = 188,
	EGameplayModifierType__VE_IncreaseSandManPowerMovementSpeed = 189,
	EGameplayModifierType__VE_HideStainOnUncloakDuration = 190,
	EGameplayModifierType__VE_MAX  = 191
};


// Enum DeadByDaylight.EKillerJoiningState
enum class EKillerJoiningState : uint8_t
{
	EKillerJoiningState__Disconnected = 0,
	EKillerJoiningState__Connected = 1,
	EKillerJoiningState__ConnectionFailed = 2,
	EKillerJoiningState__EKillerJoiningState_MAX = 3
};


// Enum DeadByDaylight.ETileVariation
enum class ETileVariation : uint8_t
{
	ETileVariation__None           = 0,
	ETileVariation__BlueTag        = 1,
	ETileVariation__PinkTag        = 2,
	ETileVariation__YellowTag      = 3,
	ETileVariation__GreenTag       = 4,
	ETileVariation__Empty          = 5,
	ETileVariation__ETileVariation_MAX = 6
};


// Enum DeadByDaylight.EPathType
enum class EPathType : uint8_t
{
	EPathType__None                = 0,
	EPathType__Straight            = 1,
	EPathType__DeadEnd             = 2,
	EPathType__Corner              = 3,
	EPathType__Crossroads          = 4,
	EPathType__TJunction           = 5,
	EPathType__OrientationOnly     = 6,
	EPathType__Unspecified         = 7,
	EPathType__EPathType_MAX       = 8
};


// Enum DeadByDaylight.EDensity
enum class EDensity : uint8_t
{
	EDensity__Unspecified          = 0,
	EDensity__Light                = 1,
	EDensity__Moderate             = 2,
	EDensity__Heavy                = 3,
	EDensity__Empty                = 4,
	EDensity__EDensity_MAX         = 5
};


// Enum DeadByDaylight.ETileType
enum class ETileType : uint8_t
{
	ETileType__None                = 0,
	ETileType__Blocker             = 1,
	ETileType__Any                 = 2,
	ETileType__Forest              = 3,
	ETileType__Building            = 4,
	ETileType__Maze                = 5,
	ETileType__Landmark            = 6,
	ETileType__Signature           = 7,
	ETileType__ETileType_MAX       = 8
};


// Enum DeadByDaylight.EDirection
enum class EDirection : uint8_t
{
	EDirection__Up                 = 0,
	EDirection__Down               = 1,
	EDirection__Left               = 2,
	EDirection__Right              = 3,
	EDirection__UpLeft             = 4,
	EDirection__UpRight            = 5,
	EDirection__DownLeft           = 6,
	EDirection__DownRight          = 7,
	EDirection__EDirection_MAX     = 8
};


// Enum DeadByDaylight.EQuadrantSpawnType
enum class EQuadrantSpawnType : uint8_t
{
	EQuadrantSpawnType__L_Shape    = 0,
	EQuadrantSpawnType__Square     = 1,
	EQuadrantSpawnType__Rect_X     = 2,
	EQuadrantSpawnType__Rect_Y     = 3,
	EQuadrantSpawnType__Rect       = 4,
	EQuadrantSpawnType__None       = 5,
	EQuadrantSpawnType__EQuadrantSpawnType_MAX = 6
};


// Enum DeadByDaylight.EQuadrant
enum class EQuadrant : uint8_t
{
	EQuadrant__BottomRight         = 0,
	EQuadrant__BottomLeft          = 1,
	EQuadrant__TopLeft             = 2,
	EQuadrant__TopRight            = 3,
	EQuadrant__Count               = 4,
	EQuadrant__EQuadrant_MAX       = 5
};


// Enum DeadByDaylight.ETileSpawnPointType
enum class ETileSpawnPointType : uint8_t
{
	ETileSpawnPointType__Unspecified = 0,
	ETileSpawnPointType__Survivor  = 1,
	ETileSpawnPointType__SurvivorItem = 2,
	ETileSpawnPointType__Killer    = 3,
	ETileSpawnPointType__KillerItem = 4,
	ETileSpawnPointType__InteractableObject = 5,
	ETileSpawnPointType__ETileSpawnPointType_MAX = 6
};


// Enum DeadByDaylight.EKnowledgeSharingType
enum class EKnowledgeSharingType : uint8_t
{
	EKnowledgeSharingType__Possessor = 0,
	EKnowledgeSharingType__Survivors = 1,
	EKnowledgeSharingType__Killers = 2,
	EKnowledgeSharingType__All     = 3,
	EKnowledgeSharingType__EKnowledgeSharingType_MAX = 4
};


// Enum DeadByDaylight.EGameplayElementType
enum class EGameplayElementType : uint8_t
{
	EGameplayElementType__Generic  = 0,
	EGameplayElementType__MeatLocker_Small = 1,
	EGameplayElementType__TileLights = 2,
	EGameplayElementType__MeatLocker_Big = 3,
	EGameplayElementType__Searchable = 4,
	EGameplayElementType__EdgeObjects = 5,
	EGameplayElementType__LivingWorldObjects = 6,
	EGameplayElementType__Hatch    = 7,
	EGameplayElementType__Bookshelves = 8,
	EGameplayElementType__Totems   = 9,
	EGameplayElementType__QuadrantSpawn = 10,
	EGameplayElementType__EdgeObjectsBlocker = 11,
	EGameplayElementType__Count    = 12,
	EGameplayElementType__EGameplayElementType_MAX = 13
};


// Enum DeadByDaylight.ECharacterMovementTypes
enum class ECharacterMovementTypes : uint8_t
{
	ECharacterMovementTypes__Normal = 0,
	ECharacterMovementTypes__Run   = 1,
	ECharacterMovementTypes__Crouch = 2,
	ECharacterMovementTypes__ECharacterMovementTypes_MAX = 3
};


// Enum DeadByDaylight.ESurvivorTutorialSections
enum class ESurvivorTutorialSections : uint8_t
{
	ESurvivorTutorialSections__Intro = 0,
	ESurvivorTutorialSections__Skillchecks = 1,
	ESurvivorTutorialSections__Killer = 2,
	ESurvivorTutorialSections__Stealth = 3,
	ESurvivorTutorialSections__Hook = 4,
	ESurvivorTutorialSections__Health = 5,
	ESurvivorTutorialSections__Rescue = 6,
	ESurvivorTutorialSections__Escape = 7,
	ESurvivorTutorialSections__ESurvivorTutorialSections_MAX = 8
};


// Enum DeadByDaylight.EKillerTutorialSections
enum class EKillerTutorialSections : uint8_t
{
	EKillerTutorialSections__Intro = 0,
	EKillerTutorialSections__Chase = 1,
	EKillerTutorialSections__Escape = 2,
	EKillerTutorialSections__EKillerTutorialSections_MAX = 3
};


// Enum DeadByDaylight.EOfferingEffectType
enum class EOfferingEffectType : uint8_t
{
	EOfferingEffectType__SlasherPointsAll = 0,
	EOfferingEffectType__PointsBrutality = 1,
	EOfferingEffectType__PointsDeviouness = 2,
	EOfferingEffectType__PointsSacrice = 3,
	EOfferingEffectType__PointsHunting = 4,
	EOfferingEffectType__CamperPointsAll = 5,
	EOfferingEffectType__PointsObjective = 6,
	EOfferingEffectType__PointsSurvival = 7,
	EOfferingEffectType__PointsAltruism = 8,
	EOfferingEffectType__PointsBoldness = 9,
	EOfferingEffectType__CamperItemLostPrevention = 10,
	EOfferingEffectType__KillerItemLostPrevention = 11,
	EOfferingEffectType__Luck      = 12,
	EOfferingEffectType__IndustrialThemeSelectionModifier = 13,
	EOfferingEffectType__JunkyardThemeSelectionModifier = 14,
	EOfferingEffectType__FarmThemeSelectionModifier = 15,
	EOfferingEffectType__SwampThemeSelectionModifier = 16,
	EOfferingEffectType__MapModifier = 17,
	EOfferingEffectType__ChestCountModifier = 18,
	EOfferingEffectType__PortableHookCountModifier = 19,
	EOfferingEffectType__LairCountModifier = 20,
	EOfferingEffectType__PlayerGrouping = 21,
	EOfferingEffectType__FarKiller = 22,
	EOfferingEffectType__KillAllowedModifier = 23,
	EOfferingEffectType__LightingModification = 24,
	EOfferingEffectType__FogModification = 25,
	EOfferingEffectType__LivingWorldObjectCountModifier = 26,
	EOfferingEffectType__LivingWorldObjectMultModifier = 27,
	EOfferingEffectType__KillLastSurvivor = 28,
	EOfferingEffectType__SuburbsThemeSelectionModifier = 29,
	EOfferingEffectType__AsylumThemeSelectionModifier = 30,
	EOfferingEffectType__KillerSelectionModifier = 31,
	EOfferingEffectType__HospitalThemeSelectionModifier = 32,
	EOfferingEffectType__KillAllowedAfterHook = 33,
	EOfferingEffectType__BorealThemeSelectionModifier = 34,
	EOfferingEffectType__SpringwoodThemeSelectionModifier = 35,
	EOfferingEffectType__FinlandThemeSelectionModifier = 36,
	EOfferingEffectType__SpecialEvent = 37,
	EOfferingEffectType__ObjectSubsitution = 38,
	EOfferingEffectType__EOfferingEffectType_MAX = 39
};


// Enum DeadByDaylight.EOfferingType
enum class EOfferingType : uint8_t
{
	EOfferingType__None            = 0,
	EOfferingType__Atmosphere      = 1,
	EOfferingType__Lighting        = 2,
	EOfferingType__Points          = 3,
	EOfferingType__Zone            = 4,
	EOfferingType__Position        = 5,
	EOfferingType__Chest           = 6,
	EOfferingType__Hook            = 7,
	EOfferingType__Protection      = 8,
	EOfferingType__Hatch           = 9,
	EOfferingType__Odds            = 10,
	EOfferingType__Killing         = 11,
	EOfferingType__World           = 12,
	EOfferingType__Luck            = 13,
	EOfferingType__Killer          = 14,
	EOfferingType__Count           = 15,
	EOfferingType__EOfferingType_MAX = 16
};


// Enum DeadByDaylight.EOfferingCombinationResult
enum class EOfferingCombinationResult : uint8_t
{
	EOfferingCombinationResult__None = 0,
	EOfferingCombinationResult__Stacked = 1,
	EOfferingCombinationResult__CoConsummed = 2,
	EOfferingCombinationResult__Overruling = 3,
	EOfferingCombinationResult__Cancelled = 4,
	EOfferingCombinationResult__EOfferingCombinationResult_MAX = 5
};


// Enum DeadByDaylight.EPlayerGameplayEventType
enum class EPlayerGameplayEventType : uint8_t
{
	EPlayerGameplayEventType__VE_UnhookedOther = 0,
	EPlayerGameplayEventType__VE_UntrappedOther = 1,
	EPlayerGameplayEventType__VE_HealedOther = 2,
	EPlayerGameplayEventType__VE_MAX = 3
};


// Enum DeadByDaylight.EInteractionLayer
enum class EInteractionLayer : uint8_t
{
	EInteractionLayer__VE_Camper   = 0,
	EInteractionLayer__VE_Slasher  = 1,
	EInteractionLayer__VE_MAX      = 2
};


// Enum DeadByDaylight.EInputInteractionType
enum class EInputInteractionType : uint8_t
{
	EInputInteractionType__VE_None = 0,
	EInputInteractionType__VE_Interact = 1,
	EInputInteractionType__VE_AttackInteract = 2,
	EInputInteractionType__VE_ItemInteract = 3,
	EInputInteractionType__VE_Rush = 4,
	EInputInteractionType__VE_ItemUse = 5,
	EInputInteractionType__VE_ItemDrop = 6,
	EInputInteractionType__VE_InteractMash = 7,
	EInputInteractionType__VE_LeftRightMash = 8,
	EInputInteractionType__VE_ExternalRequestDrop = 9,
	EInputInteractionType__VE_ExternalRequestFlashlightStunUncloak = 10,
	EInputInteractionType__VE_ExternalRequestStunUncloak = 11,
	EInputInteractionType__VE_ExternalRequestStun = 12,
	EInputInteractionType__VE_ExternalRequestDropByStunning = 13,
	EInputInteractionType__VE_ExternalRequestDropByWiggleFree = 14,
	EInputInteractionType__VE_ExternalRequestDropBySkillCheck = 15,
	EInputInteractionType__VE_ExternalRequestKillerCaughtInBearTrap = 16,
	EInputInteractionType__VE_ExternalEnterWithChainsaw = 17,
	EInputInteractionType__VE_FastInteract = 18,
	EInputInteractionType__VE_ExternalRequestSlashedOutOfTrap = 19,
	EInputInteractionType__VE_ExternalRequestSacrifice = 20,
	EInputInteractionType__VE_Gesture01 = 21,
	EInputInteractionType__VE_Gesture02 = 22,
	EInputInteractionType__VE_Gesture03 = 23,
	EInputInteractionType__VE_Gesture04 = 24,
	EInputInteractionType__VE_ExternalChainBlink = 25,
	EInputInteractionType__VE_ExternalRequestStunEvilWithin = 26,
	EInputInteractionType__VE_ExternalRequestKickStun = 27,
	EInputInteractionType__VE_ExternalRequestEscape = 28,
	EInputInteractionType__VE_Struggle = 29,
	EInputInteractionType__VE_Action = 30,
	EInputInteractionType__VE_ExternalRequestPutToSleepStun = 31,
	EInputInteractionType__VE_Crouch = 32,
	EInputInteractionType__VE_ExternalRequestRBTExecute = 33,
	EInputInteractionType__VE_ActionKiller = 34,
	EInputInteractionType__VE_ExternalRequestRBTExecuteAtExit = 35,
	EInputInteractionType__VE_ExternalRequestStunBySkillCheck = 36,
	EInputInteractionType__VE_Count = 37,
	EInputInteractionType__VE_MAX  = 38
};


// Enum DeadByDaylight.EPlayerAnimState
enum class EPlayerAnimState : uint8_t
{
	EPlayerAnimState__VE_Default   = 0,
	EPlayerAnimState__VE_Injured   = 1,
	EPlayerAnimState__VE_InjuredCrouch = 2,
	EPlayerAnimState__VE_Crouch    = 3,
	EPlayerAnimState__VE_MAX       = 4
};


// Enum DeadByDaylight.EAuthoritativeMovementFlag
enum class EAuthoritativeMovementFlag : uint8_t
{
	EAuthoritativeMovementFlag__INTERACTION = 0,
	EAuthoritativeMovementFlag__SLASHED = 1,
	EAuthoritativeMovementFlag__CHEAT = 2,
	EAuthoritativeMovementFlag__DROPPED = 3,
	EAuthoritativeMovementFlag__NOPUSH = 4,
	EAuthoritativeMovementFlag__INTERACTIONNOPUSH = 5,
	EAuthoritativeMovementFlag__DREAMWORLD_NOSLASHERCOLLISION = 6,
	EAuthoritativeMovementFlag__COUNT = 7,
	EAuthoritativeMovementFlag__EAuthoritativeMovementFlag_MAX = 8
};


// Enum DeadByDaylight.ECharacterStance
enum class ECharacterStance : uint8_t
{
	ECharacterStance__VE_Stand     = 0,
	ECharacterStance__VE_Crouch    = 1,
	ECharacterStance__VE_Crawl     = 2,
	ECharacterStance__VE_MAX       = 3
};


// Enum DeadByDaylight.EBlinkerState
enum class EBlinkerState : uint8_t
{
	EBlinkerState__VE_Ready        = 0,
	EBlinkerState__VE_ChainBlink   = 1,
	EBlinkerState__VE_Cooldown     = 2,
	EBlinkerState__VE_MAX          = 3
};


// Enum DeadByDaylight.ECamperGuidedAction
enum class ECamperGuidedAction : uint8_t
{
	ECamperGuidedAction__VE_None   = 0,
	ECamperGuidedAction__VE_PrepBeingKilled = 1,
	ECamperGuidedAction__VE_BeingKilled = 2,
	ECamperGuidedAction__VE_PrepGuidedAction = 3,
	ECamperGuidedAction__VE_BeingHelpedOffHookFront = 4,
	ECamperGuidedAction__VE_BeingHelpedOffHookBack = 5,
	ECamperGuidedAction__VE_BeingPickedUp = 6,
	ECamperGuidedAction__VE_BeingPutDown = 7,
	ECamperGuidedAction__VE_BeingCarried = 8,
	ECamperGuidedAction__VE_BeingPutOnHook = 9,
	ECamperGuidedAction__VE_BeingHealed = 10,
	ECamperGuidedAction__VE_BeingPulledFromCloset = 11,
	ECamperGuidedAction__VE_BeingHelpedFromTrap = 12,
	ECamperGuidedAction__VE_AttachReverseBearTrap = 13,
	ECamperGuidedAction__VE_MAX    = 14
};


// Enum DeadByDaylight.ECamperImmobilizeState
enum class ECamperImmobilizeState : uint8_t
{
	ECamperImmobilizeState__VE_None = 0,
	ECamperImmobilizeState__VE_Hooked = 1,
	ECamperImmobilizeState__VE_Trapped = 2,
	ECamperImmobilizeState__VE_Hiding = 3,
	ECamperImmobilizeState__VE_MAX = 4
};


// Enum DeadByDaylight.ECamperDamageState
enum class ECamperDamageState : uint8_t
{
	ECamperDamageState__VE_Healthy = 0,
	ECamperDamageState__VE_Injured = 1,
	ECamperDamageState__VE_KO      = 2,
	ECamperDamageState__VE_Dead    = 3,
	ECamperDamageState__VE_MAX     = 4
};


// Enum DeadByDaylight.ECustomizationCategory
enum class ECustomizationCategory : uint8_t
{
	ECustomizationCategory__None   = 0,
	ECustomizationCategory__SurvivorHead = 1,
	ECustomizationCategory__SurvivorTorso = 2,
	ECustomizationCategory__SurvivorLegs = 3,
	ECustomizationCategory__KillerHead = 4,
	ECustomizationCategory__KillerBody = 5,
	ECustomizationCategory__KillerWeapon = 6,
	ECustomizationCategory__Outfits = 7,
	ECustomizationCategory__ECustomizationCategory_MAX = 8
};


// Enum DeadByDaylight.EItemQuality
enum class EItemQuality : uint8_t
{
	EItemQuality__V0               = 0,
	EItemQuality__V1               = 1,
	EItemQuality__V2               = 2,
	EItemQuality__Count            = 3,
	EItemQuality__EItemQuality_MAX = 4
};


// Enum DeadByDaylight.EScreenShotBatching
enum class EScreenShotBatching : uint8_t
{
	EScreenShotBatching__SelectedItemOrOutfit = 0,
	EScreenShotBatching__SelectedCharacter = 1,
	EScreenShotBatching__SelectedCharacterAndCategory = 2,
	EScreenShotBatching__ItemsMissingIcon = 3,
	EScreenShotBatching__AllItems  = 4,
	EScreenShotBatching__SelectedCharacterOutfits = 5,
	EScreenShotBatching__AllOutfits = 6,
	EScreenShotBatching__EScreenShotBatching_MAX = 7
};


// Enum DeadByDaylight.EEnergyTypeEnum
enum class EEnergyTypeEnum : uint8_t
{
	EEnergyTypeEnum__EInvalid      = 0,
	EEnergyTypeEnum__EBattery      = 1,
	EEnergyTypeEnum__EHealth       = 2,
	EEnergyTypeEnum__EEnergyTypeEnum_MAX = 3
};


// Enum DeadByDaylight.EItemDomain
enum class EItemDomain : uint8_t
{
	EItemDomain__Store             = 0,
	EItemDomain__Local             = 1,
	EItemDomain__Any               = 2,
	EItemDomain__EItemDomain_MAX   = 3
};


// Enum DeadByDaylight.EOwnership
enum class EOwnership : uint8_t
{
	EOwnership__Owned              = 0,
	EOwnership__NotOwned           = 1,
	EOwnership__Any                = 2,
	EOwnership__EOwnership_MAX     = 3
};


// Enum DeadByDaylight.EProceduralDebugMode
enum class EProceduralDebugMode : uint8_t
{
	EProceduralDebugMode__None     = 0,
	EProceduralDebugMode__NoMap    = 1,
	EProceduralDebugMode__TilesSmall = 2,
	EProceduralDebugMode__TilesBig = 3,
	EProceduralDebugMode__Count    = 4,
	EProceduralDebugMode__EProceduralDebugMode_MAX = 5
};


// Enum DeadByDaylight.ELevelLoadingSteps
enum class ELevelLoadingSteps : uint8_t
{
	ELevelLoadingSteps__Invalid    = 0,
	ELevelLoadingSteps__WaitingForPlayersToBeSpawned = 1,
	ELevelLoadingSteps__WaitingForLoadoutAndTheme = 2,
	ELevelLoadingSteps__WaitingForIntroToBeDone = 3,
	ELevelLoadingSteps__LoadingCompleted = 4,
	ELevelLoadingSteps__ELevelLoadingSteps_MAX = 5
};


// Enum DeadByDaylight.EHelpType
enum class EHelpType : uint8_t
{
	EHelpType__General             = 0,
	EHelpType__Survivor            = 1,
	EHelpType__Killer              = 2,
	EHelpType__EHelpType_MAX       = 3
};


// Enum DeadByDaylight.EBonusEventType
enum class EBonusEventType : uint8_t
{
	EBonusEventType__Bloodpoints   = 0,
	EBonusEventType__EBonusEventType_MAX = 1
};


// Enum DeadByDaylight.ECollectableState
enum class ECollectableState : uint8_t
{
	ECollectableState__OnGround    = 0,
	ECollectableState__Stored      = 1,
	ECollectableState__Equipped    = 2,
	ECollectableState__ToBeDropped = 3,
	ECollectableState__ECollectableState_MAX = 4
};


// Enum DeadByDaylight.ECollectableCategory
enum class ECollectableCategory : uint8_t
{
	ECollectableCategory__Common   = 0,
	ECollectableCategory__Rare     = 1,
	ECollectableCategory__ECollectableCategory_MAX = 2
};


// Enum DeadByDaylight.EThemeColorId
enum class EThemeColorId : uint8_t
{
	EThemeColorId__Invalid         = 0,
	EThemeColorId__Blue            = 1,
	EThemeColorId__Green           = 2,
	EThemeColorId__Yellow          = 3,
	EThemeColorId__EThemeColorId_MAX = 4
};


// Enum DeadByDaylight.ESurvivorGrouping
enum class ESurvivorGrouping : uint8_t
{
	ESurvivorGrouping__Invalid     = 0,
	ESurvivorGrouping__Separated   = 1,
	ESurvivorGrouping__Grouped2    = 2,
	ESurvivorGrouping__Grouped3    = 3,
	ESurvivorGrouping__Grouped4    = 4,
	ESurvivorGrouping__ESurvivorGrouping_MAX = 5
};


// Enum DeadByDaylight.EscapeStrategyType
enum class EscapeStrategyType : uint8_t
{
	EscapeStrategyType__EscapeDoor = 0,
	EscapeStrategyType__EscapeHatch = 1,
	EscapeStrategyType__EscapeStrategyType_MAX = 2
};


// Enum DeadByDaylight.EMainMenuButton
enum class EMainMenuButton : uint8_t
{
	EMainMenuButton__News          = 0,
	EMainMenuButton__SurviveWithFriends = 1,
	EMainMenuButton__PlaySurvivor  = 2,
	EMainMenuButton__PlayKiller    = 3,
	EMainMenuButton__KillYourFriends = 4,
	EMainMenuButton__DailyRituals  = 5,
	EMainMenuButton__Store         = 6,
	EMainMenuButton__Settings      = 7,
	EMainMenuButton__Help          = 8,
	EMainMenuButton__Credits       = 9,
	EMainMenuButton__QuitGame      = 10,
	EMainMenuButton__EMainMenuButton_MAX = 11
};


// Enum DeadByDaylight.ESlasherGuidedAction
enum class ESlasherGuidedAction : uint8_t
{
	ESlasherGuidedAction__VE_None  = 0,
	ESlasherGuidedAction__VE_Hooking = 1,
	ESlasherGuidedAction__VE_PickingUp = 2,
	ESlasherGuidedAction__VE_PuttingDown = 3,
	ESlasherGuidedAction__VE_MAX   = 4
};


// Enum DeadByDaylight.EAttackZoneSet
enum class EAttackZoneSet : uint8_t
{
	EAttackZoneSet__VE_OriginalZones = 0,
	EAttackZoneSet__VE_WedgeZones  = 1,
	EAttackZoneSet__VE_MAX         = 2
};


// Enum DeadByDaylight.EEmblemQuality
enum class EEmblemQuality : uint8_t
{
	EEmblemQuality__None           = 0,
	EEmblemQuality__Scratched      = 1,
	EEmblemQuality__Tarnished      = 2,
	EEmblemQuality__Beaming        = 3,
	EEmblemQuality__Iridescent     = 4,
	EEmblemQuality__Count          = 5,
	EEmblemQuality__EEmblemQuality_MAX = 6
};


// Enum DeadByDaylight.EEmblemEvaluation
enum class EEmblemEvaluation : uint8_t
{
	EEmblemEvaluation__Authority   = 0,
	EEmblemEvaluation__Local       = 1,
	EEmblemEvaluation__EEmblemEvaluation_MAX = 2
};


// Enum DeadByDaylight.EDiceRollType
enum class EDiceRollType : uint8_t
{
	EDiceRollType__VE_EscapeHook   = 0,
	EDiceRollType__VE_EscapeTrap   = 1,
	EDiceRollType__VE_TrapInflictsDying = 2,
	EDiceRollType__VE_TriggerSkillCheck = 3,
	EDiceRollType__VE_TriggerFootNoise = 4,
	EDiceRollType__VE_TriggerCrowAlert = 5,
	EDiceRollType__VE_MAX          = 6
};


// Enum DeadByDaylight.ESurvivorGroupTransitionSteps
enum class ESurvivorGroupTransitionSteps : uint8_t
{
	ESurvivorGroupTransitionSteps__Idle = 0,
	ESurvivorGroupTransitionSteps__JoiningKiller = 1,
	ESurvivorGroupTransitionSteps__TravellingToKiller = 2,
	ESurvivorGroupTransitionSteps__ESurvivorGroupTransitionSteps_MAX = 3
};


// Enum DeadByDaylight.EServerJoiningDataType
enum class EServerJoiningDataType : uint8_t
{
	EServerJoiningDataType__Idle   = 0,
	EServerJoiningDataType__KillerServerFound = 1,
	EServerJoiningDataType__TravelToKiller = 2,
	EServerJoiningDataType__EServerJoiningDataType_MAX = 3
};


// Enum DeadByDaylight.EGameIntroSteps
enum class EGameIntroSteps : uint8_t
{
	EGameIntroSteps__Idling        = 0,
	EGameIntroSteps__PlayingIntro  = 1,
	EGameIntroSteps__LoopingCamView = 2,
	EGameIntroSteps__EGameIntroSteps_MAX = 3
};


// Enum DeadByDaylight.ELoadCompleteState
enum class ELoadCompleteState : uint8_t
{
	ELoadCompleteState__InProgress = 0,
	ELoadCompleteState__Success    = 1,
	ELoadCompleteState__FailedEAC  = 2,
	ELoadCompleteState__FailedRecoverable = 3,
	ELoadCompleteState__FailedRecoverableProfileLoad = 4,
	ELoadCompleteState__FailedBlocking = 5,
	ELoadCompleteState__FailedBlockingNoDBDServer = 6,
	ELoadCompleteState__FailedBlockingNotConnected = 7,
	ELoadCompleteState__ELoadCompleteState_MAX = 8
};


// Enum DeadByDaylight.ELoadProgress
enum class ELoadProgress : uint8_t
{
	ELoadProgress__NotStarted      = 0,
	ELoadProgress__Init            = 1,
	ELoadProgress__ValidateOnlineSubsystem = 2,
	ELoadProgress__CheckingPlatformService = 3,
	ELoadProgress__ConnectingToMirrors = 4,
	ELoadProgress__StartEAC        = 5,
	ELoadProgress__LoadingPlayerIndependentShopData = 6,
	ELoadProgress__LoadingInventory = 7,
	ELoadProgress__LoadingProfile  = 8,
	ELoadProgress__LoadingStats    = 9,
	ELoadProgress__LoadingMirrorCurrencies = 10,
	ELoadProgress__LoadingWallet   = 11,
	ELoadProgress__CheckingPendingTransactions = 12,
	ELoadProgress__LoadingNews     = 13,
	ELoadProgress__CheckingNeedForCurrencyMigration = 14,
	ELoadProgress__MigratingCurrenciesToMirror = 15,
	ELoadProgress__WalletCountry   = 16,
	ELoadProgress__Complete        = 17,
	ELoadProgress__ELoadProgress_MAX = 18
};


// Enum DeadByDaylight.EUIFlowEvent
enum class EUIFlowEvent : uint8_t
{
	EUIFlowEvent__None             = 0,
	EUIFlowEvent__LoadingScreenReady = 1,
	EUIFlowEvent__SplashScreenReady = 2,
	EUIFlowEvent__RoleSelecttionScreenReady = 3,
	EUIFlowEvent__OfflineLobbyScreenReady = 4,
	EUIFlowEvent__OnlineLobbyScreenReady = 5,
	EUIFlowEvent__InGameHudReady   = 6,
	EUIFlowEvent__TallyScreenReady = 7,
	EUIFlowEvent__EUIFlowEvent_MAX = 8
};


// Enum DeadByDaylight.EWorldFlowEvent
enum class EWorldFlowEvent : uint8_t
{
	EWorldFlowEvent__None          = 0,
	EWorldFlowEvent__StartScreenMapLoaded = 1,
	EWorldFlowEvent__OfflineLobbyMapLoaded = 2,
	EWorldFlowEvent__LoadingOnlineLobbyLevel = 3,
	EWorldFlowEvent__OnlineLobbyMapLoaded = 4,
	EWorldFlowEvent__LoadingGameLevel = 5,
	EWorldFlowEvent__GameLevelLoaded = 6,
	EWorldFlowEvent__LoadingOfflineParadise = 7,
	EWorldFlowEvent__OfflineParadiseLoaded = 8,
	EWorldFlowEvent__EWorldFlowEvent_MAX = 9
};


// Enum DeadByDaylight.EGameFlowStep
enum class EGameFlowStep : uint8_t
{
	EGameFlowStep__None            = 0,
	EGameFlowStep__SplashScreen    = 1,
	EGameFlowStep__OfflineLobby    = 2,
	EGameFlowStep__OnlineLobby     = 3,
	EGameFlowStep__InGame          = 4,
	EGameFlowStep__OfflineTally    = 5,
	EGameFlowStep__EGameFlowStep_MAX = 6
};


// Enum DeadByDaylight.EJoinSessionFailureType
enum class EJoinSessionFailureType : uint8_t
{
	EJoinSessionFailureType__None  = 0,
	EJoinSessionFailureType__JoiningAlreadyStartedGame = 1,
	EJoinSessionFailureType__JoiningPrivateGame = 2,
	EJoinSessionFailureType__JoiningAlreadyFullGame = 3,
	EJoinSessionFailureType__JoiningInvitation = 4,
	EJoinSessionFailureType__JoiningFailedOnDisconnect = 5,
	EJoinSessionFailureType__JoiningHostUnreachable = 6,
	EJoinSessionFailureType__EJoinSessionFailureType_MAX = 7
};


// Enum DeadByDaylight.EOnlineOperation
enum class EOnlineOperation : uint8_t
{
	EOnlineOperation__None         = 0,
	EOnlineOperation__HostGame     = 1,
	EOnlineOperation__EndingSession = 2,
	EOnlineOperation__DestroyingSession = 3,
	EOnlineOperation__JoinGame     = 4,
	EOnlineOperation__JoinCancelled = 5,
	EOnlineOperation__FindCustomSessions = 6,
	EOnlineOperation__OnlineCheck  = 7,
	EOnlineOperation__EOnlineOperation_MAX = 8
};


// Enum DeadByDaylight.EDisconnectErrors
enum class EDisconnectErrors : uint8_t
{
	EDisconnectErrors__None        = 0,
	EDisconnectErrors__SteamAuthFailure = 1,
	EDisconnectErrors__SteamAuthFailureKickedFromServer = 2,
	EDisconnectErrors__EACServerValidationFailure = 3,
	EDisconnectErrors__EACValidationFailureKickedFromServer = 4,
	EDisconnectErrors__EACClientNotRunning = 5,
	EDisconnectErrors__EACClientIntegrityViolation = 6,
	EDisconnectErrors__PlayerRemovedOnSuspend = 7,
	EDisconnectErrors__LostConnectionToHost = 8,
	EDisconnectErrors__LostConnectionToProfileService = 9,
	EDisconnectErrors__MirrorsUnscheduledSessionDestruction = 10,
	EDisconnectErrors__SessionKilledByMirrors = 11,
	EDisconnectErrors__UnableToSaveProfileAfterRetries = 12,
	EDisconnectErrors__UnableToGetPlayerLevel = 13,
	EDisconnectErrors__UnableToEarnPlayerXp = 14,
	EDisconnectErrors__EDisconnectErrors_MAX = 15
};


// Enum DeadByDaylight.EGateType
enum class EGateType : uint8_t
{
	EGateType__VE_AndGate          = 0,
	EGateType__VE_TimerGate        = 1,
	EGateType__VE_MAX              = 2
};


// Enum DeadByDaylight.EEscapeDoorActivationMode
enum class EEscapeDoorActivationMode : uint8_t
{
	EEscapeDoorActivationMode__Standard = 0,
	EEscapeDoorActivationMode__Tutorial = 1,
	EEscapeDoorActivationMode__EEscapeDoorActivationMode_MAX = 2
};


// Enum DeadByDaylight.EInteractionOwnership
enum class EInteractionOwnership : uint8_t
{
	EInteractionOwnership__AnyCanUse = 0,
	EInteractionOwnership__OnlyOwnerCanUse = 1,
	EInteractionOwnership__OwnerCannotUse = 2,
	EInteractionOwnership__EInteractionOwnership_MAX = 3
};


// Enum DeadByDaylight.EChargeableInteractionBarType
enum class EChargeableInteractionBarType : uint8_t
{
	EChargeableInteractionBarType__VE_Normal = 0,
	EChargeableInteractionBarType__VE_ProgressPips = 1,
	EChargeableInteractionBarType__VE_MAX = 2
};


// Enum DeadByDaylight.EOfflineLobbyState
enum class EOfflineLobbyState : uint8_t
{
	EOfflineLobbyState__None       = 0,
	EOfflineLobbyState__RoleSelection = 1,
	EOfflineLobbyState__OfflineLobby = 2,
	EOfflineLobbyState__Store      = 3,
	EOfflineLobbyState__EOfflineLobbyState_MAX = 4
};


// Enum DeadByDaylight.EMapActorCategory
enum class EMapActorCategory : uint8_t
{
	EMapActorCategory__None        = 0,
	EMapActorCategory__Objective   = 1,
	EMapActorCategory__BlackLock   = 2,
	EMapActorCategory__KillerObject = 3,
	EMapActorCategory__ExitGate    = 4,
	EMapActorCategory__EMapActorCategory_MAX = 5
};


// Enum DeadByDaylight.EOfferingAnimState
enum class EOfferingAnimState : uint8_t
{
	EOfferingAnimState__None       = 0,
	EOfferingAnimState__Idle       = 1,
	EOfferingAnimState__Init       = 2,
	EOfferingAnimState__Reveal     = 3,
	EOfferingAnimState__ShowInteraction = 4,
	EOfferingAnimState__Burned     = 5,
	EOfferingAnimState__Returned   = 6,
	EOfferingAnimState__Cancel     = 7,
	EOfferingAnimState__Hidden     = 8,
	EOfferingAnimState__EOfferingAnimState_MAX = 9
};


// Enum DeadByDaylight.EOfferingSequenceState
enum class EOfferingSequenceState : uint8_t
{
	EOfferingSequenceState__SmokeIn = 0,
	EOfferingSequenceState__FadeOut = 1,
	EOfferingSequenceState__FadeIn = 2,
	EOfferingSequenceState__NotInitialized = 3,
	EOfferingSequenceState__Idle   = 4,
	EOfferingSequenceState__Init   = 5,
	EOfferingSequenceState__InitDone = 6,
	EOfferingSequenceState__Reveal = 7,
	EOfferingSequenceState__RevealDone = 8,
	EOfferingSequenceState__ShowInteraction = 9,
	EOfferingSequenceState__Finalize = 10,
	EOfferingSequenceState__Done   = 11,
	EOfferingSequenceState__EOfferingSequenceState_MAX = 12
};


// Enum DeadByDaylight.ERequestState
enum class ERequestState : uint8_t
{
	ERequestState__VE_None         = 0,
	ERequestState__VE_Pending      = 1,
	ERequestState__VE_Success      = 2,
	ERequestState__VE_Fail         = 3,
	ERequestState__VE_MAX          = 4
};


// Enum DeadByDaylight.ELevelBuildingState
enum class ELevelBuildingState : uint8_t
{
	ELevelBuildingState__NotInitialized = 0,
	ELevelBuildingState__WaitingForInitialSync = 1,
	ELevelBuildingState__SyncSeeds = 2,
	ELevelBuildingState__GetAvailableItems = 3,
	ELevelBuildingState__PendingGettingItems = 4,
	ELevelBuildingState__PendingGettingLevels = 5,
	ELevelBuildingState__GettingLevelsDone = 6,
	ELevelBuildingState__GetThemedTiles = 7,
	ELevelBuildingState__PendingGettingTiles = 8,
	ELevelBuildingState__SpawnRequiredTiles = 9,
	ELevelBuildingState__SpawningLevelTiles = 10,
	ELevelBuildingState__SpawnInterTileElements = 11,
	ELevelBuildingState__PendingInterTileElementsSpawning = 12,
	ELevelBuildingState__SpawningActors = 13,
	ELevelBuildingState__StallingForRemotes = 14,
	ELevelBuildingState__BuildingDone = 15,
	ELevelBuildingState__ELevelBuildingState_MAX = 16
};


// Enum DeadByDaylight.EBarColor
enum class EBarColor : uint8_t
{
	EBarColor__Default             = 0,
	EBarColor__Yellow              = 1,
	EBarColor__Red                 = 2,
	EBarColor__EBarColor_MAX       = 3
};


// Enum DeadByDaylight.EHintCategory
enum class EHintCategory : uint8_t
{
	EHintCategory__Lore            = 0,
	EHintCategory__Survivor        = 1,
	EHintCategory__Killer          = 2,
	EHintCategory__EHintCategory_MAX = 3
};


// Enum DeadByDaylight.EOverlayContext
enum class EOverlayContext : uint8_t
{
	EOverlayContext__MainMenus     = 0,
	EOverlayContext__InGame        = 1,
	EOverlayContext__Tutorial      = 2,
	EOverlayContext__TutorialLevel = 3,
	EOverlayContext__EOverlayContext_MAX = 4
};


// Enum DeadByDaylight.EOverlayTabs
enum class EOverlayTabs : uint8_t
{
	EOverlayTabs__Settings         = 0,
	EOverlayTabs__Controls         = 1,
	EOverlayTabs__Help             = 2,
	EOverlayTabs__Survivors        = 3,
	EOverlayTabs__EOverlayTabs_MAX = 4
};


// Enum DeadByDaylight.EInventoryGridFormat
enum class EInventoryGridFormat : uint8_t
{
	EInventoryGridFormat__DEFAULT  = 0,
	EInventoryGridFormat__DIAMOND  = 1,
	EInventoryGridFormat__HONEYCOMB = 2,
	EInventoryGridFormat__EInventoryGridFormat_MAX = 3
};


// Enum DeadByDaylight.EStoreTab
enum class EStoreTab : uint8_t
{
	EStoreTab__Featured            = 0,
	EStoreTab__Characters          = 1,
	EStoreTab__Currency            = 2,
	EStoreTab__ShrineOfSecrets     = 3,
	EStoreTab__TabCount            = 4,
	EStoreTab__EStoreTab_MAX       = 5
};


// Enum DeadByDaylight.EStoreState
enum class EStoreState : uint8_t
{
	EStoreState__None              = 0,
	EStoreState__Featured          = 1,
	EStoreState__CharacterSelection = 2,
	EStoreState__CharacterStory    = 3,
	EStoreState__CharacterCatalog  = 4,
	EStoreState__BuyCurrency       = 5,
	EStoreState__ShrineOfSecrets   = 6,
	EStoreState__EStoreState_MAX   = 7
};


// Enum DeadByDaylight.EStoreBannerLocation
enum class EStoreBannerLocation : uint8_t
{
	EStoreBannerLocation__Left     = 0,
	EStoreBannerLocation__Right    = 1,
	EStoreBannerLocation__EStoreBannerLocation_MAX = 2
};


// Enum DeadByDaylight.EPreLevelGenerationModifierType
enum class EPreLevelGenerationModifierType : uint8_t
{
	EPreLevelGenerationModifierType__None = 0,
	EPreLevelGenerationModifierType__ModifyKillerObjectCount = 1,
	EPreLevelGenerationModifierType__EPreLevelGenerationModifierType_MAX = 2
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct DeadByDaylight.FearMarketItemInstance
// 0x0018
struct FFearMarketItemInstance
{
	struct FName                                       ItemId;                                                   // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                Cost;                                                     // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                BloodpointConversion;                                     // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               Purchased;                                                // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.FearMarketOfferingInstance
// 0x0020
struct FFearMarketOfferingInstance
{
	TArray<struct FFearMarketItemInstance>             ObjectsForSale;                                           // 0x0000(0x0010) (ZeroConstructor)
	struct FDateTime                                   StartTime;                                                // 0x0010(0x0008) (ZeroConstructor)
	struct FDateTime                                   EndTime;                                                  // 0x0018(0x0008) (ZeroConstructor)
};

// ScriptStruct DeadByDaylight.SessionInfos
// 0x0038
struct FSessionInfos
{
	unsigned char                                      UnknownData00[0x38];                                      // 0x0000(0x0038) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.GamePresetData
// 0x0078
struct FGamePresetData
{
	TArray<unsigned char>                              _mapAvailabilities;                                       // 0x0000(0x0010) (ZeroConstructor)
	TArray<unsigned char>                              _perkAvailabilities;                                      // 0x0010(0x0010) (ZeroConstructor)
	TArray<unsigned char>                              _offeringAvailabilities;                                  // 0x0020(0x0010) (ZeroConstructor)
	TArray<unsigned char>                              _itemAvailabilities;                                      // 0x0030(0x0010) (ZeroConstructor)
	TArray<unsigned char>                              _itemAddonAvailabilities;                                 // 0x0040(0x0010) (ZeroConstructor)
	TArray<unsigned char>                              _customizationItemAvailabilities;                         // 0x0050(0x0010) (ZeroConstructor)
	TArray<unsigned char>                              _characterAvailabilities;                                 // 0x0060(0x0010) (ZeroConstructor)
	bool                                               _allowDlcContent;                                         // 0x0070(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               _privateMatch;                                            // 0x0071(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0072(0x0006) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.GamePersistentData
// 0x00F0
struct FGamePersistentData
{
	int                                                PlayerCount;                                              // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SpectatorCount;                                           // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FSessionInfos                               SessionInfos;                                             // 0x0008(0x0038)
	struct FSessionInfos                               LastSessionInfos;                                         // 0x0040(0x0038)
	struct FGamePresetData                             GamePresetData;                                           // 0x0078(0x0078)
};

// ScriptStruct DeadByDaylight.PlayerLoadoutData
// 0x0080
struct FPlayerLoadoutData
{
	struct FName                                       Item;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               ItemAddOns;                                               // 0x0008(0x0010) (ZeroConstructor)
	TArray<struct FName>                               CamperPerks;                                              // 0x0018(0x0010) (ZeroConstructor)
	TArray<int>                                        CamperPerkLevels;                                         // 0x0028(0x0010) (ZeroConstructor)
	struct FName                                       CamperFavor;                                              // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       Power;                                                    // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               PowerAddOns;                                              // 0x0048(0x0010) (ZeroConstructor)
	TArray<struct FName>                               SlasherPerks;                                             // 0x0058(0x0010) (ZeroConstructor)
	TArray<int>                                        SlasherPerkLevels;                                        // 0x0068(0x0010) (ZeroConstructor)
	struct FName                                       SlasherFavor;                                             // 0x0078(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DeadByDaylight.DailyRitualInstance
// 0x0058
struct FDailyRitualInstance
{
	struct FName                                       RitualKey;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                DifficultyTier;                                           // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	TArray<TEnumAsByte<EDBDScoreTypes>>                TrackedEvents;                                            // 0x0010(0x0010) (ZeroConstructor)
	TArray<int>                                        CharacterIDs;                                             // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<TEnumAsByte<EPlayerRole>>                   Roles;                                                    // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              Progress;                                                 // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Threshold;                                                // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Tolerance;                                                // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DisplayThreshold;                                         // 0x004C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ExpReward;                                                // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               Active;                                                   // 0x0054(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               Rewarded;                                                 // 0x0055(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               IsNew;                                                    // 0x0056(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0057(0x0001) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.PlayerSavedProfileDataShared
// 0x0048
struct FPlayerSavedProfileDataShared
{
	class FString                                      PlayerName;                                               // 0x0000(0x0010) (ZeroConstructor)
	class FString                                      SteamId;                                                  // 0x0010(0x0010) (ZeroConstructor)
	int                                                SelectedCamperIndex;                                      // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SelectedSlasherIndex;                                     // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               SelectedCharacterCustomization;                           // 0x0028(0x0010) (ZeroConstructor)
	int                                                SlasherSkulls;                                            // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CamperSkulls;                                             // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CamperStreak;                                             // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.DailyRitualContainer
// 0x0028
struct FDailyRitualContainer
{
	struct FDateTime                                   LastRitualReceivedDate;                                   // 0x0000(0x0008) (ZeroConstructor)
	struct FDateTime                                   LastRitualPopupDate;                                      // 0x0008(0x0008) (ZeroConstructor)
	struct FDateTime                                   LastRitualDismissedDate;                                  // 0x0010(0x0008) (ZeroConstructor)
	TArray<struct FDailyRitualInstance>                Rituals;                                                  // 0x0018(0x0010) (ZeroConstructor)
};

// ScriptStruct DeadByDaylight.PlayerSavedProfileCumulativeData
// 0x0030
struct FPlayerSavedProfileCumulativeData
{
	bool                                               FirstTimePlaying;                                         // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                CumulativeMatches;                                        // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CumulativeMatchesAsSurvivor;                              // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CumulativeMatchesAsKiller;                                // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FDateTime                                   LastMatchTimestamp;                                       // 0x0010(0x0008) (ZeroConstructor)
	struct FDateTime                                   LastSessionTimestamp;                                     // 0x0018(0x0008) (ZeroConstructor)
	int                                                CumulativeSessions;                                       // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	struct FTimespan                                   CumulativePlaytime;                                       // 0x0028(0x0008) (ZeroConstructor)
};

// ScriptStruct DeadByDaylight.SavedStatsData
// 0x0018
struct FSavedStatsData
{
	uint32_t                                           Version;                                                  // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FName                                       Name;                                                     // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.BloodwebNodeProperties
// 0x0018
struct FBloodwebNodeProperties
{
	TEnumAsByte<EBloodwebNodeContentType>              ContentType;                                              // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EItemRarity>                           Rarity;                                                   // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0002(0x0006) MISSED OFFSET
	TArray<class FString>                              Tags;                                                     // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct DeadByDaylight.BloodwebNodeGate
// 0x0000 (0x0008 - 0x0008)
struct FBloodwebNodeGate : public FTableRowBase
{

};

// ScriptStruct DeadByDaylight.BloodwebChest
// 0x0020 (0x0028 - 0x0008)
struct FBloodwebChest : public FTableRowBase
{
	struct FName                                       ID;                                                       // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EItemRarity>                           Rarity;                                                   // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	TArray<float>                                      GivenItemRarity;                                          // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct DeadByDaylight.BloodwebNode
// 0x0078
struct FBloodwebNode
{
	struct FBloodwebNodeProperties                     Properties;                                               // 0x0000(0x0018)
	TArray<struct FBloodwebNodeGate>                   Gates;                                                    // 0x0018(0x0010) (ZeroConstructor)
	TEnumAsByte<EBloodwebNodeState>                    State;                                                    // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
	class FString                                      NodeID;                                                   // 0x0030(0x0010) (ZeroConstructor)
	struct FName                                       ContentId;                                                // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0048(0x0008) MISSED OFFSET
	struct FBloodwebChest                              BloodwebChest;                                            // 0x0050(0x0028)
};

// ScriptStruct DeadByDaylight.BloodWebRingPersistentData
// 0x0010
struct FBloodWebRingPersistentData
{
	TArray<struct FBloodwebNode>                       NodeData;                                                 // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct DeadByDaylight.BloodWebPersistentData
// 0x0038
struct FBloodWebPersistentData
{
	int                                                VersionNumber;                                            // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Level;                                                    // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<struct FBloodWebRingPersistentData>         RingData;                                                 // 0x0008(0x0010) (ZeroConstructor)
	TArray<struct FName>                               Paths;                                                    // 0x0018(0x0010) (ZeroConstructor)
	class FString                                      EntityCurrentNode;                                        // 0x0028(0x0010) (ZeroConstructor)
};

// ScriptStruct DeadByDaylight.CharacterSavedInventoryData
// 0x0010
struct FCharacterSavedInventoryData
{
	uint32_t                                           Version;                                                  // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FName                                       Name;                                                     // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DeadByDaylight.CharacterSavedProfileData
// 0x0118
struct FCharacterSavedProfileData
{
	int                                                BloodwebLevel;                                            // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PrestigeLevel;                                            // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                TimesConfronted;                                          // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	TArray<struct FDateTime>                           PrestigeEarnedDates;                                      // 0x0010(0x0010) (ZeroConstructor)
	struct FBloodWebPersistentData                     BloodWebData;                                             // 0x0020(0x0038)
	struct FPlayerLoadoutData                          CharacterLoadoutData;                                     // 0x0058(0x0080)
	TArray<struct FCharacterSavedInventoryData>        InventoryData;                                            // 0x00D8(0x0010) (ZeroConstructor)
	TArray<struct FSavedStatsData>                     StatProgression;                                          // 0x00E8(0x0010) (ZeroConstructor)
	TArray<struct FName>                               CurrentCustomization;                                     // 0x00F8(0x0010) (ZeroConstructor)
	TArray<struct FName>                               UniquePerksAdded;                                         // 0x0108(0x0010) (ZeroConstructor)
};

// ScriptStruct DeadByDaylight.PlayerSavedProfileDataLocal
// 0x0228
struct FPlayerSavedProfileDataLocal
{
	int                                                Tokens;                                                   // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<struct FName>                               Offerings;                                                // 0x0008(0x0010) (ZeroConstructor)
	TMap<struct FName, bool>                           PageVisited;                                              // 0x0018(0x0050) (ZeroConstructor)
	int                                                ConsecutiveMatchStreak;                                   // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Wins;                                                     // 0x006C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Losses;                                                   // 0x0070(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0074(0x0004) MISSED OFFSET
	uint64_t                                           CurrentSeasonTicks;                                       // 0x0078(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FDailyRitualContainer                       DailyRituals;                                             // 0x0080(0x0028)
	struct FFearMarketOfferingInstance                 FearMarket;                                               // 0x00A8(0x0020)
	struct FPlayerLoadoutData                          LastConnectedLoadout;                                     // 0x00C8(0x0080)
	int                                                LastConnectedCharacterIndex;                              // 0x0148(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x014C(0x0004) MISSED OFFSET
	struct FDateTime                                   DisconnectPenaltyTime;                                    // 0x0150(0x0008) (ZeroConstructor)
	struct FDateTime                                   LastMatchEndTime;                                         // 0x0158(0x0008) (ZeroConstructor)
	struct FDateTime                                   LastMatchStartTime;                                       // 0x0160(0x0008) (ZeroConstructor)
	struct FDateTime                                   LastKillerMatchEndTime;                                   // 0x0168(0x0008) (ZeroConstructor)
	struct FDateTime                                   LastSurvivorMatchEndTime;                                 // 0x0170(0x0008) (ZeroConstructor)
	int                                                _bloodpoints;                                             // 0x0178(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                _bonusBloodpoints;                                        // 0x017C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                _fearTokens;                                              // 0x0180(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0184(0x0004) MISSED OFFSET
	struct FDateTime                                   _ongoingGameTime;                                         // 0x0188(0x0008) (ZeroConstructor)
	struct FPlayerSavedProfileCumulativeData           _cumulativeData;                                          // 0x0190(0x0030)
	TArray<struct FSavedStatsData>                     _savedPlayerStats;                                        // 0x01C0(0x0010) (ZeroConstructor)
	bool                                               _fearTokensMigrated;                                      // 0x01D0(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               _hasBeenGivenKillerTutorialEndReward;                     // 0x01D1(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               _hasBeenGivenSurvivorTutorialEndReward;                   // 0x01D2(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x5];                                       // 0x01D3(0x0005) MISSED OFFSET
	TMap<int, struct FCharacterSavedProfileData>       _characterData;                                           // 0x01D8(0x0050) (ZeroConstructor)
};

// ScriptStruct DeadByDaylight.ConsoleUserSettings
// 0x0040
struct FConsoleUserSettings
{
	TArray<struct FInputActionKeyMapping>              ActionMappings;                                           // 0x0000(0x0010) (ZeroConstructor, SaveGame)
	TArray<struct FInputAxisKeyMapping>                AxisMappings;                                             // 0x0010(0x0010) (ZeroConstructor, SaveGame)
	int                                                MainVolume;                                               // 0x0020(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	int                                                MenuMusicVolume;                                          // 0x0024(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	bool                                               UseHeadphones;                                            // 0x0028(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData)
	bool                                               HideTutorial;                                             // 0x0029(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData)
	bool                                               MuteMusic;                                                // 0x002A(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData)
	bool                                               MuteOnFocusLost;                                          // 0x002B(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData)
	int                                                KillerControllerSensitivity;                              // 0x002C(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	int                                                SurvivorControllerSensitivity;                            // 0x0030(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	bool                                               InvertY;                                                  // 0x0034(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0035(0x0003) MISSED OFFSET
	int                                                HighestWeightSeenNews;                                    // 0x0038(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.PlayerSavedProfileData
// 0x02C0
struct FPlayerSavedProfileData
{
	class FString                                      PlayerUID;                                                // 0x0000(0x0010) (ZeroConstructor)
	struct FPlayerSavedProfileDataShared               SharedData;                                               // 0x0010(0x0048)
	struct FPlayerSavedProfileDataLocal                LocalData;                                                // 0x0058(0x0228)
	struct FConsoleUserSettings                        ConsoleUserSettings;                                      // 0x0280(0x0040)
};

// ScriptStruct DeadByDaylight.PlayerPersistentData
// 0x04C8
struct FPlayerPersistentData
{
	TEnumAsByte<EPlayerRole>                           GameRole;                                                 // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FPlayerLoadoutData                          StartingLoadout;                                          // 0x0008(0x0080) (Transient)
	struct FPlayerLoadoutData                          CurrentLoadout;                                           // 0x0088(0x0080) (Transient)
	unsigned char                                      UnknownData01[0x98];                                      // 0x0108(0x0098) MISSED OFFSET
	struct FDailyRitualInstance                        CachedAvailableRitual;                                    // 0x01A0(0x0058) (Transient)
	struct FPlayerSavedProfileData                     SavedData;                                                // 0x01F8(0x02C0)
	int                                                PreviousSlasherPips;                                      // 0x04B8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PreviousCamperPips;                                       // 0x04BC(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PreviousBloodpoints;                                      // 0x04C0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x04C4(0x0004) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.ScoreEvent
// 0x0010
struct FScoreEvent
{
	struct FName                                       ScoreTypeId;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              BloodpointsAwarded;                                       // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.ScoreEventArray
// 0x0010
struct FScoreEventArray
{
	TArray<struct FScoreEvent>                         Array;                                                    // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct DeadByDaylight.PlayerstateDataCache
// 0x0058
struct FPlayerstateDataCache
{
	TMap<struct FName, struct FScoreEventArray>        ScoreEvents;                                              // 0x0000(0x0050) (ZeroConstructor)
	float                                              TimeInactive;                                             // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.CachedPlayerScoreData
// 0x0100
struct FCachedPlayerScoreData
{
	class FString                                      PlayerId;                                                 // 0x0000(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0010(0x0010) MISSED OFFSET
	class FString                                      PlatformAccountId;                                        // 0x0020(0x0010) (ZeroConstructor)
	class FString                                      MirrorsId;                                                // 0x0030(0x0010) (ZeroConstructor)
	class FString                                      PlayerName;                                               // 0x0040(0x0010) (ZeroConstructor)
	int                                                CharacterId;                                              // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerScore;                                              // 0x0054(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerRank;                                               // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EGameState>                            PlayerGameState;                                          // 0x005C(0x0001) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EPlayerRole>                           Role;                                                     // 0x005D(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x005E(0x0002) MISSED OFFSET
	int                                                IsMyScore;                                                // 0x0060(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0064(0x0004) MISSED OFFSET
	struct FName                                       EquipedFavorId;                                           // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               EquipedPerks;                                             // 0x0070(0x0010) (ZeroConstructor)
	TArray<int>                                        EquipedPerkLevels;                                        // 0x0080(0x0010) (ZeroConstructor)
	struct FName                                       EquippedItemId;                                           // 0x0090(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               EquippedItemAddons;                                       // 0x0098(0x0010) (ZeroConstructor)
	struct FPlayerstateDataCache                       PlayerstateDataCache;                                     // 0x00A8(0x0058)
};

// ScriptStruct DeadByDaylight.CloudInventoryItem
// 0x0010
struct FCloudInventoryItem
{
	int                                                DefinitionId;                                             // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	uint64_t                                           InstanceId;                                               // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DeadByDaylight.GameEventDispatcherHandle
// 0x0018
struct FGameEventDispatcherHandle
{
	struct FScriptDelegate                             GameEventDelegate;                                        // 0x0000(0x0014) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference)
	struct FGameplayTag                                Filter;                                                   // 0x0010(0x0008) (Edit, BlueprintVisible)
};

// ScriptStruct DeadByDaylight.GameEventData
// 0x0018
struct FGameEventData
{
	class ADBDPlayer*                                  Instigator;                                               // 0x0000(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class AActor*                                      Target;                                                   // 0x0008(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	float                                              PercentToAward;                                           // 0x0010(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.StatusViewSource
// 0x0020
struct FStatusViewSource
{
	struct FName                                       SourceID;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsActive;                                                 // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	float                                              PercentageFill;                                           // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Level;                                                    // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInventoryItemType>                    SourceType;                                               // 0x0014(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	int                                                SourceIconIndex;                                          // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                SourceLevel;                                              // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DeadByDaylight.Float_NetQuantize8
// 0x0008
struct FFloat_NetQuantize8
{
	float                                              _value;                                                   // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.DBDTimer
// 0x0020
struct FDBDTimer
{
	float                                              _startTime;                                               // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               _startTimeDirty;                                          // 0x0004(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	struct FFloat_NetQuantize8                         _timeLeft;                                                // 0x0008(0x0008)
	bool                                               _replicateTimeLeft;                                       // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xB];                                       // 0x0011(0x000B) MISSED OFFSET
	float                                              _interpSpeed;                                             // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DeadByDaylight.GamePlayModifier
// 0x0018
struct FGamePlayModifier
{
	TEnumAsByte<EGameplayModifierType>                 ModifierType;                                             // 0x0000(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FGameplayTag                                Type;                                                     // 0x0008(0x0008) (Edit, BlueprintVisible)
	float                                              ModifierValue;                                            // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.GameplayModifierData
// 0x0040
struct FGameplayModifierData
{
	TArray<class UClass*>                              Conditions;                                               // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FGamePlayModifier>                   Modifiers;                                                // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<TEnumAsByte<EGameplayModifierFlag>>         Flags;                                                    // 0x0020(0x0010) (ZeroConstructor, Deprecated)
	TArray<struct FGameplayTag>                        TaggedFlags;                                              // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct DeadByDaylight.GameplayNotificationData
// 0x0050
struct FGameplayNotificationData
{
	struct FName                                       SourceID;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInventoryItemType>                    SourceType;                                               // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	int                                                SourceIconIndex;                                          // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                SourceLevel;                                              // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FName                                       EffectID;                                                 // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class FString                                      EffectIconFilePath;                                       // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TEnumAsByte<EStatusEffectType>                     EffectType;                                               // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
	struct FText                                       EffectDisplayName;                                        // 0x0038(0x0018) (Edit, BlueprintVisible)
};

// ScriptStruct DeadByDaylight.CamperStateData
// 0x0020
struct FCamperStateData
{
	int                                                CamperSkulls;                                             // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FName                                       EquipedItemId;                                            // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               EquipedItemAddonIds;                                      // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct DeadByDaylight.SlasherStateData
// 0x0020
struct FSlasherStateData
{
	int                                                SlasherSkulls;                                            // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FName                                       EquipedPowerId;                                           // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               EquipedPowerAddonIds;                                     // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct DeadByDaylight.PlayerStateData
// 0x0048
struct FPlayerStateData
{
	int                                                CharacterLevel;                                           // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FName                                       EquipedFavorId;                                           // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               EquipedPerkIds;                                           // 0x0010(0x0010) (ZeroConstructor)
	TArray<int>                                        EquipedPerkLevels;                                        // 0x0020(0x0010) (ZeroConstructor)
	TArray<struct FName>                               CustomizationMesh;                                        // 0x0030(0x0010) (ZeroConstructor)
	bool                                               IsLeavingMatch;                                           // 0x0040(0x0001) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EGameState>                            _playerGameState;                                         // 0x0041(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0042(0x0002) MISSED OFFSET
	int                                                _prestigeLevel;                                           // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DeadByDaylight.SkillCheckInteractionData
// 0x0020
struct FSkillCheckInteractionData
{
	bool                                               IsActive;                                                 // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              HitAreaStart;                                             // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              HitAreaLength;                                            // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              BonusAreaLength;                                          // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Progress;                                                 // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               IsHexed;                                                  // 0x0014(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	int                                                xOffset;                                                  // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                yOffset;                                                  // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DeadByDaylight.UserGameStats
// 0x00B0
struct FUserGameStats
{
	bool                                               Disconnected;                                             // 0x0000(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                FearTokens;                                               // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Skulls;                                                   // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	TMap<TEnumAsByte<EDBDScoreCategory>, int>          BonusBloodpoints;                                         // 0x0010(0x0050) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData02[0x50];                                      // 0x0060(0x0050) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.OngoingScoreData
// 0x0010
struct FOngoingScoreData
{
	TEnumAsByte<EDBDScoreTypes>                        ScoreType;                                                // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              TimeSinceScore;                                           // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ApplyScoreTimeout;                                        // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              AccumulatedPercent;                                       // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DeadByDaylight.DBDRecentGameplayEvents
// 0x0050
struct FDBDRecentGameplayEvents
{
	TMap<TEnumAsByte<EDBDScoreTypes>, struct FDateTime> _recentGameplayEvents;                                    // 0x0000(0x0050) (ZeroConstructor)
};

// ScriptStruct DeadByDaylight.TrackedActivityEvent
// 0x0008
struct FTrackedActivityEvent
{
	TEnumAsByte<EDBDScoreTypes>                        TrackedEvent;                                             // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                Count;                                                    // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DeadByDaylight.ClippedActor
// 0x0060
struct FClippedActor
{
	TArray<TWeakObjectPtr<class USceneComponent>>      DisplayComponents;                                        // 0x0000(0x0010) (ExportObject, ZeroConstructor, Transient)
	TMap<class UPrimitiveComponent*, TWeakObjectPtr<class UPrimitiveComponent>> CollidingPrimitives;                                      // 0x0010(0x0050) (ExportObject, ZeroConstructor, Transient)
};

// ScriptStruct DeadByDaylight.TileProperties
// 0x0070
struct FTileProperties
{
	unsigned char                                      UnknownData00[0x70];                                      // 0x0000(0x0070) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.Dependency
// 0x0028
struct FDependency
{
	TEnumAsByte<ETileSpawnPointType>                   Type;                                                     // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FStringAssetReference                       AssetReference;                                           // 0x0008(0x0010) (Edit, ZeroConstructor)
	class UClass*                                      Object;                                                   // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               Unique;                                                   // 0x0020(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
	int                                                Count;                                                    // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DeadByDaylight.SpawnInfo
// 0x0040
struct FSpawnInfo
{
	class UClass*                                      ActorClass;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FTransform                                  Transform;                                                // 0x0010(0x0030) (IsPlainOldData)
};

// ScriptStruct DeadByDaylight.ActorSpawnerProperties
// 0x0028
struct FActorSpawnerProperties
{
	TAssetPtr<class UClass>                            SceneElement;                                             // 0x0000(0x0020) (Edit, BlueprintVisible)
	float                                              Weight;                                                   // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.ActorVariationElements
// 0x0028
struct FActorVariationElements
{
	TEnumAsByte<ETileVariation>                        Type;                                                     // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TAssetPtr<class UClass>                            Element;                                                  // 0x0008(0x0020) (Edit, BlueprintVisible)
};

// ScriptStruct DeadByDaylight.AnimationMontageDescriptor
// 0x0018
struct FAnimationMontageDescriptor
{
	struct FName                                       MontageID;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               Tags;                                                     // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct DeadByDaylight.AssetLibraryLoader
// 0x0090
struct FAssetLibraryLoader
{
	class UAssetLibrary*                               AssetLibrary;                                             // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x88];                                      // 0x0008(0x0088) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.MontageInstanceInfo
// 0x0028
struct FMontageInstanceInfo
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.Offering
// 0x0130
struct FOffering
{
	unsigned char                                      UnknownData00[0x130];                                     // 0x0000(0x0130) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.DataTableProxy
// 0x0030
struct FDataTableProxy
{
	TAssetPtr<class UDataTable>                        AssetPtr;                                                 // 0x0000(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UDataTable*                                  _dataTable;                                               // 0x0020(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.EffectCameraTypeSettings
// 0x0003
struct FEffectCameraTypeSettings
{
	TEnumAsByte<ECustomizationCategory>                Category;                                                 // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               VisibilityInFirstPerson;                                  // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               VisibilityInThirdPerson;                                  // 0x0002(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DeadByDaylight.InteractionPlayerProperties
// 0x0048
struct FInteractionPlayerProperties
{
	struct FVector_NetQuantize                         AverageVelocityAtStart;                                   // 0x0000(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)
	float                                              StaminaAtStart;                                           // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	struct FVector_NetQuantize                         PlayerPositionAtStart;                                    // 0x0010(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	class ADBDPlayer*                                  Requester;                                                // 0x0020(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	struct FVector_NetQuantize                         SnapPositionAtStart;                                      // 0x0028(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)
	struct FRotator                                    SnapRotationAtStart;                                      // 0x0034(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              SnapDistanceAtStart;                                      // 0x0040(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              SnapTimeAtStart;                                          // 0x0044(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
};

// ScriptStruct DeadByDaylight.AnimData
// 0x0001
struct FAnimData
{
	TEnumAsByte<ECharacterStance>                      Stance;                                                   // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DeadByDaylight.LaunchInfo
// 0x001C
struct FLaunchInfo
{
	struct FVector                                     StartPosition;                                            // 0x0000(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Direction;                                                // 0x000C(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Speed;                                                    // 0x0018(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DeadByDaylight.ImpactInfo
// 0x0040
struct FImpactInfo
{
	struct FVector                                     Position;                                                 // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class AActor*                                      Actor;                                                    // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         Component;                                                // 0x0018(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class FString                                      SurfaceName;                                              // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FVector                                     ImpactNormal;                                             // 0x0030(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.NodeRarityDistribution
// 0x0018
struct FNodeRarityDistribution
{
	TArray<int>                                        Weights;                                                  // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                MinCount;                                                 // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxCount;                                                 // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DeadByDaylight.RarityRingDistribution
// 0x0010
struct FRarityRingDistribution
{
	TArray<int>                                        Weights;                                                  // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct DeadByDaylight.NodeContentDistribution
// 0x000C
struct FNodeContentDistribution
{
	int                                                Weight;                                                   // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MinCount;                                                 // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxCount;                                                 // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DeadByDaylight.YawAndPitchRotator_NetQuantize16
// 0x000C
struct FYawAndPitchRotator_NetQuantize16
{
	struct FRotator                                    _value;                                                   // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DeadByDaylight.CharacterToolData
// 0x0048
struct FCharacterToolData
{
	TEnumAsByte<EPlayerRole>                           Role;                                                     // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                CharacterId;                                              // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       OutfitId;                                                 // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       SurvivorHead;                                             // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       SurvivorTorso;                                            // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       SurvivorLegs;                                             // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       KillerHead;                                               // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       KillerBody;                                               // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       KillerWeapon;                                             // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAnimationAsset*                             AnimationToPlay;                                          // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DeadByDaylight.NamedButton
// 0x0018
struct FNamedButton
{
	int                                                ClickCounter;                                             // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class FString                                      DisplayName;                                              // 0x0008(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct DeadByDaylight.ScreenshotViewSetting
// 0x0028
struct FScreenshotViewSetting
{
	float                                              Distance;                                                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LateralOffset;                                            // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              HeightOffset;                                             // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CharacterYaw;                                             // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CharacterRoll;                                            // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CharacterPitch;                                           // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CameraPitch;                                              // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	struct FName                                       SocketName;                                               // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DeadByDaylight.RoleDropdown
// 0x0002
struct FRoleDropdown
{
	bool                                               ShowRoleSelection;                                        // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EPlayerRole>                           Role;                                                     // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DeadByDaylight.CharacterDropdown
// 0x0006 (0x0008 - 0x0002)
struct FCharacterDropdown : public FRoleDropdown
{
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	int                                                CharacterId;                                              // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DeadByDaylight.RoleItemCategoryDropdown
// 0x0004 (0x000C - 0x0008)
struct FRoleItemCategoryDropdown : public FCharacterDropdown
{
	bool                                               IncludeOutfits;                                           // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECustomizationCategory>                Category;                                                 // 0x0009(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x000A(0x0002) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.GenderViewSetting
// 0x0038
struct FGenderViewSetting
{
	struct FRoleItemCategoryDropdown                   RoleItemCategory;                                         // 0x0000(0x000C) (Edit)
	TEnumAsByte<EGender>                               Gender;                                                   // 0x000C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	struct FScreenshotViewSetting                      Settings;                                                 // 0x0010(0x0028) (Edit)
};

// ScriptStruct DeadByDaylight.CharacterItemCategoryViewSetting
// 0x0038
struct FCharacterItemCategoryViewSetting
{
	struct FRoleItemCategoryDropdown                   CharacterDropdown;                                        // 0x0000(0x000C) (Edit)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FScreenshotViewSetting                      Settings;                                                 // 0x0010(0x0028) (Edit)
};

// ScriptStruct DeadByDaylight.ItemIdDropdown
// 0x0008
struct FItemIdDropdown
{
	struct FName                                       ItemId;                                                   // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DeadByDaylight.ItemViewSetting
// 0x0030
struct FItemViewSetting
{
	struct FItemIdDropdown                             Item;                                                     // 0x0000(0x0008) (Edit)
	struct FScreenshotViewSetting                      Settings;                                                 // 0x0008(0x0028) (Edit)
};

// ScriptStruct DeadByDaylight.RoleGenderViewSetting
// 0x0030
struct FRoleGenderViewSetting
{
	struct FRoleDropdown                               RoleDropdown;                                             // 0x0000(0x0002) (Edit)
	TEnumAsByte<EGender>                               Gender;                                                   // 0x0002(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x0003(0x0005) MISSED OFFSET
	struct FScreenshotViewSetting                      Settings;                                                 // 0x0008(0x0028) (Edit)
};

// ScriptStruct DeadByDaylight.CharacterViewSetting
// 0x0030
struct FCharacterViewSetting
{
	struct FCharacterDropdown                          CharacterDropdown;                                        // 0x0000(0x0008) (Edit)
	struct FScreenshotViewSetting                      Settings;                                                 // 0x0008(0x0028) (Edit)
};

// ScriptStruct DeadByDaylight.CharacterAnimationDropdown
// 0x001C (0x0028 - 0x000C)
struct FCharacterAnimationDropdown : public FRoleItemCategoryDropdown
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class UAnimationAsset*                             Animation;                                                // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class FString                                      AnimationPath;                                            // 0x0018(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct DeadByDaylight.CharacterAnimation
// 0x0028
struct FCharacterAnimation
{
	struct FCharacterAnimationDropdown                 Data;                                                     // 0x0000(0x0028) (Edit)
};

// ScriptStruct DeadByDaylight.ChargeData
// 0x0010
struct FChargeData
{
	class AActor*                                      Instigator;                                               // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              ChargeAmount;                                             // 0x0008(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.MaterialOriginalState
// 0x0018
struct FMaterialOriginalState
{
	class UMeshComponent*                              MeshWithChangedMaterials;                                 // 0x0000(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	TArray<class UMaterialInterface*>                  OriginalMaterial;                                         // 0x0008(0x0010) (ZeroConstructor, Transient)
};

// ScriptStruct DeadByDaylight.DataTableDropdown
// 0x0020
struct FDataTableDropdown
{
	struct FName                                       RowValue;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class FString                                      DataTableName;                                            // 0x0008(0x0010) (Edit, ZeroConstructor)
	struct FName                                       ColumnName;                                               // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DeadByDaylight.CustomizedMeshPart
// 0x0030
struct FCustomizedMeshPart
{
	TEnumAsByte<ECustomizationCategory>                Category;                                                 // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FDataTableDropdown                          DefaultItemId;                                            // 0x0008(0x0020) (Edit)
	struct FName                                       SocketName;                                               // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DeadByDaylight.MapMeshToAkAudioEvent
// 0x0018
struct FMapMeshToAkAudioEvent
{
	class UStaticMesh*                                 Mesh;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               SoundEvent;                                               // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinDelayBetweenEvents;                                    // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinDelayBetweenObject;                                    // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DeadByDaylight.MapSoundsToAvoid
// 0x0010
struct FMapSoundsToAvoid
{
	class UPrimitiveComponent*                         Component;                                                // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.DBD_SoundSpawnerData
// 0x0028
struct FDBD_SoundSpawnerData
{
	TArray<TAssetPtr<class UClass>>                    TriggerObject;                                            // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               TriggerVisualForCamper;                                   // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               TriggerVisualForSlasher;                                  // 0x0011(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0012(0x0006) MISSED OFFSET
	TArray<TAssetPtr<class UClass>>                    ActorToSpawnVisual;                                       // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct DeadByDaylight.AuthenticationInfo
// 0x0018
struct FAuthenticationInfo
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.RankDefinition
// 0x0004
struct FRankDefinition
{
	int                                                PipsRequired;                                             // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DeadByDaylight.RankResetStartingPips
// 0x0004
struct FRankResetStartingPips
{
	int                                                NewPipAmount;                                             // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DeadByDaylight.SectionLenghtsProperties
// 0x0008
struct FSectionLenghtsProperties
{
	TEnumAsByte<EDirection>                            Direction;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                Lenght;                                                   // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DeadByDaylight.QuadrantSpawnTypeProperties
// 0x0018
struct FQuadrantSpawnTypeProperties
{
	TEnumAsByte<EQuadrantSpawnType>                    QuadrantSpawnType;                                        // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TArray<struct FSectionLenghtsProperties>           SectionLenghts;                                           // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct DeadByDaylight.WeightedItem
// 0x0028
struct FWeightedItem
{
	TAssetPtr<class UClass>                            Element;                                                  // 0x0000(0x0020) (Edit, BlueprintVisible)
	float                                              Weight;                                                   // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.QuadrantSpawnItem
// 0x0018
struct FQuadrantSpawnItem
{
	TEnumAsByte<EQuadrantSpawnType>                    Type;                                                     // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TArray<struct FWeightedItem>                       Elements;                                                 // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct DeadByDaylight.QuadrantSpawnCategories
// 0x0018
struct FQuadrantSpawnCategories
{
	struct FName                                       QuadrantSpawnTag;                                         // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FQuadrantSpawnItem>                  Items;                                                    // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct DeadByDaylight.ElementSubstitutions
// 0x0010
struct FElementSubstitutions
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.GameplayElementSubstitutions
// 0x0028 (0x0038 - 0x0010)
struct FGameplayElementSubstitutions : public FElementSubstitutions
{
	TAssetPtr<class UClass>                            _element;                                                 // 0x0010(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly)
	TEnumAsByte<EGameplayElementType>                  _type;                                                    // 0x0030(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.ThemeProperties
// 0x0080
struct FThemeProperties
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       Weather;                                                  // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class FString                                      TilePath;                                                 // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class FString                                      MapPath;                                                  // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                ThemeNumber;                                              // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	struct FText                                       DisplayName;                                              // 0x0038(0x0018) (Edit, BlueprintVisible)
	TEnumAsByte<EThemeColorId>                         ThemeColorId;                                             // 0x0050(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EOfferingEffectType>                   ThemeSelectionOfferingEffectType;                         // 0x0051(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0052(0x0006) MISSED OFFSET
	TArray<struct FGameplayElementSubstitutions>       SubstitutionElements;                                     // 0x0058(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              Weight;                                                   // 0x0068(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
	class FString                                      DlcIDString;                                              // 0x0070(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct DeadByDaylight.KillerItemProperty
// 0x0030
struct FKillerItemProperty
{
	TAssetPtr<class UClass>                            Object;                                                   // 0x0000(0x0020) (Edit)
	class UCurveFloat*                                 Population;                                               // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EGameplayElementType>                  _gameplayElementType;                                     // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.KillerItemDependencies
// 0x0018
struct FKillerItemDependencies
{
	TEnumAsByte<EKillerAbilities>                      KillerAbility;                                            // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TArray<struct FKillerItemProperty>                 Items;                                                    // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct DeadByDaylight.SurvivorItemProperties
// 0x000C
struct FSurvivorItemProperties
{
	TEnumAsByte<ECollectableCategory>                  Category;                                                 // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              Weight;                                                   // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxPopulation;                                            // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DeadByDaylight.EscapeStrategyProperty
// 0x0018
struct FEscapeStrategyProperty
{
	TEnumAsByte<EscapeStrategyType>                    Type;                                                     // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class UCurveFloat*                                 Population;                                               // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Weight;                                                   // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.EscapeTypeObjects
// 0x0018
struct FEscapeTypeObjects
{
	TEnumAsByte<EscapeStrategyType>                    Type;                                                     // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TArray<TAssetPtr<class UClass>>                    EscapeObjects;                                            // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct DeadByDaylight.GameplayElementsPopulation
// 0x0030
struct FGameplayElementsPopulation
{
	TEnumAsByte<EGameplayElementType>                  Type;                                                     // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TAssetPtr<class UClass>                            GameplayElementBlueprint;                                 // 0x0008(0x0020) (Edit)
	int                                                MinPopulation;                                            // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxPopulation;                                            // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DeadByDaylight.ManagedGameplayElementsPopulation
// 0x0010
struct FManagedGameplayElementsPopulation
{
	TEnumAsByte<EGameplayElementType>                  Type;                                                     // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              MinDistance;                                              // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MinPopulation;                                            // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxPopulation;                                            // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DeadByDaylight.SurvivorGroupingProbability
// 0x0008
struct FSurvivorGroupingProbability
{
	TEnumAsByte<ESurvivorGrouping>                     Type;                                                     // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              Probability;                                              // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DeadByDaylight.SubstitutionElements
// 0x0040
struct FSubstitutionElements
{
	TAssetPtr<class UClass>                            _elementToReplace;                                        // 0x0000(0x0020) (Edit)
	TAssetPtr<class UClass>                            _elementToReplaceWith;                                    // 0x0020(0x0020) (Edit)
};

// ScriptStruct DeadByDaylight.DependencyElementSubstitutions
// 0x0018 (0x0028 - 0x0010)
struct FDependencyElementSubstitutions : public FElementSubstitutions
{
	TArray<struct FSubstitutionElements>               _replacements;                                            // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TEnumAsByte<ETileSpawnPointType>                   _type;                                                    // 0x0020(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.EventSubstitionData
// 0x0030
struct FEventSubstitionData
{
	struct FName                                       _name;                                                    // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                _baseNumOfSubstitutionPerGroup;                           // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	TArray<struct FGameplayElementSubstitutions>       _gameplaySubstitutionElements;                            // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FDependencyElementSubstitutions>     _dependencySubstitutionElements;                          // 0x0020(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct DeadByDaylight.SpecialEventObjectiveData
// 0x0170
struct FSpecialEventObjectiveData
{
	struct FName                                       ObjectiveId;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FText                                       Title;                                                    // 0x0008(0x0018) (Edit)
	struct FText                                       Description;                                              // 0x0020(0x0018) (Edit)
	class FString                                      IconPath;                                                 // 0x0038(0x0010) (Edit, ZeroConstructor)
	struct FText                                       CompletedTitle;                                           // 0x0048(0x0018) (Edit)
	struct FText                                       CompletedDescription;                                     // 0x0060(0x0018) (Edit)
	struct FName                                       RewardId;                                                 // 0x0078(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class FString                                      LockedRewardGenericIconPath;                              // 0x0080(0x0010) (Edit, ZeroConstructor)
	class FString                                      UnlockedRewardGenericIconPath;                            // 0x0090(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0xD0];                                      // 0x00A0(0x00D0) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.SpecialEventData
// 0x00A0 (0x00A8 - 0x0008)
struct FSpecialEventData : public FTableRowBase
{
	struct FName                                       EventId;                                                  // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class FString                                      StartTime;                                                // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class FString                                      EndTime;                                                  // 0x0020(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FText                                       EventName;                                                // 0x0030(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	class FString                                      EventBannerLabel;                                         // 0x0048(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FSpecialEventObjectiveData>          Objectives;                                               // 0x0058(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FColor                                      ObjectOutlineColour;                                      // 0x0068(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
	class FString                                      BloodwebCollectSoundEvent;                                // 0x0070(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class FString                                      LobbyName;                                                // 0x0080(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FName                                       SpecialMusicState;                                        // 0x0090(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0098(0x0010) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.PerkLevelDefinition
// 0x0004
struct FPerkLevelDefinition
{
	int                                                CountRequired;                                            // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DeadByDaylight.CharacterCustomizationDropdown
// 0x0038 (0x0040 - 0x0008)
struct FCharacterCustomizationDropdown : public FCharacterDropdown
{
	struct FName                                       OutfitId;                                                 // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       SurvivorHead;                                             // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       SurvivorTorso;                                            // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       SurvivorLegs;                                             // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       KillerHead;                                               // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       KillerBody;                                               // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       KillerWeapon;                                             // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DeadByDaylight.DebugLoadoutAddon
// 0x0020
struct FDebugLoadoutAddon
{
	struct FDataTableDropdown                          AddonID;                                                  // 0x0000(0x0020) (Edit)
};

// ScriptStruct DeadByDaylight.DebugLoadoutPerk
// 0x0028
struct FDebugLoadoutPerk
{
	struct FDataTableDropdown                          PerkID;                                                   // 0x0000(0x0020) (Edit)
	int                                                PerkLevel;                                                // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.CamperLoadout
// 0x0080
struct FCamperLoadout
{
	struct FCharacterCustomizationDropdown             camper;                                                   // 0x0000(0x0040) (Edit)
	struct FDataTableDropdown                          ItemId;                                                   // 0x0040(0x0020) (Edit)
	TArray<struct FDebugLoadoutAddon>                  AddonIDs;                                                 // 0x0060(0x0010) (Edit, ZeroConstructor)
	TArray<struct FDebugLoadoutPerk>                   Perks;                                                    // 0x0070(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct DeadByDaylight.SlasherLoadout
// 0x0060
struct FSlasherLoadout
{
	struct FCharacterCustomizationDropdown             Slasher;                                                  // 0x0000(0x0040) (Edit)
	TArray<struct FDebugLoadoutAddon>                  PowerAddonIDs;                                            // 0x0040(0x0010) (Edit, ZeroConstructor)
	TArray<struct FDebugLoadoutPerk>                   Perks;                                                    // 0x0050(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct DeadByDaylight.CameraAttachment
// 0x0010
struct FCameraAttachment
{
	class USceneComponent*                             Parent;                                                   // 0x0000(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       SocketName;                                               // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DeadByDaylight.ChaseTimer
// 0x0030
struct FChaseTimer
{
	struct FDBDTimer                                   CooldownTimer;                                            // 0x0000(0x0020) (Transient)
	float                                              TotalChaseTime;                                           // 0x0020(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	class ACamperPlayer*                               camper;                                                   // 0x0028(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct DeadByDaylight.ItemUIData
// 0x0040
struct FItemUIData
{
	struct FText                                       DisplayName;                                              // 0x0000(0x0018) (Edit)
	struct FText                                       Description;                                              // 0x0018(0x0018) (Edit)
	TArray<class FString>                              IconFilePathList;                                         // 0x0030(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct DeadByDaylight.ItemAvailability
// 0x0030
struct FItemAvailability
{
	bool                                               Disabled;                                                 // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class FString                                      DLCId;                                                    // 0x0008(0x0010) (Edit, ZeroConstructor)
	int                                                CloudInventoryId;                                         // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	class FString                                      CommunityId;                                              // 0x0020(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct DeadByDaylight.CustomizationData
// 0x0080 (0x0088 - 0x0008)
struct FCustomizationData : public FTableRowBase
{
	struct FName                                       ID;                                                       // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                AssociatedCharacter;                                      // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EItemRarity>                           Rarity;                                                   // 0x0014(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	struct FItemUIData                                 UIData;                                                   // 0x0018(0x0040) (Edit)
	struct FItemAvailability                           Availability;                                             // 0x0058(0x0030) (Edit)
};

// ScriptStruct DeadByDaylight.MaterialReplacerData
// 0x0040 (0x0048 - 0x0008)
struct FMaterialReplacerData : public FTableRowBase
{
	TAssetPtr<class UMaterialInterface>                From;                                                     // 0x0008(0x0020) (Edit)
	TAssetPtr<class UMaterialInterface>                To;                                                       // 0x0028(0x0020) (Edit)
};

// ScriptStruct DeadByDaylight.BPAttachementSocketData
// 0x0058 (0x0060 - 0x0008)
struct FBPAttachementSocketData : public FTableRowBase
{
	TAssetPtr<class UClass>                            AttachementBlueprint;                                     // 0x0008(0x0020) (Edit)
	TAssetPtr<class USkeletalMesh>                     SkeletalMesh;                                             // 0x0028(0x0020) (Edit)
	struct FName                                       SocketName;                                               // 0x0048(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FMaterialReplacerData>               MaterialsMap;                                             // 0x0050(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct DeadByDaylight.UnlockSaveStatCondition
// 0x0010 (0x0018 - 0x0008)
struct FUnlockSaveStatCondition : public FTableRowBase
{
	struct FName                                       StatName;                                                 // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ValueRequired;                                            // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               isCharacterSpecific;                                      // 0x0014(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.CustomizationItemData
// 0x00E0 (0x0168 - 0x0088)
struct FCustomizationItemData : public FCustomizationData
{
	TEnumAsByte<ECustomizationCategory>                Category;                                                 // 0x0088(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0089(0x0007) MISSED OFFSET
	TAssetPtr<class USkeletalMesh>                     ItemMesh;                                                 // 0x0090(0x0020) (Edit)
	TAssetPtr<class UClass>                            ItemBlueprint;                                            // 0x00B0(0x0020) (Edit)
	TArray<struct FMaterialReplacerData>               MaterialsMap;                                             // 0x00D0(0x0010) (Edit, ZeroConstructor)
	struct FText                                       VariationName;                                            // 0x00E0(0x0018) (Edit)
	struct FText                                       VariationDescription;                                     // 0x00F8(0x0018) (Edit)
	TArray<struct FGameplayTag>                        VariationTags;                                            // 0x0110(0x0010) (Edit, ZeroConstructor)
	int                                                PrestigeUlockLevel;                                       // 0x0120(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0124(0x0004) MISSED OFFSET
	class FString                                      PrestigeUnlockDate;                                       // 0x0128(0x0010) (ZeroConstructor)
	struct FName                                       EventId;                                                  // 0x0138(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FBPAttachementSocketData>            SocketAttachements;                                       // 0x0140(0x0010) (Edit, ZeroConstructor)
	TArray<struct FUnlockSaveStatCondition>            UnlockingConditions;                                      // 0x0150(0x0010) (Edit, ZeroConstructor)
	bool                                               IsDarkPart;                                               // 0x0160(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               IsInStore;                                                // 0x0161(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               IsInNonViolentBuild;                                      // 0x0162(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x5];                                       // 0x0163(0x0005) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.DBDCustomizationToolData
// 0x0618
struct FDBDCustomizationToolData
{
	struct FCustomizationItemData                      Head;                                                     // 0x0000(0x0168) (Edit)
	struct FCustomizationItemData                      Torso;                                                    // 0x0168(0x0168) (Edit)
	struct FCustomizationItemData                      Leg;                                                      // 0x02D0(0x0168) (Edit)
	struct FCustomizationItemData                      Bodies;                                                   // 0x0438(0x0168) (Edit)
	class FString                                      CharacterName;                                            // 0x05A0(0x0010) (Edit, ZeroConstructor)
	class FString                                      RoleName;                                                 // 0x05B0(0x0010) (Edit, ZeroConstructor)
	class USkeletalMesh*                               BaseSkeleton;                                             // 0x05C0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  MaskTexture;                                              // 0x05C8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAnimationAsset*                             AnimationToPlay;                                          // 0x05D0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class FString                                      StrHeadDLC;                                               // 0x05D8(0x0010) (Edit, ZeroConstructor)
	class FString                                      StrTorsoDLC;                                              // 0x05E8(0x0010) (Edit, ZeroConstructor)
	class FString                                      StrLegDLC;                                                // 0x05F8(0x0010) (Edit, ZeroConstructor)
	class FString                                      StrBodiesDLC;                                             // 0x0608(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct DeadByDaylight.BuiltLevelData
// 0x0038
struct FBuiltLevelData
{
	struct FName                                       ThemeName;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       ThemeWeather;                                             // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	class FString                                      MapName;                                                  // 0x0010(0x0010) (ZeroConstructor)
	int                                                TileCount;                                                // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	TArray<struct FDependency>                         Dependencies;                                             // 0x0028(0x0010) (ZeroConstructor)
};

// ScriptStruct DeadByDaylight.SelectedOffering
// 0x0010
struct FSelectedOffering
{
	int                                                ownerId;                                                  // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FName                                       OfferingName;                                             // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DeadByDaylight.OfferingData
// 0x0018
struct FOfferingData
{
	bool                                               OfferingReady;                                            // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TArray<struct FSelectedOffering>                   Offerings;                                                // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct DeadByDaylight.DBDJoinParamSetting
// 0x0020
struct FDBDJoinParamSetting
{
	class FString                                      Key;                                                      // 0x0000(0x0010) (ZeroConstructor)
	class FString                                      Value;                                                    // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct DeadByDaylight.ServerJoiningData
// 0x0030
struct FServerJoiningData
{
	uint64_t                                           SessionId;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class FString                                      SessionIdStr;                                             // 0x0008(0x0010) (ZeroConstructor)
	TEnumAsByte<EServerJoiningDataType>                Step;                                                     // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
	TArray<struct FDBDJoinParamSetting>                Settings;                                                 // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct DeadByDaylight.LightingSpecifics
// 0x0028
struct FLightingSpecifics
{
	TAssetPtr<class UClass>                            LightBlueprint;                                           // 0x0000(0x0020) (Edit, DisableEditOnInstance)
	float                                              MaxExposure;                                              // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinExposure;                                              // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DeadByDaylight.SceneLightingDescription
// 0x0058
struct FSceneLightingDescription
{
	struct FName                                       ThemeName;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FLightingSpecifics                          LightingDetailsLowMedium;                                 // 0x0008(0x0028) (Edit)
	struct FLightingSpecifics                          LightingDetailsHighUltra;                                 // 0x0030(0x0028) (Edit)
};

// ScriptStruct DeadByDaylight.ParadiseData
// 0x0028
struct FParadiseData
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.KeyDisplayInfo
// 0x0020
struct FKeyDisplayInfo
{
	class FString                                      KeyDisplayName;                                           // 0x0000(0x0010) (ZeroConstructor)
	class FString                                      PromptType;                                               // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct DeadByDaylight.PendingReport
// 0x0038
struct FPendingReport
{
	unsigned char                                      UnknownData00[0x38];                                      // 0x0000(0x0038) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.MeshHandle
// 0x0018
struct FMeshHandle
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.PlayerDataSync
// 0x0070
struct FPlayerDataSync
{
	struct FPlayerStateData                            PlayerData;                                               // 0x0000(0x0048)
	TArray<struct FName>                               CustomizationMesh;                                        // 0x0048(0x0010) (ZeroConstructor)
	struct FName                                       EquipedItemId;                                            // 0x0058(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               EquipedItemAddonIds;                                      // 0x0060(0x0010) (ZeroConstructor)
};

// ScriptStruct DeadByDaylight.EffectsLocatorTargets
// 0x0008
struct FEffectsLocatorTargets
{
	class UClass*                                      TargetActorClass;                                         // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DeadByDaylight.FirecrackerEffectData
// 0x0010
struct FFirecrackerEffectData
{
	class AFirecracker*                                Firecracker;                                              // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsInRange;                                                // 0x0008(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               IsFirstTime;                                              // 0x0009(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x000A(0x0006) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.FootStep
// 0x0028
struct FFootStep
{
	class UDecalComponent*                             Decal;                                                    // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0008(0x0020) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.HookAnalyticsController
// 0x00F0
struct FHookAnalyticsController
{
	unsigned char                                      UnknownData00[0xF0];                                      // 0x0000(0x00F0) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.MontagePlaybackDefinition
// 0x0020
struct FMontagePlaybackDefinition
{
	struct FAnimationMontageDescriptor                 Descriptor;                                               // 0x0000(0x0018) (BlueprintVisible, BlueprintReadOnly)
	float                                              PlayRate;                                                 // 0x0018(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               Follower;                                                 // 0x001C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.Lock
// 0x0008
struct FLock
{
	TWeakObjectPtr<class UObject>                      _lockingObject;                                           // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DeadByDaylight.LoudNoiseIndicatorData
// 0x0020
struct FLoudNoiseIndicatorData
{
	class UStaticMeshComponent*                        MeshMask;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        DistortionMesh;                                           // 0x0008(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     Location;                                                 // 0x0010(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RemainingTime;                                            // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DeadByDaylight.MaterialMap
// 0x0010
struct FMaterialMap
{
	class UMaterialInterface*                          SrcMaterial;                                              // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          DstMaterial;                                              // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DeadByDaylight.MaterialNamedGroup
// 0x0020
struct FMaterialNamedGroup
{
	class FString                                      GroupName;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FMaterialMap>                        Maps;                                                     // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct DeadByDaylight.MaterialHelperOriginalMeshState
// 0x0048
struct FMaterialHelperOriginalMeshState
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	TArray<class UMaterialInterface*>                  _originalMaterials;                                       // 0x0008(0x0010) (ZeroConstructor)
	TArray<class UMaterialInterface*>                  _originalDynamicMaterials;                                // 0x0018(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x20];                                      // 0x0028(0x0020) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.SpawnerElement
// 0x0010
struct FSpawnerElement
{
	TArray<struct FActorSpawnerProperties>             ObjectsToBeSpawned;                                       // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct DeadByDaylight.RarityTexture
// 0x0020
struct FRarityTexture
{
	struct FName                                       Type;                                                     // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EItemRarity>                           Rarity;                                                   // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FStringAssetReference                       Texture;                                                  // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct DeadByDaylight.OfferingTypeTexture
// 0x0018
struct FOfferingTypeTexture
{
	struct FName                                       Type;                                                     // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FStringAssetReference                       TextureBack;                                              // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct DeadByDaylight.OfferingRevealDelays
// 0x0008
struct FOfferingRevealDelays
{
	TEnumAsByte<EOfferingSequenceState>                RevealState;                                              // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              Delay;                                                    // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DeadByDaylight.GeneratedLevelData
// 0x00D0
struct FGeneratedLevelData
{
	class FString                                      UsedPaperTileMap;                                         // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                AvailableEscapeCount;                                     // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                AvailableSurvivorItemCount;                               // 0x0014(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESurvivorGrouping>                     GroupingType;                                             // 0x0018(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
	class USceneComponent*                             KillerSpawnPoint;                                         // 0x0020(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class USceneComponent*>                     SurvivorSpawnPoints;                                      // 0x0028(0x0010) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor)
	TArray<class USceneComponent*>                     InteractableElementsSpawnPoints;                          // 0x0038(0x0010) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor)
	TArray<class USceneComponent*>                     MeatHookSpawners;                                         // 0x0048(0x0010) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor)
	TArray<class USceneComponent*>                     SearchableSpawners;                                       // 0x0058(0x0010) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor)
	TArray<class USceneComponent*>                     HexSpawners;                                              // 0x0068(0x0010) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor)
	TArray<class USceneComponent*>                     KillerLairSpawners;                                       // 0x0078(0x0010) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor)
	TArray<class USceneComponent*>                     HatchSpawner;                                             // 0x0088(0x0010) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FDependency>                         LevelDependencies;                                        // 0x0098(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	bool                                               UseForcedMap;                                             // 0x00A8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x00A9(0x0007) MISSED OFFSET
	class FString                                      GenerationLogs;                                           // 0x00B0(0x0010) (ZeroConstructor)
	class FString                                      GenerationErrors;                                         // 0x00C0(0x0010) (ZeroConstructor)
};

// ScriptStruct DeadByDaylight.GenerationParams
// 0x0004
struct FGenerationParams
{
	int                                                Seed;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DeadByDaylight.Region
// 0x0018
struct FRegion
{
	struct FName                                       Region;                                                   // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class FString                                      IP;                                                       // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct DeadByDaylight.HintData
// 0x0068 (0x0070 - 0x0008)
struct FHintData : public FTableRowBase
{
	TEnumAsByte<EHintCategory>                         Category;                                                 // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FText                                       Title;                                                    // 0x0010(0x0018) (Edit, BlueprintVisible)
	struct FText                                       Description;                                              // 0x0028(0x0018) (Edit, BlueprintVisible)
	class FString                                      IconPath;                                                 // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                levelMin;                                                 // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                levelMax;                                                 // 0x0054(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                relevantCharacterID;                                      // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
	class FString                                      DLCId;                                                    // 0x0060(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct DeadByDaylight.SimpleCharacterDropdown
// 0x0004
struct FSimpleCharacterDropdown
{
	int                                                CharacterId;                                              // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DeadByDaylight.CharacterCameraTag
// 0x0018
struct FCharacterCameraTag
{
	class ACameraActor*                                Camera;                                                   // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FSimpleCharacterDropdown>            Characters;                                               // 0x0008(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct DeadByDaylight.BorderElements
// 0x0018
struct FBorderElements
{
	TEnumAsByte<EDirection>                            Direction;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TArray<class UActorSpawner*>                       Elements;                                                 // 0x0008(0x0010) (Edit, BlueprintVisible, ExportObject, ZeroConstructor)
};

// ScriptStruct DeadByDaylight.ConstArrayOfTiles
// 0x0010
struct FConstArrayOfTiles
{
	TArray<class ATile*>                               ArrayOfTiles;                                             // 0x0000(0x0010) (ZeroConstructor, Transient)
};

// ScriptStruct DeadByDaylight.ArrayOfTiles
// 0x0010
struct FArrayOfTiles
{
	TArray<class ATile*>                               ArrayOfTiles;                                             // 0x0000(0x0010) (ZeroConstructor, Transient)
};

// ScriptStruct DeadByDaylight.ScoreValue
// 0x0050 (0x0058 - 0x0008)
struct FScoreValue : public FTableRowBase
{
	struct FName                                       ID;                                                       // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EDBDScoreTypes>                        Type;                                                     // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	struct FGameplayTag                                ScoreEventType;                                           // 0x0018(0x0008) (Edit, BlueprintVisible)
	TEnumAsByte<EDBDScoreCategory>                     Category;                                                 // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
	int                                                BloodpointValue;                                          // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxBloodpointValue;                                       // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	class UCurveFloat*                                 BloodpointDepreciationCurve;                              // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OngoingWaitTime;                                          // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	struct FText                                       DisplayName;                                              // 0x0040(0x0018) (Edit, BlueprintVisible)
};

// ScriptStruct DeadByDaylight.ScoreCategoryData
// 0x0010 (0x0018 - 0x0008)
struct FScoreCategoryData : public FTableRowBase
{
	TEnumAsByte<EDBDScoreCategory>                     Category;                                                 // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	int                                                ScoreCap;                                                 // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                ProgressionCap;                                           // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.DetailedScoreEventData
// 0x0048
struct FDetailedScoreEventData
{
	class FString                                      MatchID;                                                  // 0x0000(0x0010) (ZeroConstructor, Transient)
	class FString                                      ScorerMirrorsId;                                          // 0x0010(0x0010) (ZeroConstructor, Transient)
	struct FName                                       ScoreTypeId;                                              // 0x0020(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                ScoreExperience;                                          // 0x0028(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              ElapsedMatchTime;                                         // 0x002C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     InstigatorLocation;                                       // 0x0030(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     TargetLocation;                                           // 0x003C(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct DeadByDaylight.UniquelyIdentifiedAnalytic
// 0x0030 (0x0038 - 0x0008)
struct FUniquelyIdentifiedAnalytic : public FBaseSingleStructIndexAnalytics
{
	class FString                                      MirrorsId;                                                // 0x0008(0x0010) (ZeroConstructor)
	class FString                                      ClientId;                                                 // 0x0018(0x0010) (ZeroConstructor)
	class FString                                      Platform;                                                 // 0x0028(0x0010) (ZeroConstructor)
};

// ScriptStruct DeadByDaylight.DetailedScoreAnalytics
// 0x0048 (0x0080 - 0x0038)
struct FDetailedScoreAnalytics : public FUniquelyIdentifiedAnalytic
{
	class FString                                      ScorerMirrorsId;                                          // 0x0038(0x0010) (ZeroConstructor)
	class FString                                      MatchID;                                                  // 0x0048(0x0010) (ZeroConstructor)
	struct FName                                       ScoreTypeId;                                              // 0x0058(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                ScoreExperience;                                          // 0x0060(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ElapsedMatchTime;                                         // 0x0064(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              InstigatorCoordinateX;                                    // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              InstigatorCoordinateY;                                    // 0x006C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              InstigatorCoordinateZ;                                    // 0x0070(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TargetCoordinateX;                                        // 0x0074(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TargetCoordinateY;                                        // 0x0078(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TargetCoordinateZ;                                        // 0x007C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DeadByDaylight.ScoreAnalytics
// 0x0020 (0x0058 - 0x0038)
struct FScoreAnalytics : public FUniquelyIdentifiedAnalytic
{
	class FString                                      MatchID;                                                  // 0x0038(0x0010) (ZeroConstructor)
	struct FName                                       ScoreTypeId;                                              // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                ScoreCount;                                               // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ScoreBloodpoints;                                         // 0x0054(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DeadByDaylight.BaseItemData
// 0x0088 (0x0090 - 0x0008)
struct FBaseItemData : public FTableRowBase
{
	struct FName                                       ID;                                                       // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInventoryItemType>                    Type;                                                     // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	struct FItemUIData                                 UIData;                                                   // 0x0018(0x0040) (Edit)
	struct FText                                       GenericDisplayName;                                       // 0x0058(0x0018) (Edit)
	TAssetPtr<class UClass>                            ItemBlueprint;                                            // 0x0070(0x0020) (Edit)
};

// ScriptStruct DeadByDaylight.ItemData
// 0x0068 (0x00F8 - 0x0090)
struct FItemData : public FBaseItemData
{
	TAssetPtr<class USkeletalMesh>                     ItemMesh;                                                 // 0x0090(0x0020) (Edit, BlueprintVisible)
	TEnumAsByte<EItemHandPosition>                     HandPosition;                                             // 0x00B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EPlayerRole>                           Role;                                                     // 0x00B1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EItemRarity>                           Rarity;                                                   // 0x00B2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Inventory;                                                // 0x00B3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Chest;                                                    // 0x00B4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               COMPLETED;                                                // 0x00B5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EKillerAbilities>                      RequiredKillerAbility;                                    // 0x00B6(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x00B7(0x0001) MISSED OFFSET
	struct FItemAvailability                           Availability;                                             // 0x00B8(0x0030) (Edit)
	bool                                               IsInNonViolentBuild;                                      // 0x00E8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               AntiDLC;                                                  // 0x00E9(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               Bloodweb;                                                 // 0x00EA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Disabled;                                                 // 0x00EB(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00EC(0x0004) MISSED OFFSET
	struct FName                                       EventId;                                                  // 0x00F0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DeadByDaylight.WebPath
// 0x0028
struct FWebPath
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.WebNode
// 0x0028
struct FWebNode
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.LoadoutSlotUnlockLevelValue
// 0x0008 (0x0010 - 0x0008)
struct FLoadoutSlotUnlockLevelValue : public FTableRowBase
{
	TEnumAsByte<ELoadoutSlot>                          LoadoutSlot;                                              // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	int                                                BloodwebLevel;                                            // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DeadByDaylight.BloodwebProgressionValue
// 0x00A0 (0x00A8 - 0x0008)
struct FBloodwebProgressionValue : public FTableRowBase
{
	int                                                InnerRingNodeCount;                                       // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MiddleRingNodeCount;                                      // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                OuterRingNodeCount;                                       // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Common_MinCount;                                          // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Common_MaxCount;                                          // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Uncommon_MinCount;                                        // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Uncommon_MaxCount;                                        // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Rare_MinCount;                                            // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Rare_MaxCount;                                            // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                VeryRare_MinCount;                                        // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                VeryRare_MaxCount;                                        // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                UltraRare_MinCount;                                       // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                UltraRare_MaxCount;                                       // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Artifact_MinCount;                                        // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Artifact_MaxCount;                                        // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Spectral_MinCount;                                        // 0x0044(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Spectral_MaxCount;                                        // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                InnerRingCommonItemProbability;                           // 0x004C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MiddleRingCommonItemProbability;                          // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                OuterRingCommonItemProbability;                           // 0x0054(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                InnerRingUncommonItemProbability;                         // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MiddleRingUncommonItemProbability;                        // 0x005C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                OuterRingUncommonItemProbability;                         // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                InnerRingRareItemProbability;                             // 0x0064(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MiddleRingRareItemProbability;                            // 0x0068(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                OuterRingRareItemProbability;                             // 0x006C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                InnerRingVeryRareItemProbability;                         // 0x0070(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MiddleRingVeryRareItemProbability;                        // 0x0074(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                OuterRingVeryRareItemProbability;                         // 0x0078(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                InnerRingUltraRareItemProbability;                        // 0x007C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MiddleRingUltraRareItemProbability;                       // 0x0080(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                OuterRingUltraRareItemProbability;                        // 0x0084(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                InnerRingArtifactItemProbability;                         // 0x0088(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MiddleRingArtifactItemProbability;                        // 0x008C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                OuterRingArtifactItemProbability;                         // 0x0090(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                InnerRingSpectralItemProbability;                         // 0x0094(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MiddleRingSpectralItemProbability;                        // 0x0098(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                OuterRingSpectralItemProbability;                         // 0x009C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                EntityStartingRound;                                      // 0x00A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00A4(0x0004) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.GarantiedRarityRingDistributionValues
// 0x0058 (0x0060 - 0x0008)
struct FGarantiedRarityRingDistributionValues : public FTableRowBase
{
	int                                                InnerRingCommonItemProbability;                           // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MiddleRingCommonItemProbability;                          // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                OuterRingCommonItemProbability;                           // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                InnerRingUncommonItemProbability;                         // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MiddleRingUncommonItemProbability;                        // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                OuterRingUncommonItemProbability;                         // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                InnerRingRareItemProbability;                             // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MiddleRingRareItemProbability;                            // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                OuterRingRareItemProbability;                             // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                InnerRingVeryRareItemProbability;                         // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MiddleRingVeryRareItemProbability;                        // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                OuterRingVeryRareItemProbability;                         // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                InnerRingUltraRareItemProbability;                        // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MiddleRingUltraRareItemProbability;                       // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                OuterRingUltraRareItemProbability;                        // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                InnerRingArtifactItemProbability;                         // 0x0044(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MiddleRingArtifactItemProbability;                        // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                OuterRingArtifactItemProbability;                         // 0x004C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                InnerRingSpectralItemProbability;                         // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MiddleRingSpectralItemProbability;                        // 0x0054(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                OuterRingSpectralItemProbability;                         // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.BloodwebPrestigeModifiers
// 0x0020 (0x0028 - 0x0008)
struct FBloodwebPrestigeModifiers : public FTableRowBase
{
	float                                              CommonItemProbabilityModifier;                            // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              UncommonItemProbabilityModifier;                          // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RareItemProbabilityModifier;                              // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              VeryRareItemProbabilityModifier;                          // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              UltraRareItemProbabilityModifier;                         // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ArtifactItemProbabilityModifier;                          // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SpectralItemProbabilityModifier;                          // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.BloodwebCostModifier
// 0x0008 (0x0010 - 0x0008)
struct FBloodwebCostModifier : public FTableRowBase
{
	TEnumAsByte<EBloodwebNodeContentType>              Type;                                                     // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	float                                              CostModifier;                                             // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DeadByDaylight.BloodwebNodeRarityCost
// 0x0008 (0x0010 - 0x0008)
struct FBloodwebNodeRarityCost : public FTableRowBase
{
	TEnumAsByte<EItemRarity>                           Rarity;                                                   // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	int                                                Cost;                                                     // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DeadByDaylight.BloodwebNodeCost
// 0x0008 (0x0010 - 0x0008)
struct FBloodwebNodeCost : public FTableRowBase
{
	TEnumAsByte<EItemRarity>                           Rarity;                                                   // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	int                                                Cost;                                                     // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DeadByDaylight.NodeContentDistributionValue
// 0x0058 (0x0060 - 0x0008)
struct FNodeContentDistributionValue : public FTableRowBase
{
	int                                                Empty_Weight;                                             // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Empty_MinCount;                                           // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Empty_MaxCount;                                           // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Perks_Weight;                                             // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Perks_MinCount;                                           // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Perks_MaxCount;                                           // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                PerksPacks_Weight;                                        // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                PerksPacks_MinCount;                                      // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                PerksPacks_MaxCount;                                      // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Offerings_Weight;                                         // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Offerings_MinCount;                                       // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Offerings_MaxCount;                                       // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Items_Weight;                                             // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Items_MinCount;                                           // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Items_MaxCount;                                           // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                AddOn_Weight;                                             // 0x0044(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                AddOn_MinCount;                                           // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                AddOn_MaxCount;                                           // 0x004C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Chests_Weight;                                            // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Chests_MinCount;                                          // 0x0054(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Chests_MaxCount;                                          // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.RarityDistributionValue
// 0x0010 (0x0018 - 0x0008)
struct FRarityDistributionValue : public FTableRowBase
{
	int                                                InnerRing;                                                // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MiddleRing;                                               // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                OuterRing;                                                // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.BloodwebMandatoryContentByLevel
// 0x0020 (0x0028 - 0x0008)
struct FBloodwebMandatoryContentByLevel : public FTableRowBase
{
	int                                                Level;                                                    // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FName                                       ForcedItem01;                                             // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       ForcedItem02;                                             // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       ForcedItem03;                                             // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DeadByDaylight.AccessNode
// 0x0018
struct FAccessNode
{
	class FString                                      ID;                                                       // 0x0000(0x0010) (ZeroConstructor)
	int                                                AccessCost;                                               // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.DailyRitualLevel
// 0x0010
struct FDailyRitualLevel
{
	float                                              Threshold;                                                // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Tolerance;                                                // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                DisplayTotal;                                             // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              BloodpointsReward;                                        // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DeadByDaylight.DailyRitualDefinition
// 0x00A0 (0x00A8 - 0x0008)
struct FDailyRitualDefinition : public FTableRowBase
{
	struct FText                                       DisplayName;                                              // 0x0008(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FText                                       Description;                                              // 0x0020(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	class FString                                      IconPath;                                                 // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<int>                                        PossibleCharacterIDs;                                     // 0x0048(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<TEnumAsByte<EPlayerRole>>                   PossibleRoles;                                            // 0x0058(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<TEnumAsByte<EDBDScoreTypes>>                TrackedEvents;                                            // 0x0068(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FDailyRitualLevel>                   DifficultyLevels;                                         // 0x0078(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TAssetPtr<class UClass>                            Evaluator;                                                // 0x0088(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly)
};

// ScriptStruct DeadByDaylight.StatusViewProperties
// 0x0070 (0x0078 - 0x0008)
struct FStatusViewProperties : public FTableRowBase
{
	struct FName                                       StatusViewID;                                             // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FText                                       Description;                                              // 0x0010(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FText                                       DisplayName;                                              // 0x0028(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	TAssetPtr<class UClass>                            StatusViewBlueprint;                                      // 0x0040(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly)
	TEnumAsByte<EStatusEffectType>                     StatusType;                                               // 0x0060(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0061(0x0007) MISSED OFFSET
	class FString                                      IconFilePath;                                             // 0x0068(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct DeadByDaylight.NotificationHistoryElement
// 0x0010
struct FNotificationHistoryElement
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.SurvivorTutorialAnalytics
// 0x0030 (0x0068 - 0x0038)
struct FSurvivorTutorialAnalytics : public FUniquelyIdentifiedAnalytic
{
	int                                                SecondsSpentInTutorial;                                   // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SecondsSpentInIntroSection;                               // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SecondsSpentInSkillchecksSection;                         // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SecondsSpentInKillerSection;                              // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SecondsSpentInStealthSection;                             // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SecondsSpentInHookSection;                                // 0x004C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SecondsSpentInHealthSection;                              // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SecondsSpentInRescueSection;                              // 0x0054(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SecondsSpentInEscapeSection;                              // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               WasScratchMarksAndWildlifeEventTriggered;                 // 0x005C(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               WasRushedActionEventTriggered;                            // 0x005D(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               WasSuccessfulStealthEventTriggered;                       // 0x005E(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               WasStealthObjectiveCompleted;                             // 0x005F(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               WasHatchEscapeObjectiveCompleted;                         // 0x0060(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0061(0x0007) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.KillerTutorialAnalytics
// 0x0018 (0x0050 - 0x0038)
struct FKillerTutorialAnalytics : public FUniquelyIdentifiedAnalytic
{
	int                                                SecondsSpentInTutorial;                                   // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SecondsSpentInIntroSection;                               // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SecondsSpentInChaseSection;                               // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SecondsSpentInEscapeSection;                              // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               WasLungeAttackObjectiveCompleted;                         // 0x0048(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0049(0x0007) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.OfferingEffect
// 0x0028
struct FOfferingEffect
{
	TEnumAsByte<EOfferingEffectType>                   Type;                                                     // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TArray<struct FName>                               Tags;                                                     // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FName                                       Value;                                                    // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Modifier;                                                 // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.OfferingProperties
// 0x0038 (0x0130 - 0x00F8)
struct FOfferingProperties : public FItemData
{
	TEnumAsByte<EOfferingType>                         OfferingType;                                             // 0x00F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00F9(0x0007) MISSED OFFSET
	TArray<struct FName>                               Tags;                                                     // 0x0100(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FOfferingEffect>                     Effects;                                                  // 0x0110(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class FString                                      BigIconFilePath;                                          // 0x0120(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct DeadByDaylight.AnimationMapping
// 0x0040 (0x0048 - 0x0008)
struct FAnimationMapping : public FTableRowBase
{
	TAssetPtr<class UAnimMontage>                      MontageAsset;                                             // 0x0008(0x0020) (Edit, BlueprintVisible)
	TArray<struct FName>                               Tags;                                                     // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UAnimMontage*                                _montage;                                                 // 0x0038(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               _loadAttempted;                                           // 0x0040(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0041(0x0007) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.AnimationMappingRow
// 0x0010 (0x0018 - 0x0008)
struct FAnimationMappingRow : public FTableRowBase
{
	TArray<struct FAnimationMapping>                   Mappings;                                                 // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct DeadByDaylight.Bitfield
// 0x0004
struct FBitfield
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.BlockingNode
// 0x0018
struct FBlockingNode
{
	class FString                                      ID;                                                       // 0x0000(0x0010) (ZeroConstructor)
	int                                                BlockingCount;                                            // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.QualityNameData
// 0x0030 (0x0038 - 0x0008)
struct FQualityNameData : public FTableRowBase
{
	struct FName                                       QualityName;                                              // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FText                                       LocalizedQualityName;                                     // 0x0010(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	class FString                                      LinkedAssetName;                                          // 0x0028(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct DeadByDaylight.MaterialMapForClip
// 0x0010 (0x0018 - 0x0008)
struct FMaterialMapForClip : public FTableRowBase
{
	class UMaterialInterface*                          SrcMaterial;                                              // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          DstMaterial;                                              // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DeadByDaylight.HelpCategoryData
// 0x0048 (0x0050 - 0x0008)
struct FHelpCategoryData : public FTableRowBase
{
	TEnumAsByte<EHelpType>                             Type;                                                     // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FText                                       Title;                                                    // 0x0010(0x0018) (Edit, BlueprintVisible)
	struct FText                                       Description;                                              // 0x0028(0x0018) (Edit, BlueprintVisible)
	TArray<struct FName>                               TopicIds;                                                 // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct DeadByDaylight.HelpContextMappingData
// 0x0020 (0x0028 - 0x0008)
struct FHelpContextMappingData : public FTableRowBase
{
	class FString                                      ContextName;                                              // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FName>                               TopicIds;                                                 // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct DeadByDaylight.HelpTopicData
// 0x0060 (0x0068 - 0x0008)
struct FHelpTopicData : public FTableRowBase
{
	struct FText                                       Title;                                                    // 0x0008(0x0018) (Edit, BlueprintVisible)
	struct FText                                       Description;                                              // 0x0020(0x0018) (Edit, BlueprintVisible)
	class FString                                      ImagePath;                                                // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class FString                                      IconPath;                                                 // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class FString                                      VideoID;                                                  // 0x0058(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct DeadByDaylight.BonusPointsEventData
// 0x0068 (0x0070 - 0x0008)
struct FBonusPointsEventData : public FTableRowBase
{
	struct FText                                       EventTitle;                                               // 0x0008(0x0018) (Edit)
	struct FText                                       EventDescription;                                         // 0x0020(0x0018) (Edit)
	TEnumAsByte<EBonusEventType>                       EventType;                                                // 0x0038(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0039(0x0003) MISSED OFFSET
	float                                              Multiplier;                                               // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class FString                                      StartTime;                                                // 0x0040(0x0010) (Edit, ZeroConstructor)
	class FString                                      EndTime;                                                  // 0x0050(0x0010) (Edit, ZeroConstructor)
	class FString                                      DevNotes;                                                 // 0x0060(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct DeadByDaylight.LevelUpDetails
// 0x0048 (0x0050 - 0x0008)
struct FLevelUpDetails : public FTableRowBase
{
	int                                                Level;                                                    // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Prestige;                                                 // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FText                                       Title;                                                    // 0x0010(0x0018) (Edit, BlueprintVisible)
	struct FText                                       Description;                                              // 0x0028(0x0018) (Edit, BlueprintVisible)
	struct FName                                       ItemId;                                                   // 0x0040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInventoryItemType>                    ItemType;                                                 // 0x0048(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0049(0x0003) MISSED OFFSET
	int                                                AssociatedCharacter;                                      // 0x004C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DeadByDaylight.ItemAddonProperties
// 0x0040 (0x0138 - 0x00F8)
struct FItemAddonProperties : public FItemData
{
	TAssetPtr<class UClass>                            ItemAddonBlueprint;                                       // 0x00F8(0x0020) (Edit, BlueprintVisible)
	TArray<struct FName>                               ParentItems;                                              // 0x0118(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FName>                               PreLevelGenerationModifierID;                             // 0x0128(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct DeadByDaylight.ProceduralMap
// 0x0098 (0x00A0 - 0x0008)
struct FProceduralMap : public FTableRowBase
{
	struct FName                                       MapId;                                                    // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FText                                       Name;                                                     // 0x0010(0x0018) (Edit, BlueprintVisible)
	struct FText                                       ThemeName;                                                // 0x0028(0x0018) (Edit, BlueprintVisible)
	struct FText                                       Description;                                              // 0x0040(0x0018) (Edit, BlueprintVisible)
	int                                                HookCountOffset;                                          // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BookShelvesMinCount;                                      // 0x005C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BookShelvesMaxCount;                                      // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                LivingWorldObjectsMinCount;                               // 0x0064(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                LivingWorldObjectsMaxCount;                               // 0x0068(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
	class FString                                      ThumbnailPath;                                            // 0x0070(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                SortingIndex;                                             // 0x0080(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0084(0x0004) MISSED OFFSET
	class FString                                      DlcIDString;                                              // 0x0088(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               IsInNonViolentBuild;                                      // 0x0098(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0099(0x0007) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.TutorialLevelData
// 0x0060 (0x0068 - 0x0008)
struct FTutorialLevelData : public FTableRowBase
{
	struct FName                                       ID;                                                       // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FText                                       Title;                                                    // 0x0010(0x0018) (Edit, BlueprintVisible)
	struct FText                                       Description;                                              // 0x0028(0x0018) (Edit, BlueprintVisible)
	class FString                                      IconPath;                                                 // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class FString                                      MapName;                                                  // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               IsKillerTutorial;                                         // 0x0060(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0061(0x0007) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.MainMenuButtonData
// 0x0088 (0x0090 - 0x0008)
struct FMainMenuButtonData : public FTableRowBase
{
	TEnumAsByte<EMainMenuButton>                       ButtonType;                                               // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FText                                       Label;                                                    // 0x0010(0x0018) (Edit, BlueprintVisible)
	struct FText                                       InfoTitle;                                                // 0x0028(0x0018) (Edit, BlueprintVisible)
	struct FText                                       InfoDescription;                                          // 0x0040(0x0018) (Edit, BlueprintVisible)
	struct FText                                       LockedInfoTitle;                                          // 0x0058(0x0018) (Edit, BlueprintVisible)
	struct FText                                       LockedInfoDescription;                                    // 0x0070(0x0018) (Edit, BlueprintVisible)
	bool                                               IsDisabled;                                               // 0x0088(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsLocked;                                                 // 0x0089(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsHidden;                                                 // 0x008A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x5];                                       // 0x008B(0x0005) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.TutorialObjective
// 0x0020 (0x0028 - 0x0008)
struct FTutorialObjective : public FTableRowBase
{
	struct FText                                       Description;                                              // 0x0008(0x0018) (Edit, BlueprintVisible)
	bool                                               IsCompletionAnalyticEnabled;                              // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.DBDEmblemDefinition
// 0x0090 (0x0098 - 0x0008)
struct FDBDEmblemDefinition : public FTableRowBase
{
	struct FName                                       ID;                                                       // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FText                                       Name;                                                     // 0x0010(0x0018) (Edit, BlueprintVisible)
	struct FText                                       Description;                                              // 0x0028(0x0018) (Edit, BlueprintVisible)
	TArray<TEnumAsByte<EPlayerRole>>                   Roles;                                                    // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TAssetPtr<class UClass>                            CustomEmblem;                                             // 0x0050(0x0020) (Edit, BlueprintVisible)
	TArray<class FString>                              IconFilePaths;                                            // 0x0070(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<int>                                        QualityPointThresholds;                                   // 0x0080(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TEnumAsByte<EEmblemEvaluation>                     EmblemEvaluation;                                         // 0x0090(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Enabled;                                                  // 0x0091(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0092(0x0006) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.EACClientInfo
// 0x0010
struct FEACClientInfo
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.DBDConnectionStatus
// 0x0010
struct FDBDConnectionStatus
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.DBDSearchParams
// 0x0068
struct FDBDSearchParams
{
	unsigned char                                      UnknownData00[0x68];                                      // 0x0000(0x0068) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.DBDJoinParams
// 0x0001
struct FDBDJoinParams
{
	TEnumAsByte<EGameType>                             GameType;                                                 // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DeadByDaylight.ChatAnalytics
// 0x0060 (0x0098 - 0x0038)
struct FChatAnalytics : public FUniquelyIdentifiedAnalytic
{
	class FString                                      SenderMirrorsId;                                          // 0x0038(0x0010) (ZeroConstructor)
	class FString                                      SenderPlayerName;                                         // 0x0048(0x0010) (ZeroConstructor)
	class FString                                      MatchID;                                                  // 0x0058(0x0010) (ZeroConstructor)
	class FString                                      ChatContent;                                              // 0x0068(0x0010) (ZeroConstructor)
	class FString                                      ChatContext;                                              // 0x0078(0x0010) (ZeroConstructor)
	class FString                                      InGameTimestamp;                                          // 0x0088(0x0010) (ZeroConstructor)
};

// ScriptStruct DeadByDaylight.ChatContextChangeEventData
// 0x0010
struct FChatContextChangeEventData
{
	class FString                                      Context;                                                  // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct DeadByDaylight.ChatMessageEventData
// 0x0030
struct FChatMessageEventData
{
	class FString                                      SenderMirrorsId;                                          // 0x0000(0x0010) (ZeroConstructor)
	class FString                                      SenderPlayerName;                                         // 0x0010(0x0010) (ZeroConstructor)
	class FString                                      ChatContent;                                              // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct DeadByDaylight.EntitlementAnalytics
// 0x0090 (0x00C8 - 0x0038)
struct FEntitlementAnalytics : public FUniquelyIdentifiedAnalytic
{
	bool                                               FirstTimePlaying;                                         // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
	class FString                                      Timestamp;                                                // 0x0040(0x0010) (ZeroConstructor)
	class FString                                      SelectedCountry;                                          // 0x0050(0x0010) (ZeroConstructor)
	struct FName                                       DlcInstalled80Suitcase;                                   // 0x0060(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       DlcInstalledHalloween;                                    // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       DlcInstalledBloodstainedSack;                             // 0x0070(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       DlcInstalledFleshAndMud;                                  // 0x0078(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       DlcInstalledHeadcase;                                     // 0x0080(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       DlcInstalledSparkOfMadness;                               // 0x0088(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       DlcInstalledCharityCase;                                  // 0x0090(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       DlcInstalledCannibal;                                     // 0x0098(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       DlcInstalledEngland;                                      // 0x00A0(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       DlcInstalledFinland;                                      // 0x00A8(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       DlcInstalledGuam;                                         // 0x00B0(0x0008) (ZeroConstructor, IsPlainOldData)
	class FString                                      NewlyInstalledDlc;                                        // 0x00B8(0x0010) (ZeroConstructor)
};

// ScriptStruct DeadByDaylight.Gameplay_SurvivorAnalyticsController
// 0x0140
struct FGameplay_SurvivorAnalyticsController
{
	unsigned char                                      UnknownData00[0x140];                                     // 0x0000(0x0140) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.Gameplay_KillerAnalyticsController
// 0x0160
struct FGameplay_KillerAnalyticsController
{
	unsigned char                                      UnknownData00[0x160];                                     // 0x0000(0x0160) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.Gameplay_PigKillerAnalytics
// 0x0038 (0x0070 - 0x0038)
struct FGameplay_PigKillerAnalytics : public FUniquelyIdentifiedAnalytic
{
	class FString                                      MatchID;                                                  // 0x0038(0x0010) (ZeroConstructor)
	int                                                AmbushHitCount;                                           // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                RBTKilledCount;                                           // 0x004C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                RBT1GeneratorCount;                                       // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                RBT2GeneratorCount;                                       // 0x0054(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                RBT3GeneratorCount;                                       // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                RBT4GeneratorCount;                                       // 0x005C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                RBT5GeneratorCount;                                       // 0x0060(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              CrouchDuration;                                           // 0x0064(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                RBTExitKill;                                              // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                RBTHookKill;                                              // 0x006C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DeadByDaylight.Gameplay_KillerAnalytics
// 0x00A0 (0x00D8 - 0x0038)
struct FGameplay_KillerAnalytics : public FUniquelyIdentifiedAnalytic
{
	class FString                                      MatchID;                                                  // 0x0038(0x0010) (ZeroConstructor)
	float                                              Speed;                                                    // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                BloodlustTier1Count;                                      // 0x004C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                BloodlustTier2Count;                                      // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                BloodlustTier3Count;                                      // 0x0054(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              BloodlustTier1Duration;                                   // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              BloodlustTier2Duration;                                   // 0x005C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              BloodlustTier3Duration;                                   // 0x0060(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              BloodlustSpeed;                                           // 0x0064(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ChaseCount;                                               // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ChaseCountFail;                                           // 0x006C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ChaseCountSuccess;                                        // 0x0070(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ChaseCountTier1Fail;                                      // 0x0074(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ChaseCountTier1Success;                                   // 0x0078(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ChaseCountTier2Fail;                                      // 0x007C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ChaseCountTier2Success;                                   // 0x0080(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ChaseCountTier3Fail;                                      // 0x0084(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ChaseCountTier3Success;                                   // 0x0088(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                HookCount;                                                // 0x008C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MurderCount;                                              // 0x0090(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PalletSpawned;                                            // 0x0094(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PalletProcedural;                                         // 0x0098(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PalletProceduralSetCount;                                 // 0x009C(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           PalletGenerationId;                                       // 0x00A0(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PalletGeneric;                                            // 0x00A4(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PalletDestroyed;                                          // 0x00A8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DropCount;                                                // 0x00AC(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                HitCloseCount;                                            // 0x00B0(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                HitCloseCountSuccess;                                     // 0x00B4(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                HitFarCount;                                              // 0x00B8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                HitFarCountSuccess;                                       // 0x00BC(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                HitSpecialCount;                                          // 0x00C0(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                HitSpecialCountSuccess;                                   // 0x00C4(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ClosetOpen;                                               // 0x00C8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ClosetOpenSuccess;                                        // 0x00CC(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                EscapeesHatchCount;                                       // 0x00D0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00D4(0x0004) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.Gameplay_PigSurvivorAnalytics
// 0x0038 (0x0070 - 0x0038)
struct FGameplay_PigSurvivorAnalytics : public FUniquelyIdentifiedAnalytic
{
	class FString                                      MatchID;                                                  // 0x0038(0x0010) (ZeroConstructor)
	int                                                RBTAttachedCount;                                         // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ActivatedRBTTimerCount;                                   // 0x004C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                RBTSuccessSearchCount;                                    // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                RBTFailedSearchCount;                                     // 0x0054(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                RBTDisabledPreActivation;                                 // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                RBTDisabledPostActivation;                                // 0x005C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              RBTChaseDuration;                                         // 0x0060(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              RBTAverageTimeLeftBeforeDisable;                          // 0x0064(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              RBTDuration;                                              // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.Gameplay_SurvivorAnalytics
// 0x0070 (0x00A8 - 0x0038)
struct FGameplay_SurvivorAnalytics : public FUniquelyIdentifiedAnalytic
{
	class FString                                      MatchID;                                                  // 0x0038(0x0010) (ZeroConstructor)
	float                                              Speed;                                                    // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              InjuredSpeed;                                             // 0x004C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              InjuredDuration;                                          // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              HealthyDuration;                                          // 0x0054(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              KODuration;                                               // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PalletSpawned;                                            // 0x005C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PalletProcedural;                                         // 0x0060(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PalletProceduralSetCount;                                 // 0x0064(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           PalletGenerationId;                                       // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PalletGeneric;                                            // 0x006C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PalletDrop;                                               // 0x0070(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PalletStun;                                               // 0x0074(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                UnhookCount;                                              // 0x0078(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                HealCount;                                                // 0x007C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                HealCountSuccess;                                         // 0x0080(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ClosetEnter;                                              // 0x0084(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Hatch;                                                    // 0x0088(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SkillCheckCount;                                          // 0x008C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SkillCheckCountGood;                                      // 0x0090(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SkillCheckCountGreat;                                     // 0x0094(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ChaseDuration;                                            // 0x0098(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                NumChases;                                                // 0x009C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                HitBySlasherCount;                                        // 0x00A0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00A4(0x0004) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.LoadOutAnalytics
// 0x0098 (0x00D0 - 0x0038)
struct FLoadOutAnalytics : public FUniquelyIdentifiedAnalytic
{
	class FString                                      LoadoutItem;                                              // 0x0038(0x0010) (ZeroConstructor)
	class FString                                      LoadoutItemAddOn1;                                        // 0x0048(0x0010) (ZeroConstructor)
	class FString                                      LoadoutItemAddOn2;                                        // 0x0058(0x0010) (ZeroConstructor)
	class FString                                      LoadoutPerk1;                                             // 0x0068(0x0010) (ZeroConstructor)
	class FString                                      LoadoutPerk2;                                             // 0x0078(0x0010) (ZeroConstructor)
	class FString                                      LoadoutPerk3;                                             // 0x0088(0x0010) (ZeroConstructor)
	class FString                                      LoadoutPerk4;                                             // 0x0098(0x0010) (ZeroConstructor)
	class FString                                      LoadoutOffering;                                          // 0x00A8(0x0010) (ZeroConstructor)
	TEnumAsByte<EPlayerRole>                           Role;                                                     // 0x00B8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00B9(0x0003) MISSED OFFSET
	int                                                Rank;                                                     // 0x00BC(0x0004) (ZeroConstructor, IsPlainOldData)
	class FString                                      MatchID;                                                  // 0x00C0(0x0010) (ZeroConstructor)
};

// ScriptStruct DeadByDaylight.PluginAnalytics
// 0x0010 (0x0048 - 0x0038)
struct FPluginAnalytics : public FUniquelyIdentifiedAnalytic
{
	class FString                                      Version;                                                  // 0x0038(0x0010) (ZeroConstructor)
};

// ScriptStruct DeadByDaylight.LogMirrorsAnalytics
// 0x0010 (0x0058 - 0x0048)
struct FLogMirrorsAnalytics : public FPluginAnalytics
{
	class FString                                      LogMirrors;                                               // 0x0048(0x0010) (ZeroConstructor)
};

// ScriptStruct DeadByDaylight.LogPresencePluginAnalytics
// 0x0020 (0x0068 - 0x0048)
struct FLogPresencePluginAnalytics : public FPluginAnalytics
{
	class FString                                      Context;                                                  // 0x0048(0x0010) (ZeroConstructor)
	class FString                                      Message;                                                  // 0x0058(0x0010) (ZeroConstructor)
};

// ScriptStruct DeadByDaylight.MatchInfoAnalytics
// 0x00B0 (0x00E8 - 0x0038)
struct FMatchInfoAnalytics : public FUniquelyIdentifiedAnalytic
{
	TEnumAsByte<EGameType>                             GameMode;                                                 // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EPlayerRole>                           Role;                                                     // 0x0039(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x003A(0x0002) MISSED OFFSET
	int                                                PartySize;                                                // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData)
	class FString                                      CharacterName;                                            // 0x0040(0x0010) (ZeroConstructor)
	int                                                Rank;                                                     // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Level;                                                    // 0x0054(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Prestige;                                                 // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Pips;                                                     // 0x005C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PipsTotal;                                                // 0x0060(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MapSeed;                                                  // 0x0064(0x0004) (ZeroConstructor, IsPlainOldData)
	class FString                                      MapName;                                                  // 0x0068(0x0010) (ZeroConstructor)
	class FString                                      PartyHostMirrorsId;                                       // 0x0078(0x0010) (ZeroConstructor)
	class FString                                      MatchID;                                                  // 0x0088(0x0010) (ZeroConstructor)
	class FString                                      Version;                                                  // 0x0098(0x0010) (ZeroConstructor)
	class FString                                      PlayerName;                                               // 0x00A8(0x0010) (ZeroConstructor)
	class FString                                      SelectedCountry;                                          // 0x00B8(0x0010) (ZeroConstructor)
	bool                                               FirstTimePlaying;                                         // 0x00C8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00C9(0x0003) MISSED OFFSET
	int                                                CumulativeMatches;                                        // 0x00CC(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CumulativeMatchesAsSurvivor;                              // 0x00D0(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CumulativeMatchesAsKiller;                                // 0x00D4(0x0004) (ZeroConstructor, IsPlainOldData)
	class FString                                      LastMatchTimestamp;                                       // 0x00D8(0x0010) (ZeroConstructor)
};

// ScriptStruct DeadByDaylight.WaitTimeAnalytics
// 0x0080 (0x00B8 - 0x0038)
struct FWaitTimeAnalytics : public FUniquelyIdentifiedAnalytic
{
	float                                              EnterLobbyWaitTime;                                       // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              EnterMatchWaitTime;                                       // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData)
	class FString                                      MatchWaitStartUtc;                                        // 0x0040(0x0010) (ZeroConstructor)
	class FString                                      MatchWaitStopUtc;                                         // 0x0050(0x0010) (ZeroConstructor)
	class FString                                      LobbyWaitStartUtc;                                        // 0x0060(0x0010) (ZeroConstructor)
	class FString                                      LobbyWaitStopUtc;                                         // 0x0070(0x0010) (ZeroConstructor)
	class FString                                      MatchID;                                                  // 0x0080(0x0010) (ZeroConstructor)
	class FString                                      Version;                                                  // 0x0090(0x0010) (ZeroConstructor)
	TEnumAsByte<EGameType>                             GameMode;                                                 // 0x00A0(0x0001) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EPlayerRole>                           Role;                                                     // 0x00A1(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x00A2(0x0002) MISSED OFFSET
	int                                                PartySize;                                                // 0x00A4(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Rank;                                                     // 0x00A8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                RankDifference;                                           // 0x00AC(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DaysSinceReset;                                           // 0x00B0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00B4(0x0004) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.QueueAnalytics
// 0x0168 (0x01A0 - 0x0038)
struct FQueueAnalytics : public FUniquelyIdentifiedAnalytic
{
	int                                                TimesQueuedSurvivor;                                      // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                TimesQueuedKiller;                                        // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MatchesAsSurvivor;                                        // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MatchesAsKiller;                                          // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData)
	class FString                                      SelectedCountry;                                          // 0x0048(0x0010) (ZeroConstructor)
	class FString                                      PlayerName;                                               // 0x0058(0x0010) (ZeroConstructor)
	bool                                               FirstTimePlaying;                                         // 0x0068(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0069(0x0003) MISSED OFFSET
	int                                                CumulativeMatches;                                        // 0x006C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CumulativeMatchesAsSurvivor;                              // 0x0070(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CumulativeMatchesAsKiller;                                // 0x0074(0x0004) (ZeroConstructor, IsPlainOldData)
	class FString                                      LastMatchTimestamp;                                       // 0x0078(0x0010) (ZeroConstructor)
	class FString                                      SessionStartTimestamp;                                    // 0x0088(0x0010) (ZeroConstructor)
	class FString                                      SessionEndTimestamp;                                      // 0x0098(0x0010) (ZeroConstructor)
	class FString                                      LastSessionTimestamp;                                     // 0x00A8(0x0010) (ZeroConstructor)
	int                                                CumulativeSessions;                                       // 0x00B8(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              CumulativePlaytime;                                       // 0x00BC(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TimeInCharacterMenu;                                      // 0x00C0(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TimeInBloodwebMenu;                                       // 0x00C4(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TimeInLoadoutMenu;                                        // 0x00C8(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TimeInCustomizationMenu;                                  // 0x00CC(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TimeInFearMarket;                                         // 0x00D0(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TimeInTallyScreen;                                        // 0x00D4(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TimeInGameMatch;                                          // 0x00D8(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TimeInHelpMenu;                                           // 0x00DC(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TimeInOfflineLobby;                                       // 0x00E0(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TimeInOfflineLobbySurvivorGroup;                          // 0x00E4(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TimeInOnlineLobby;                                        // 0x00E8(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TimeInOnlineLobbySurvivorGroup;                           // 0x00EC(0x0004) (ZeroConstructor, IsPlainOldData)
	class FString                                      DlcInstalled80Suitcase;                                   // 0x00F0(0x0010) (ZeroConstructor)
	class FString                                      DlcInstalledHalloween;                                    // 0x0100(0x0010) (ZeroConstructor)
	class FString                                      DlcInstalledBloodstainedSack;                             // 0x0110(0x0010) (ZeroConstructor)
	class FString                                      DlcInstalledFleshAndMud;                                  // 0x0120(0x0010) (ZeroConstructor)
	class FString                                      DlcInstalledHeadcase;                                     // 0x0130(0x0010) (ZeroConstructor)
	class FString                                      DlcInstalledSparkOfMadness;                               // 0x0140(0x0010) (ZeroConstructor)
	class FString                                      DlcInstalledCharityCase;                                  // 0x0150(0x0010) (ZeroConstructor)
	class FString                                      DlcInstalledCannibal;                                     // 0x0160(0x0010) (ZeroConstructor)
	class FString                                      DlcInstalledEngland;                                      // 0x0170(0x0010) (ZeroConstructor)
	class FString                                      DlcInstalledFinland;                                      // 0x0180(0x0010) (ZeroConstructor)
	class FString                                      DlcInstalledGuam;                                         // 0x0190(0x0010) (ZeroConstructor)
};

// ScriptStruct DeadByDaylight.MenuFlowAnalytics
// 0x0038 (0x0070 - 0x0038)
struct FMenuFlowAnalytics : public FUniquelyIdentifiedAnalytic
{
	class FString                                      CurrentContext;                                           // 0x0038(0x0010) (ZeroConstructor)
	class FString                                      PreviousContext;                                          // 0x0048(0x0010) (ZeroConstructor)
	float                                              TimeOnPreviousContext;                                    // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
	class FString                                      ContextChangeTimetamp;                                    // 0x0060(0x0010) (ZeroConstructor)
};

// ScriptStruct DeadByDaylight.ProceduralGenerationAnalyticsController
// 0x0118
struct FProceduralGenerationAnalyticsController
{
	unsigned char                                      UnknownData00[0x118];                                     // 0x0000(0x0118) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.ProceduralGenerationAnalytics
// 0x0110 (0x0118 - 0x0008)
struct FProceduralGenerationAnalytics : public FBaseSingleStructIndexAnalytics
{
	int                                                MapSeed;                                                  // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class FString                                      MapName;                                                  // 0x0010(0x0010) (ZeroConstructor)
	class FString                                      Procedural_MeatLocker_Small;                              // 0x0020(0x0010) (ZeroConstructor)
	class FString                                      Procedural_MeatLocker_Big;                                // 0x0030(0x0010) (ZeroConstructor)
	class FString                                      Procedural_Searchable;                                    // 0x0040(0x0010) (ZeroConstructor)
	class FString                                      Procedural_EdgeObjects;                                   // 0x0050(0x0010) (ZeroConstructor)
	class FString                                      Procedural_LivingWorldObjects;                            // 0x0060(0x0010) (ZeroConstructor)
	class FString                                      Procedural_Hatch;                                         // 0x0070(0x0010) (ZeroConstructor)
	class FString                                      Procedural_BookShelves;                                   // 0x0080(0x0010) (ZeroConstructor)
	class FString                                      Procedural_Totems;                                        // 0x0090(0x0010) (ZeroConstructor)
	class FString                                      Procedural_QuadrantSpawn;                                 // 0x00A0(0x0010) (ZeroConstructor)
	int                                                PalletSpawned;                                            // 0x00B0(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PalletProceduralMin;                                      // 0x00B4(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PalletProceduralMax;                                      // 0x00B8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PalletProcedural;                                         // 0x00BC(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PalletProceduralSetCount;                                 // 0x00C0(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           PalletGenerationId;                                       // 0x00C4(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PalletGeneric;                                            // 0x00C8(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00CC(0x0004) MISSED OFFSET
	class FString                                      KillerSpawn;                                              // 0x00D0(0x0010) (ZeroConstructor)
	class FString                                      SurvivorSpawn;                                            // 0x00E0(0x0010) (ZeroConstructor)
	class FString                                      MatchID;                                                  // 0x00F0(0x0010) (ZeroConstructor)
	class FString                                      Platform;                                                 // 0x0100(0x0010) (ZeroConstructor)
	int                                                HookSpawned;                                              // 0x0110(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0114(0x0004) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.ReportAnalyticsController
// 0x00B0
struct FReportAnalyticsController
{
	unsigned char                                      UnknownData00[0xB0];                                      // 0x0000(0x00B0) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.ReportAnalytics
// 0x00A8 (0x00B0 - 0x0008)
struct FReportAnalytics : public FBaseSingleStructIndexAnalytics
{
	class FString                                      ClientIdTransmitter;                                      // 0x0008(0x0010) (ZeroConstructor)
	class FString                                      ClientIdReceiver;                                         // 0x0018(0x0010) (ZeroConstructor)
	class FString                                      MirrorsIdTransmitter;                                     // 0x0028(0x0010) (ZeroConstructor)
	class FString                                      MirrorsIdReceiver;                                        // 0x0038(0x0010) (ZeroConstructor)
	TEnumAsByte<EPlayerRole>                           RoleTransmitter;                                          // 0x0048(0x0001) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EPlayerRole>                           RoleReceiver;                                             // 0x0049(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x004A(0x0006) MISSED OFFSET
	class FString                                      MatchID;                                                  // 0x0050(0x0010) (ZeroConstructor)
	class FString                                      GameMode;                                                 // 0x0060(0x0010) (ZeroConstructor)
	class FString                                      ReportType;                                               // 0x0070(0x0010) (ZeroConstructor)
	class FString                                      ReportCategory;                                           // 0x0080(0x0010) (ZeroConstructor)
	class FString                                      Comments;                                                 // 0x0090(0x0010) (ZeroConstructor)
	class FString                                      Platform;                                                 // 0x00A0(0x0010) (ZeroConstructor)
};

// ScriptStruct DeadByDaylight.SpecialEventAnalyticsController
// 0x0068
struct FSpecialEventAnalyticsController
{
	unsigned char                                      UnknownData00[0x68];                                      // 0x0000(0x0068) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.SpecialEventAnalytics
// 0x0030 (0x0068 - 0x0038)
struct FSpecialEventAnalytics : public FUniquelyIdentifiedAnalytic
{
	TEnumAsByte<EPlayerRole>                           Role;                                                     // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
	class FString                                      MatchID;                                                  // 0x0040(0x0010) (ZeroConstructor)
	struct FName                                       EventName;                                                // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       Challenge;                                                // 0x0058(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                amount;                                                   // 0x0060(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CummulativeAmount;                                        // 0x0064(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DeadByDaylight.AnalyticsManager
// 0x0DC8
struct FAnalyticsManager
{
	unsigned char                                      UnknownData00[0x428];                                     // 0x0000(0x0428) MISSED OFFSET
	struct FGameplay_KillerAnalyticsController         GameplayKillerAnalytics;                                  // 0x0428(0x0160)
	struct FGameplay_SurvivorAnalyticsController       GameplaySurvivorAnalytics;                                // 0x0588(0x0140)
	struct FReportAnalyticsController                  ReportAnalytics;                                          // 0x06C8(0x00B0)
	struct FProceduralGenerationAnalyticsController    ProceduralGenerationAnalytics;                            // 0x0778(0x0118)
	unsigned char                                      UnknownData01[0x538];                                     // 0x0890(0x0538) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.CheckDlcPurchaseTimeEventData
// 0x0058
struct FCheckDlcPurchaseTimeEventData
{
	TMap<class FString, struct FDateTime>              DlcPurchaseTimes;                                         // 0x0000(0x0050) (ZeroConstructor, Transient)
	struct FDateTime                                   LastSessionTimestamp;                                     // 0x0050(0x0008) (ZeroConstructor, Transient)
};

// ScriptStruct DeadByDaylight.ContextEventData
// 0x0058
struct FContextEventData
{
	class FString                                      ContextGroupName;                                         // 0x0000(0x0010) (ZeroConstructor, Transient)
	uint32_t                                           ContextGroupUid;                                          // 0x0010(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	class FString                                      PreviousContextName;                                      // 0x0018(0x0010) (ZeroConstructor, Transient)
	class FString                                      CurrentContextName;                                       // 0x0028(0x0010) (ZeroConstructor, Transient)
	uint32_t                                           CurrentContextUid;                                        // 0x0038(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	class FString                                      NextContextName;                                          // 0x0040(0x0010) (ZeroConstructor, Transient)
	struct FDateTime                                   Timestamp;                                                // 0x0050(0x0008) (ZeroConstructor, Transient)
};

// ScriptStruct DeadByDaylight.MenuIndexChangeEventData
// 0x0004
struct FMenuIndexChangeEventData
{
	int                                                Index;                                                    // 0x0000(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct DeadByDaylight.MenuRoleChangeEventData
// 0x0001
struct FMenuRoleChangeEventData
{
	TEnumAsByte<EPlayerRole>                           PlayerRole;                                               // 0x0000(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct DeadByDaylight.GameInfoEventData
// 0x0002
struct FGameInfoEventData
{
	TEnumAsByte<EPlayerRole>                           PlayerRole;                                               // 0x0000(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	TEnumAsByte<EGameType>                             GameType;                                                 // 0x0001(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct DeadByDaylight.ProfileLoadEventData
// 0x0010
struct FProfileLoadEventData
{
	bool                                               FirstTimePlaying;                                         // 0x0000(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FDateTime                                   Timestamp;                                                // 0x0008(0x0008) (ZeroConstructor, Transient)
};

// ScriptStruct DeadByDaylight.CharacterValidationData
// 0x0008
struct FCharacterValidationData
{
	int                                                PrestigeLevel;                                            // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                BloodwebLevel;                                            // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DeadByDaylight.SaveValidationData
// 0x0060
struct FSaveValidationData
{
	class FString                                      PlayerUID;                                                // 0x0000(0x0010) (ZeroConstructor)
	TMap<int, struct FCharacterValidationData>         CharacterData;                                            // 0x0010(0x0050) (ZeroConstructor)
};

// ScriptStruct DeadByDaylight.TutorialEndReward
// 0x0008 (0x0010 - 0x0008)
struct FTutorialEndReward : public FTableRowBase
{
	int                                                BloodpointReward;                                         // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.SurfaceTypeName
// 0x0008 (0x0010 - 0x0008)
struct FSurfaceTypeName : public FTableRowBase
{
	struct FName                                       Name;                                                     // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DeadByDaylight.PathPosition
// 0x0018
struct FPathPosition
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.PerkLevelText
// 0x0028
struct FPerkLevelText
{
	TArray<class FString>                              Tunables;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FText                                       TextOverride;                                             // 0x0010(0x0018) (Edit, BlueprintVisible)
};

// ScriptStruct DeadByDaylight.PerkProperties
// 0x00C0 (0x01B8 - 0x00F8)
struct FPerkProperties : public FItemData
{
	TArray<struct FName>                               Tags;                                                     // 0x00F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                AssociatedPlayerIndex;                                    // 0x0108(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MandatoryOnBloodweblevel;                                 // 0x010C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                TeachableOnBloodweblevel;                                 // 0x0110(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0114(0x0004) MISSED OFFSET
	TAssetPtr<class UClass>                            PerkBlueprint;                                            // 0x0118(0x0020) (Edit, BlueprintVisible)
	TArray<TEnumAsByte<EItemRarity>>                   PerkLevelRarity;                                          // 0x0138(0x0010) (Edit, EditFixedSize, ZeroConstructor)
	struct FText                                       PerkDefaultDescription;                                   // 0x0148(0x0018) (Edit, EditFixedSize)
	TArray<struct FPerkLevelText>                      PerkLevelTunables;                                        // 0x0160(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FText                                       PerkLevel1Description;                                    // 0x0170(0x0018) (Edit, EditFixedSize)
	struct FText                                       PerkLevel2Description;                                    // 0x0188(0x0018) (Edit, EditFixedSize)
	struct FText                                       PerkLevel3Description;                                    // 0x01A0(0x0018) (Edit, EditFixedSize)
};

// ScriptStruct DeadByDaylight.SurveilledGenerator
// 0x0010
struct FSurveilledGenerator
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.StatusEffectProperties
// 0x0038 (0x0130 - 0x00F8)
struct FStatusEffectProperties : public FItemData
{
	TArray<struct FName>                               Tags;                                                     // 0x00F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TAssetPtr<class UClass>                            StatusEffectBlueprint;                                    // 0x0108(0x0020) (Edit, BlueprintVisible)
	int                                                LevelToDisplay;                                           // 0x0128(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EStatusEffectType>                     StatusEffectType;                                         // 0x012C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x012D(0x0003) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.HookAnalytics
// 0x00A8 (0x00B0 - 0x0008)
struct FHookAnalytics : public FBaseSingleStructIndexAnalytics
{
	float                                              HookStartTime;                                            // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class FString                                      MirrorsIdSurvivor;                                        // 0x0010(0x0010) (ZeroConstructor)
	class FString                                      MirrorsIdKiller;                                          // 0x0020(0x0010) (ZeroConstructor)
	class FString                                      MirrorsIdRescuer;                                         // 0x0030(0x0010) (ZeroConstructor)
	int                                                TimesOnHook;                                              // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
	class FString                                      Outcome;                                                  // 0x0048(0x0010) (ZeroConstructor)
	float                                              HookDuration;                                             // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                EscapeAttemptStart;                                       // 0x005C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                EscapeAttemptFull;                                        // 0x0060(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SurvivorsRemaining;                                       // 0x0064(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                NumberOfActiveSurvivorsStart;                             // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                NumberOfActiveSurvivorsEnd;                               // 0x006C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                NumberOfActiveSurvivorsTotal;                             // 0x0070(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DurationCampFace;                                         // 0x0074(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DurationCampHard;                                         // 0x0078(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DurationCampSoft;                                         // 0x007C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                NumberOfRescuers;                                         // 0x0080(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TimeForFirstRescuer;                                      // 0x0084(0x0004) (ZeroConstructor, IsPlainOldData)
	class FString                                      MatchID;                                                  // 0x0088(0x0010) (ZeroConstructor)
	class FString                                      Platform;                                                 // 0x0098(0x0010) (ZeroConstructor)
	bool                                               ReverseBearTrapOn;                                        // 0x00A8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x00A9(0x0007) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.InteractionProficiencyProperties
// 0x0060 (0x0068 - 0x0008)
struct FInteractionProficiencyProperties : public FTableRowBase
{
	struct FName                                       ProficiencyID;                                            // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TAssetPtr<class UClass>                            ProficiencyBlueprint;                                     // 0x0010(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly)
	TArray<float>                                      BuffLevelThresholds;                                      // 0x0030(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<float>                                      DebuffLevelThresholds;                                    // 0x0040(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	bool                                               HasLevels;                                                // 0x0050(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0051(0x0007) MISSED OFFSET
	class FString                                      IconFilePath;                                             // 0x0058(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct DeadByDaylight.InteractionProficiencyData
// 0x0010
struct FInteractionProficiencyData
{
	bool                                               IsActive;                                                 // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                Level;                                                    // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EStatusEffectType>                     ProficiencyType;                                          // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	float                                              Value;                                                    // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DeadByDaylight.DirectionalHeightFogInterpolationValues
// 0x0050
struct FDirectionalHeightFogInterpolationValues
{
	float                                              FogDensity;                                               // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                FogInscatteringColor;                                     // 0x0004(0x0010) (ZeroConstructor, IsPlainOldData)
	float                                              DirectionalInscatteringExponent;                          // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DirectionalInscatteringStartDistance;                     // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                DirectionalInscatteringColor;                             // 0x001C(0x0010) (ZeroConstructor, IsPlainOldData)
	float                                              FogHeightFalloff;                                         // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              FogMaxOpacity;                                            // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              StartDistance;                                            // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<struct FHeightFogGradientEntry>             FogGradient;                                              // 0x0038(0x0010) (ZeroConstructor)
	float                                              DistanceUntilFlatFog;                                     // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DistanceUntilNoFog;                                       // 0x004C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DeadByDaylight.OutfitData
// 0x00B8 (0x00C0 - 0x0008)
struct FOutfitData : public FTableRowBase
{
	struct FName                                       ID;                                                       // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FItemUIData                                 UIData;                                                   // 0x0010(0x0040) (Edit)
	struct FItemAvailability                           Availability;                                             // 0x0050(0x0030) (Edit)
	TArray<struct FName>                               OutfitItems;                                              // 0x0080(0x0010) (Edit, ZeroConstructor)
	struct FText                                       VariationName;                                            // 0x0090(0x0018) (Edit)
	struct FText                                       VariationDescription;                                     // 0x00A8(0x0018) (Edit)
};

// ScriptStruct DeadByDaylight.SurvivorInfoData
// 0x0030
struct FSurvivorInfoData
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.EACAnalyticsController
// 0x0001
struct FEACAnalyticsController
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.EACAnalytics
// 0x0020 (0x0058 - 0x0038)
struct FEACAnalytics : public FUniquelyIdentifiedAnalytic
{
	class FString                                      LogMessage;                                               // 0x0038(0x0010) (ZeroConstructor)
	class FString                                      Version;                                                  // 0x0048(0x0010) (ZeroConstructor)
};

// ScriptStruct DeadByDaylight.EACClientViolationAnalytics
// 0x0010 (0x0068 - 0x0058)
struct FEACClientViolationAnalytics : public FEACAnalytics
{
	class FString                                      ViolationCase;                                            // 0x0058(0x0010) (ZeroConstructor)
};

// ScriptStruct DeadByDaylight.EACClientInitAnalytics
// 0x0008 (0x0060 - 0x0058)
struct FEACClientInitAnalytics : public FEACAnalytics
{
	unsigned char                                      ValidationErrorType;                                      // 0x0058(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0059(0x0007) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.EACServerValidateAnalytics
// 0x0000 (0x0060 - 0x0060)
struct FEACServerValidateAnalytics : public FEACClientInitAnalytics
{

};

// ScriptStruct DeadByDaylight.EACClientAuthChallengeAnalytics
// 0x0000 (0x0060 - 0x0060)
struct FEACClientAuthChallengeAnalytics : public FEACClientInitAnalytics
{

};

// ScriptStruct DeadByDaylight.EACClientAuthInitAnalytics
// 0x0000 (0x0060 - 0x0060)
struct FEACClientAuthInitAnalytics : public FEACClientInitAnalytics
{

};

// ScriptStruct DeadByDaylight.EmblemProgressionAnalytics
// 0x0028 (0x0060 - 0x0038)
struct FEmblemProgressionAnalytics : public FUniquelyIdentifiedAnalytic
{
	class FString                                      MatchID;                                                  // 0x0038(0x0010) (ZeroConstructor)
	class FString                                      EmblemId;                                                 // 0x0048(0x0010) (ZeroConstructor)
	float                                              EmblemValue;                                              // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.EnvironmentAnalytics
// 0x0020 (0x0058 - 0x0038)
struct FEnvironmentAnalytics : public FUniquelyIdentifiedAnalytic
{
	class FString                                      Environment;                                              // 0x0038(0x0010) (ZeroConstructor)
	class FString                                      Endpoint;                                                 // 0x0048(0x0010) (ZeroConstructor)
};

// ScriptStruct DeadByDaylight.InvalidLoadoutAnalytics
// 0x0010 (0x0048 - 0x0038)
struct FInvalidLoadoutAnalytics : public FUniquelyIdentifiedAnalytic
{
	int                                                SlasherPerkCount;                                         // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PowerAddonCount;                                          // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CamperPerkCount;                                          // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ItemAddonCount;                                           // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DeadByDaylight.PerkAcquisitionAnalytics
// 0x0048 (0x0080 - 0x0038)
struct FPerkAcquisitionAnalytics : public FUniquelyIdentifiedAnalytic
{
	class FString                                      CharacterName;                                            // 0x0038(0x0010) (ZeroConstructor)
	class FString                                      PerkID;                                                   // 0x0048(0x0010) (ZeroConstructor)
	class FString                                      PerkSource;                                               // 0x0058(0x0010) (ZeroConstructor)
	class FString                                      Duplicate;                                                // 0x0068(0x0010) (ZeroConstructor)
	int                                                PerkLevel;                                                // 0x0078(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x007C(0x0004) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.PostGame_KillerAnalyticsController
// 0x0001
struct FPostGame_KillerAnalyticsController
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.PostGameAnalyticsBase
// 0x0030 (0x0068 - 0x0038)
struct FPostGameAnalyticsBase : public FUniquelyIdentifiedAnalytic
{
	class FString                                      MatchID;                                                  // 0x0038(0x0010) (ZeroConstructor)
	int                                                BloodPoints;                                              // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              GameDuration;                                             // 0x004C(0x0004) (ZeroConstructor, IsPlainOldData)
	class FString                                      CharacterName;                                            // 0x0050(0x0010) (ZeroConstructor)
	int                                                Rank;                                                     // 0x0060(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0064(0x0004) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.PostGame_KillerAnalytics
// 0x0020 (0x0088 - 0x0068)
struct FPostGame_KillerAnalytics : public FPostGameAnalyticsBase
{
	int                                                Brutality;                                                // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Deviousness;                                              // 0x006C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Hunter;                                                   // 0x0070(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Sacrifice;                                                // 0x0074(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                EscapeesCount;                                            // 0x0078(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SacrificedCount;                                          // 0x007C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                KilledCount;                                              // 0x0080(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DisconnectCount;                                          // 0x0084(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DeadByDaylight.PostGame_SurvivorAnalyticsController
// 0x0001
struct FPostGame_SurvivorAnalyticsController
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.PostGame_SurvivorAnalytics
// 0x0028 (0x0090 - 0x0068)
struct FPostGame_SurvivorAnalytics : public FPostGameAnalyticsBase
{
	int                                                Objectives;                                               // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Survival;                                                 // 0x006C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Altruism;                                                 // 0x0070(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Boldness;                                                 // 0x0074(0x0004) (ZeroConstructor, IsPlainOldData)
	class FString                                      Outcome;                                                  // 0x0078(0x0010) (ZeroConstructor)
	TEnumAsByte<ECamperDamageState>                    DamageState;                                              // 0x0088(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0089(0x0003) MISSED OFFSET
	int                                                HookedCount;                                              // 0x008C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DeadByDaylight.S3CommandErrorAnalytics
// 0x0028 (0x0060 - 0x0038)
struct FS3CommandErrorAnalytics : public FUniquelyIdentifiedAnalytic
{
	class FString                                      URL;                                                      // 0x0038(0x0010) (ZeroConstructor)
	class FString                                      Verb;                                                     // 0x0048(0x0010) (ZeroConstructor)
	bool                                               InvalidRequest;                                           // 0x0058(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               InvalidResponse;                                          // 0x0059(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               DecryptionFailure;                                        // 0x005A(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               BadResponse;                                              // 0x005B(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               ContentModifiedError;                                     // 0x005C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x005D(0x0003) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.S3CommandAnalytics
// 0x0060 (0x0098 - 0x0038)
struct FS3CommandAnalytics : public FUniquelyIdentifiedAnalytic
{
	int                                                RequestContentLength;                                     // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	class FString                                      ContentType;                                              // 0x0040(0x0010) (ZeroConstructor)
	float                                              ElapsedTime;                                              // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
	class FString                                      Status;                                                   // 0x0058(0x0010) (ZeroConstructor)
	class FString                                      URL;                                                      // 0x0068(0x0010) (ZeroConstructor)
	class FString                                      Verb;                                                     // 0x0078(0x0010) (ZeroConstructor)
	int                                                ResponseContentLength;                                    // 0x0088(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ResponseCode;                                             // 0x008C(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               success;                                                  // 0x0090(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0091(0x0007) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.ShopAnalyticsController
// 0x0001
struct FShopAnalyticsController
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.ShopAnalytics
// 0x0020 (0x0058 - 0x0038)
struct FShopAnalytics : public FUniquelyIdentifiedAnalytic
{
	class FString                                      LogMessage;                                               // 0x0038(0x0010) (ZeroConstructor)
	class FString                                      Version;                                                  // 0x0048(0x0010) (ZeroConstructor)
};

// ScriptStruct DeadByDaylight.TransactionAnalyticsController
// 0x00A0
struct FTransactionAnalyticsController
{
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0000(0x00A0) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.TransactionAnalytics
// 0x0068 (0x00A0 - 0x0038)
struct FTransactionAnalytics : public FUniquelyIdentifiedAnalytic
{
	class FString                                      TransactionType;                                          // 0x0038(0x0010) (ZeroConstructor)
	class FString                                      TransactionSource;                                        // 0x0048(0x0010) (ZeroConstructor)
	class FString                                      SourceID;                                                 // 0x0058(0x0010) (ZeroConstructor)
	int                                                SourceTier;                                               // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
	class FString                                      CurrencyType;                                             // 0x0070(0x0010) (ZeroConstructor)
	int                                                CurrencyAmount;                                           // 0x0080(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CurrencyBalance;                                          // 0x0084(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                LevelAchieved;                                            // 0x0088(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Prestige;                                                 // 0x008C(0x0004) (ZeroConstructor, IsPlainOldData)
	class FString                                      ItemIDAcquired;                                           // 0x0090(0x0010) (ZeroConstructor)
};

// ScriptStruct DeadByDaylight.CustomizationCategoryData
// 0x0040 (0x0048 - 0x0008)
struct FCustomizationCategoryData : public FTableRowBase
{
	struct FName                                       ID;                                                       // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECustomizationCategory>                Category;                                                 // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	class FString                                      IconPath;                                                 // 0x0018(0x0010) (Edit, ZeroConstructor)
	struct FText                                       DisplayName;                                              // 0x0028(0x0018) (Edit)
	TEnumAsByte<EPlayerRole>                           Role;                                                     // 0x0040(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0041(0x0007) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.CharacterDescription
// 0x0110 (0x0118 - 0x0008)
struct FCharacterDescription : public FTableRowBase
{
	int                                                CharacterIndex;                                           // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EPlayerRole>                           Role;                                                     // 0x000C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECharacterDifficulty>                  Difficulty;                                               // 0x000D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x000E(0x0002) MISSED OFFSET
	struct FText                                       DisplayName;                                              // 0x0010(0x0018) (Edit, BlueprintVisible)
	struct FText                                       BackStory;                                                // 0x0028(0x0018) (Edit, BlueprintVisible)
	struct FText                                       Biography;                                                // 0x0040(0x0018) (Edit, BlueprintVisible)
	struct FName                                       IconFilePath;                                             // 0x0058(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	struct FName                                       BackgroundImagePath;                                      // 0x0060(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	TArray<struct FCustomizedMeshPart>                 CustomizationDescription;                                 // 0x0068(0x0010) (Edit, ZeroConstructor)
	class FString                                      RequiredDlcIDString;                                      // 0x0078(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FName                                       IdName;                                                   // 0x0088(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsInChunk0;                                               // 0x0090(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               IsAvailableInNonViolentBuild;                             // 0x0091(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0092(0x0006) MISSED OFFSET
	TAssetPtr<class UClass>                            GamePawn;                                                 // 0x0098(0x0020) (Edit)
	TAssetPtr<class UClass>                            MenuPawn;                                                 // 0x00B8(0x0020) (Edit)
	struct FName                                       DefaultItem;                                              // 0x00D8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EGender>                               Gender;                                                   // 0x00E0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x00E1(0x0007) MISSED OFFSET
	TArray<class FString>                              CharacterPrefix;                                          // 0x00E8(0x0010) (Edit, ZeroConstructor)
	TArray<TEnumAsByte<EKillerAbilities>>              KillerAbilities;                                          // 0x00F8(0x0010) (Edit, ZeroConstructor)
	TArray<struct FName>                               CustomizationCategories;                                  // 0x0108(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Config)
};

// ScriptStruct DeadByDaylight.StoreFeaturedBannerData
// 0x0040
struct FStoreFeaturedBannerData
{
	struct FText                                       Title;                                                    // 0x0000(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FText                                       Subtitle;                                                 // 0x0018(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	class FString                                      ImagePath;                                                // 0x0030(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct DeadByDaylight.StoreBannersData
// 0x0050 (0x0058 - 0x0008)
struct FStoreBannersData : public FTableRowBase
{
	struct FName                                       BannerId;                                                 // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FStoreFeaturedBannerData                    BannerData;                                               // 0x0010(0x0040) (Edit, BlueprintVisible, BlueprintReadOnly)
	bool                                               UseAsDefault;                                             // 0x0050(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EStoreBannerLocation>                  DefaultLocation;                                          // 0x0051(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0052(0x0006) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.PreLevelGenerationModifierProperties
// 0x0010 (0x0018 - 0x0008)
struct FPreLevelGenerationModifierProperties : public FTableRowBase
{
	struct FName                                       ModifierID;                                               // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EPreLevelGenerationModifierType>       ModifierType;                                             // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EKillerAbilities>                      KillerAbiliy;                                             // 0x0011(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0012(0x0002) MISSED OFFSET
	float                                              ModifierValue;                                            // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DeadByDaylight.BlindPackData
// 0x0000 (0x0090 - 0x0090)
struct FBlindPackData : public FBaseItemData
{

};

// ScriptStruct DeadByDaylight.BundleData
// 0x0048
struct FBundleData
{
	struct FName                                       ID;                                                       // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FItemUIData                                 UIData;                                                   // 0x0008(0x0040) (Edit)
};

// ScriptStruct DeadByDaylight.CustomizationAnimData
// 0x0020 (0x00A8 - 0x0088)
struct FCustomizationAnimData : public FCustomizationData
{
	TAssetPtr<class UAnimMontage>                      Animation;                                                // 0x0088(0x0020) (Edit)
};

// ScriptStruct DeadByDaylight.VariationData
// 0x0020 (0x0028 - 0x0008)
struct FVariationData : public FTableRowBase
{
	struct FGameplayTag                                Tag;                                                      // 0x0008(0x0008) (Edit)
	struct FText                                       Name;                                                     // 0x0010(0x0018) (Edit)
};

// ScriptStruct DeadByDaylight.PlatformDlcData
// 0x0050 (0x0058 - 0x0008)
struct FPlatformDlcData : public FTableRowBase
{
	class FString                                      ID;                                                       // 0x0008(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class FString                                      Description;                                              // 0x0018(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class FString                                      DlcIdSteam;                                               // 0x0028(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class FString                                      DlcIdPS4;                                                 // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class FString                                      DlcIdXB1;                                                 // 0x0048(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct DeadByDaylight.SaveDataBase
// 0x0010
struct FSaveDataBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	int                                                VersionNumber;                                            // 0x0008(0x0004) (ZeroConstructor, SaveGame, NoClear, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.LegacyPlayerSavedProfileDataShared
// 0x0038
struct FLegacyPlayerSavedProfileDataShared
{
	class FString                                      PlayerName;                                               // 0x0000(0x0010) (ZeroConstructor, SaveGame)
	int                                                SelectedCamperIndex;                                      // 0x0010(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	int                                                SelectedSlasherIndex;                                     // 0x0014(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	TArray<struct FName>                               SelectedCharacterCustomization;                           // 0x0018(0x0010) (ZeroConstructor, SaveGame)
	int                                                SlasherSkulls;                                            // 0x0028(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	int                                                CamperSkulls;                                             // 0x002C(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	int                                                CamperStreak;                                             // 0x0030(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.LegacySavedBloodwebNodeProperties
// 0x0018
struct FLegacySavedBloodwebNodeProperties
{
	TEnumAsByte<EBloodwebNodeContentType>              ContentType;                                              // 0x0000(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData)
	TEnumAsByte<EItemRarity>                           Rarity;                                                   // 0x0001(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0002(0x0006) MISSED OFFSET
	TArray<class FString>                              Tags;                                                     // 0x0008(0x0010) (ZeroConstructor, SaveGame)
};

// ScriptStruct DeadByDaylight.LegacySavedBloodwebNodeGate
// 0x0020
struct FLegacySavedBloodwebNodeGate
{
	struct FName                                       Description;                                              // 0x0000(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData)
	TEnumAsByte<EItemRarity>                           Rarity;                                                   // 0x0008(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData)
	TEnumAsByte<EPlayerRole>                           Role;                                                     // 0x0009(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData)
	TEnumAsByte<EBloodwebNodeGateTypes>                GateType;                                                 // 0x000A(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x000B(0x0005) MISSED OFFSET
	class FString                                      Param;                                                    // 0x0010(0x0010) (ZeroConstructor, SaveGame)
};

// ScriptStruct DeadByDaylight.LegacySavedBloodwebChest
// 0x0020
struct FLegacySavedBloodwebChest
{
	struct FName                                       ID;                                                       // 0x0000(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData)
	TEnumAsByte<EItemRarity>                           Rarity;                                                   // 0x0008(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	TArray<float>                                      GivenItemRarity;                                          // 0x0010(0x0010) (ZeroConstructor, SaveGame)
};

// ScriptStruct DeadByDaylight.LegacySavedBloodwebNode
// 0x0068
struct FLegacySavedBloodwebNode
{
	struct FLegacySavedBloodwebNodeProperties          Properties;                                               // 0x0000(0x0018) (SaveGame)
	TArray<struct FLegacySavedBloodwebNodeGate>        Gates;                                                    // 0x0018(0x0010) (ZeroConstructor, SaveGame)
	TEnumAsByte<EBloodwebNodeState>                    State;                                                    // 0x0028(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
	class FString                                      NodeID;                                                   // 0x0030(0x0010) (ZeroConstructor, SaveGame)
	struct FName                                       ContentId;                                                // 0x0040(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData)
	struct FLegacySavedBloodwebChest                   BloodwebChest;                                            // 0x0048(0x0020) (SaveGame)
};

// ScriptStruct DeadByDaylight.LegacySavedBloodWebRingPersistentData
// 0x0010
struct FLegacySavedBloodWebRingPersistentData
{
	TArray<struct FLegacySavedBloodwebNode>            NodeData;                                                 // 0x0000(0x0010) (ZeroConstructor, SaveGame)
};

// ScriptStruct DeadByDaylight.LegacySavedBloodWebPersistentData
// 0x0038
struct FLegacySavedBloodWebPersistentData
{
	int                                                VersionNumber;                                            // 0x0000(0x0004) (ZeroConstructor, SaveGame, NoClear, IsPlainOldData)
	int                                                Level;                                                    // 0x0004(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	TArray<struct FLegacySavedBloodWebRingPersistentData> RingData;                                                 // 0x0008(0x0010) (ZeroConstructor, SaveGame)
	TArray<struct FName>                               Paths;                                                    // 0x0018(0x0010) (ZeroConstructor, SaveGame)
	class FString                                      EntityCurrentNode;                                        // 0x0028(0x0010) (ZeroConstructor, SaveGame)
};

// ScriptStruct DeadByDaylight.LegacySavedPlayerLoadoutData
// 0x0080
struct FLegacySavedPlayerLoadoutData
{
	struct FName                                       Item;                                                     // 0x0000(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData)
	TArray<struct FName>                               ItemAddOns;                                               // 0x0008(0x0010) (ZeroConstructor, SaveGame)
	TArray<struct FName>                               CamperPerks;                                              // 0x0018(0x0010) (ZeroConstructor, SaveGame)
	TArray<int>                                        CamperPerkLevels;                                         // 0x0028(0x0010) (ZeroConstructor, SaveGame)
	struct FName                                       CamperFavor;                                              // 0x0038(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData)
	struct FName                                       Power;                                                    // 0x0040(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData)
	TArray<struct FName>                               PowerAddOns;                                              // 0x0048(0x0010) (ZeroConstructor, SaveGame)
	TArray<struct FName>                               SlasherPerks;                                             // 0x0058(0x0010) (ZeroConstructor, SaveGame)
	TArray<int>                                        SlasherPerkLevels;                                        // 0x0068(0x0010) (ZeroConstructor, SaveGame)
	struct FName                                       SlasherFavor;                                             // 0x0078(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData)
};

// ScriptStruct DeadByDaylight.LegacyCharacterSavedInventoryData
// 0x0018
struct FLegacyCharacterSavedInventoryData
{
	uint32_t                                           Version;                                                  // 0x0000(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FName                                       Name;                                                     // 0x0008(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData)
	int64_t                                            TimeObtainedSinceEpoch;                                   // 0x0010(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData)
};

// ScriptStruct DeadByDaylight.LegacyCharacterSavedProfileData
// 0x0110
struct FLegacyCharacterSavedProfileData
{
	int                                                VersionNumber;                                            // 0x0000(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	int                                                BloodPoints;                                              // 0x0004(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	int                                                BloodwebLevel;                                            // 0x0008(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	int                                                PrestigeLevel;                                            // 0x000C(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	int                                                TimesConfronted;                                          // 0x0010(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	TArray<struct FDateTime>                           PrestigeDates;                                            // 0x0018(0x0010) (ZeroConstructor, SaveGame)
	struct FLegacySavedBloodWebPersistentData          BloodWebData;                                             // 0x0028(0x0038) (SaveGame)
	struct FLegacySavedPlayerLoadoutData               CharacterLoadoutData;                                     // 0x0060(0x0080) (SaveGame)
	TArray<struct FName>                               Inventory;                                                // 0x00E0(0x0010) (ZeroConstructor, SaveGame)
	TArray<struct FLegacyCharacterSavedInventoryData>  InventoryData;                                            // 0x00F0(0x0010) (ZeroConstructor, SaveGame)
	TArray<struct FName>                               CurrentCustomization;                                     // 0x0100(0x0010) (ZeroConstructor, SaveGame)
};

// ScriptStruct DeadByDaylight.LegacySavedDailyRitualInstance
// 0x0050
struct FLegacySavedDailyRitualInstance
{
	struct FName                                       RitualKey;                                                // 0x0000(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData)
	TArray<TEnumAsByte<EDBDScoreTypes>>                TrackedEvents;                                            // 0x0008(0x0010) (ZeroConstructor, SaveGame)
	TArray<int>                                        CharacterIDs;                                             // 0x0018(0x0010) (ZeroConstructor, SaveGame)
	TArray<TEnumAsByte<EPlayerRole>>                   Roles;                                                    // 0x0028(0x0010) (ZeroConstructor, SaveGame)
	float                                              Progress;                                                 // 0x0038(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	float                                              Threshold;                                                // 0x003C(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	float                                              Tolerance;                                                // 0x0040(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	float                                              DisplayThreshold;                                         // 0x0044(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	float                                              ExpReward;                                                // 0x0048(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	bool                                               Active;                                                   // 0x004C(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData)
	bool                                               Rewarded;                                                 // 0x004D(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData)
	bool                                               StateChanged;                                             // 0x004E(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x004F(0x0001) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.LegacySavedDailyRitualContainer
// 0x0018
struct FLegacySavedDailyRitualContainer
{
	struct FDateTime                                   LastRitualReceivedDate;                                   // 0x0000(0x0008) (ZeroConstructor, SaveGame)
	TArray<struct FLegacySavedDailyRitualInstance>     Rituals;                                                  // 0x0008(0x0010) (ZeroConstructor, SaveGame)
};

// ScriptStruct DeadByDaylight.LegacySavedFearMarketItemInstance
// 0x0018
struct FLegacySavedFearMarketItemInstance
{
	struct FName                                       ItemId;                                                   // 0x0000(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData)
	int                                                Cost;                                                     // 0x0008(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	int                                                BloodpointConversion;                                     // 0x000C(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	bool                                               Purchased;                                                // 0x0010(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.LegacySavedFearMarketOfferingInstance
// 0x0020
struct FLegacySavedFearMarketOfferingInstance
{
	TArray<struct FLegacySavedFearMarketItemInstance>  ObjectsForSale;                                           // 0x0000(0x0010) (ZeroConstructor, SaveGame)
	struct FDateTime                                   StartTime;                                                // 0x0010(0x0008) (ZeroConstructor, SaveGame)
	struct FDateTime                                   EndTime;                                                  // 0x0018(0x0008) (ZeroConstructor, SaveGame)
};

// ScriptStruct DeadByDaylight.LegacyPlayerSavedProfileDataLocal
// 0x0168
struct FLegacyPlayerSavedProfileDataLocal
{
	int                                                Tokens;                                                   // 0x0000(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<struct FName>                               Offerings;                                                // 0x0008(0x0010) (ZeroConstructor, SaveGame)
	bool                                               FirstTimePlaying;                                         // 0x0018(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData)
	bool                                               HasBeenGivenKillerTutorialEndReward;                      // 0x0019(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData)
	bool                                               HasBeenGivenSurvivorTutorialEndReward;                    // 0x001A(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x001B(0x0001) MISSED OFFSET
	int                                                Wins;                                                     // 0x001C(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	int                                                Losses;                                                   // 0x0020(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	TMap<int, struct FLegacyCharacterSavedProfileData> CharacterData;                                            // 0x0028(0x0050) (ZeroConstructor, SaveGame)
	uint64_t                                           CurrentSeasonTicks;                                       // 0x0078(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData)
	struct FLegacySavedDailyRitualContainer            DailyRituals;                                             // 0x0080(0x0018) (SaveGame)
	struct FLegacySavedFearMarketOfferingInstance      FearMarket;                                               // 0x0098(0x0020) (SaveGame)
	struct FLegacySavedPlayerLoadoutData               LastConnectedLoadout;                                     // 0x00B8(0x0080) (SaveGame)
	int                                                LastConnectedCharacterIndex;                              // 0x0138(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x013C(0x0004) MISSED OFFSET
	struct FDateTime                                   DisconnectPenaltyTime;                                    // 0x0140(0x0008) (ZeroConstructor, SaveGame)
	int                                                _bloodpoints;                                             // 0x0148(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	int                                                _bonusBloodpoints;                                        // 0x014C(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	int                                                _unclampedBloodpoints;                                    // 0x0150(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	int                                                _fearTokens;                                              // 0x0154(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	struct FDateTime                                   _ongoingGameTime;                                         // 0x0158(0x0008) (ZeroConstructor, SaveGame)
	bool                                               _fearTokensMigrated;                                      // 0x0160(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0161(0x0007) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.LegacyPlayerSavedProfileData
// 0x01B0 (0x01C0 - 0x0010)
struct FLegacyPlayerSavedProfileData : public FSaveDataBase
{
	class FString                                      PlayerUID;                                                // 0x0010(0x0010) (ZeroConstructor, SaveGame)
	struct FLegacyPlayerSavedProfileDataShared         SharedData;                                               // 0x0020(0x0038) (SaveGame)
	struct FLegacyPlayerSavedProfileDataLocal          LocalData;                                                // 0x0058(0x0168) (SaveGame)
};

// ScriptStruct DeadByDaylight.KeyTupleBool
// 0x0010
struct FKeyTupleBool
{
	struct FName                                       Key;                                                      // 0x0000(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData)
	bool                                               Value;                                                    // 0x0008(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.CharacterSavedInventoryDataV7
// 0x0020
struct FCharacterSavedInventoryDataV7
{
	struct FName                                       ID;                                                       // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                Num;                                                      // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class FString                                      I;                                                        // 0x0010(0x0010) (ZeroConstructor, SaveGame)
};

// ScriptStruct DeadByDaylight.SavedStatsDataV7
// 0x0010
struct FSavedStatsDataV7
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData)
	float                                              Value;                                                    // 0x0008(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.CharacterSavedProfileDataV7
// 0x0118
struct FCharacterSavedProfileDataV7
{
	int                                                BloodwebLevel;                                            // 0x0000(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	int                                                PrestigeLevel;                                            // 0x0004(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	int                                                TimesConfronted;                                          // 0x0008(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	TArray<class FString>                              PrestigeDates;                                            // 0x0010(0x0010) (ZeroConstructor, SaveGame)
	struct FLegacySavedBloodWebPersistentData          BloodWebData;                                             // 0x0020(0x0038) (SaveGame)
	struct FLegacySavedPlayerLoadoutData               CharacterLoadoutData;                                     // 0x0058(0x0080) (SaveGame)
	TArray<struct FCharacterSavedInventoryDataV7>      Inventory;                                                // 0x00D8(0x0010) (ZeroConstructor, SaveGame)
	TArray<struct FSavedStatsDataV7>                   StatProgression;                                          // 0x00E8(0x0010) (ZeroConstructor, SaveGame)
	TArray<struct FName>                               CurrentCustomization;                                     // 0x00F8(0x0010) (ZeroConstructor, SaveGame)
	TArray<struct FName>                               UniquePerksAdded;                                         // 0x0108(0x0010) (ZeroConstructor, SaveGame)
};

// ScriptStruct DeadByDaylight.CharacterKeyTuple
// 0x0120
struct FCharacterKeyTuple
{
	int                                                Key;                                                      // 0x0000(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FCharacterSavedProfileDataV7                Data;                                                     // 0x0008(0x0118) (SaveGame)
};

// ScriptStruct DeadByDaylight.SavedDailyRitualContainerV7
// 0x0040
struct FSavedDailyRitualContainerV7
{
	class FString                                      LastRitualReceivedDate;                                   // 0x0000(0x0010) (ZeroConstructor, SaveGame)
	class FString                                      LastRitualPopupDate;                                      // 0x0010(0x0010) (ZeroConstructor, SaveGame)
	class FString                                      LastRitualDismissedDate;                                  // 0x0020(0x0010) (ZeroConstructor, SaveGame)
	TArray<struct FLegacySavedDailyRitualInstance>     Rituals;                                                  // 0x0030(0x0010) (ZeroConstructor, SaveGame)
};

// ScriptStruct DeadByDaylight.SavedFearMarketOfferingInstanceV7
// 0x0030
struct FSavedFearMarketOfferingInstanceV7
{
	TArray<struct FLegacySavedFearMarketItemInstance>  ObjectsForSale;                                           // 0x0000(0x0010) (ZeroConstructor, SaveGame)
	class FString                                      StartTime;                                                // 0x0010(0x0010) (ZeroConstructor, SaveGame)
	class FString                                      EndTime;                                                  // 0x0020(0x0010) (ZeroConstructor, SaveGame)
};

// ScriptStruct DeadByDaylight.SaveDataV7
// 0x0250 (0x0260 - 0x0010)
struct FSaveDataV7 : public FSaveDataBase
{
	class FString                                      PlayerUID;                                                // 0x0010(0x0010) (ZeroConstructor, SaveGame)
	int                                                SelectedCamperIndex;                                      // 0x0020(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	int                                                SelectedSlasherIndex;                                     // 0x0024(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	TArray<struct FName>                               Offerings;                                                // 0x0028(0x0010) (ZeroConstructor, SaveGame)
	bool                                               FirstTimePlaying;                                         // 0x0038(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0039(0x0003) MISSED OFFSET
	int                                                ConsecutiveMatchStreak;                                   // 0x003C(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	bool                                               HasBeenGivenKillerTutorialEndReward;                      // 0x0040(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData)
	bool                                               HasBeenGivenSurvivorTutorialEndReward;                    // 0x0041(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0042(0x0006) MISSED OFFSET
	uint64_t                                           CurrentSeasonTicks;                                       // 0x0048(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData)
	int                                                LastConnectedCharacterIndex;                              // 0x0050(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
	class FString                                      DisconnectPenaltyTime;                                    // 0x0058(0x0010) (ZeroConstructor, SaveGame)
	class FString                                      LastMatchEndTime;                                         // 0x0068(0x0010) (ZeroConstructor, SaveGame)
	class FString                                      LastMatchStartTime;                                       // 0x0078(0x0010) (ZeroConstructor, SaveGame)
	class FString                                      LastKillerMatchEndTime;                                   // 0x0088(0x0010) (ZeroConstructor, SaveGame)
	class FString                                      LastSurvivorMatchEndTime;                                 // 0x0098(0x0010) (ZeroConstructor, SaveGame)
	int                                                Experience;                                               // 0x00A8(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	int                                                BonusExperience;                                          // 0x00AC(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	int                                                FearTokens;                                               // 0x00B0(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	bool                                               FearTokensMigrated;                                       // 0x00B4(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x00B5(0x0003) MISSED OFFSET
	class FString                                      OngoingGameTime;                                          // 0x00B8(0x0010) (ZeroConstructor, SaveGame)
	int                                                CumulativeMatches;                                        // 0x00C8(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x00CC(0x0004) MISSED OFFSET
	TArray<struct FKeyTupleBool>                       PageVisited;                                              // 0x00D0(0x0010) (ZeroConstructor, SaveGame)
	int                                                CumulativeMatchesAsSurvivor;                              // 0x00E0(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	int                                                CumulativeMatchesAsKiller;                                // 0x00E4(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	struct FDateTime                                   LastMatchTimestamp;                                       // 0x00E8(0x0008) (ZeroConstructor, SaveGame)
	struct FDateTime                                   LastSessionTimestamp;                                     // 0x00F0(0x0008) (ZeroConstructor, SaveGame)
	int                                                CumulativeSessions;                                       // 0x00F8(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x00FC(0x0004) MISSED OFFSET
	class FString                                      CumulativePlaytime;                                       // 0x0100(0x0010) (ZeroConstructor, SaveGame)
	TArray<struct FCharacterKeyTuple>                  CharacterData;                                            // 0x0110(0x0010) (ZeroConstructor, SaveGame)
	struct FSavedDailyRitualContainerV7                DailyRituals;                                             // 0x0120(0x0040) (SaveGame)
	struct FSavedFearMarketOfferingInstanceV7          FearMarket;                                               // 0x0160(0x0030) (SaveGame)
	struct FLegacySavedPlayerLoadoutData               LastLoadout;                                              // 0x0190(0x0080) (SaveGame)
	struct FConsoleUserSettings                        ConsoleUserSettings;                                      // 0x0210(0x0040) (SaveGame)
	TArray<struct FSavedStatsDataV7>                   PlayerStatProgression;                                    // 0x0250(0x0010) (ZeroConstructor, SaveGame)
};

// ScriptStruct DeadByDaylight.TunableValue
// 0x0028 (0x0030 - 0x0008)
struct FTunableValue : public FTableRowBase
{
	float                                              Value;                                                    // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class FString                                      Description;                                              // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class FString                                      DescriptorTags;                                           // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct DeadByDaylight.OfferingTriggerPositionData
// 0x0018
struct FOfferingTriggerPositionData
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	int                                                Index;                                                    // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              PosX;                                                     // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              PosY;                                                     // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.TutorialNotificationData
// 0x0048 (0x0050 - 0x0008)
struct FTutorialNotificationData : public FTableRowBase
{
	struct FText                                       Title;                                                    // 0x0008(0x0018) (Edit, BlueprintVisible)
	struct FText                                       Description;                                              // 0x0020(0x0018) (Edit, BlueprintVisible)
	class FString                                      IconPath;                                                 // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               IsShowAnalyticEnabled;                                    // 0x0048(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0049(0x0007) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.TutorialTallyData
// 0x0010
struct FTutorialTallyData
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	bool                                               IsKiller;                                                 // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               FirstTimeCompleted;                                       // 0x0009(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x000A(0x0002) MISSED OFFSET
	int                                                BloodpointsScore;                                         // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DeadByDaylight.CharacterCustomizationDataTable
// 0x0028 (0x0030 - 0x0008)
struct FCharacterCustomizationDataTable : public FTableRowBase
{
	int                                                CharacterIndex;                                           // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	TAssetPtr<class UDataTable>                        CustomizationStoreDB;                                     // 0x0010(0x0020) (Edit)
};

// ScriptStruct DeadByDaylight.PlayerFloatTuple
// 0x0010
struct FPlayerFloatTuple
{
	class ACharacter*                                  Player;                                                   // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct DeadByDaylight.YawAndPitchRotator_NetQuantize32
// 0x000C
struct FYawAndPitchRotator_NetQuantize32
{
	struct FRotator                                    _value;                                                   // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DeadByDaylight.VideoThumbnailProperties
// 0x0018 (0x0020 - 0x0008)
struct FVideoThumbnailProperties : public FTableRowBase
{
	struct FName                                       Name;                                                     // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               HasAudio;                                                 // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	class UMediaSource*                                source;                                                   // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
