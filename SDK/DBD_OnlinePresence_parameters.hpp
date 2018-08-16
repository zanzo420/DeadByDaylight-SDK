#pragma once

// DeadByDaylight (2.0.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DBD_OnlinePresence_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function OnlinePresence.OnlinePresenceExternalCommands.DBD_MirrorsWalletWithdraw
struct UOnlinePresenceExternalCommands_DBD_MirrorsWalletWithdraw_Params
{
	class FString                                      currencyName;                                             // (Parm, ZeroConstructor)
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OnlinePresence.OnlinePresenceExternalCommands.DBD_MirrorsWalletGetCurrency
struct UOnlinePresenceExternalCommands_DBD_MirrorsWalletGetCurrency_Params
{
	class FString                                      currencyName;                                             // (Parm, ZeroConstructor)
};

// Function OnlinePresence.OnlinePresenceExternalCommands.DBD_MirrorsSaveTestValue
struct UOnlinePresenceExternalCommands_DBD_MirrorsSaveTestValue_Params
{
	class FString                                      StateName;                                                // (Parm, ZeroConstructor)
	int                                                Version;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OnlinePresence.OnlinePresenceExternalCommands.DBD_MirrorsGetValue
struct UOnlinePresenceExternalCommands_DBD_MirrorsGetValue_Params
{
	class FString                                      StateName;                                                // (Parm, ZeroConstructor)
};

// Function OnlinePresence.OnlinePresenceExternalCommands.DBD_IsDlcInstalled
struct UOnlinePresenceExternalCommands_DBD_IsDlcInstalled_Params
{
	class FString                                      inString;                                                 // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlinePresence.OnlinePresenceExternalCommands.DBD_GrantPromoItems
struct UOnlinePresenceExternalCommands_DBD_GrantPromoItems_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlinePresence.OnlinePresenceExternalCommands.DBD_GenerateTestItems
struct UOnlinePresenceExternalCommands_DBD_GenerateTestItems_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
