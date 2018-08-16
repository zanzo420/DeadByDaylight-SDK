#pragma once

// DeadByDaylight (2.0.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DBD_OnlinePresence_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class OnlinePresence.MirrorsConfig
// 0x0000 (0x0028 - 0x0028)
class UMirrorsConfig : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlinePresence.MirrorsConfig");
		return ptr;
	}

};


// Class OnlinePresence.OnlinePresenceExternalCommands
// 0x0048 (0x0070 - 0x0028)
class UOnlinePresenceExternalCommands : public UObject
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0028(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlinePresence.OnlinePresenceExternalCommands");
		return ptr;
	}


	void DBD_MirrorsWalletWithdraw(const class FString& currencyName, int Value);
	void DBD_MirrorsWalletGetCurrency(const class FString& currencyName);
	void DBD_MirrorsSaveTestValue(const class FString& StateName, int Version);
	void DBD_MirrorsGetValue(const class FString& StateName);
	bool DBD_IsDlcInstalled(const class FString& inString);
	bool DBD_GrantPromoItems();
	bool DBD_GenerateTestItems();
};


// Class OnlinePresence.SteamConfig
// 0x0000 (0x0028 - 0x0028)
class USteamConfig : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlinePresence.SteamConfig");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
