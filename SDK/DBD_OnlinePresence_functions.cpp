// DeadByDaylight (2.0.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DBD_OnlinePresence_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function OnlinePresence.OnlinePresenceExternalCommands.DBD_MirrorsWalletWithdraw
// (Final, Exec, Native, Public)
// Parameters:
// class FString                  currencyName                   (Parm, ZeroConstructor)
// int                            Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UOnlinePresenceExternalCommands::DBD_MirrorsWalletWithdraw(const class FString& currencyName, int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlinePresence.OnlinePresenceExternalCommands.DBD_MirrorsWalletWithdraw");

	UOnlinePresenceExternalCommands_DBD_MirrorsWalletWithdraw_Params params;
	params.currencyName = currencyName;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlinePresence.OnlinePresenceExternalCommands.DBD_MirrorsWalletGetCurrency
// (Final, Exec, Native, Public)
// Parameters:
// class FString                  currencyName                   (Parm, ZeroConstructor)

void UOnlinePresenceExternalCommands::DBD_MirrorsWalletGetCurrency(const class FString& currencyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlinePresence.OnlinePresenceExternalCommands.DBD_MirrorsWalletGetCurrency");

	UOnlinePresenceExternalCommands_DBD_MirrorsWalletGetCurrency_Params params;
	params.currencyName = currencyName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlinePresence.OnlinePresenceExternalCommands.DBD_MirrorsSaveTestValue
// (Final, Exec, Native, Public)
// Parameters:
// class FString                  StateName                      (Parm, ZeroConstructor)
// int                            Version                        (Parm, ZeroConstructor, IsPlainOldData)

void UOnlinePresenceExternalCommands::DBD_MirrorsSaveTestValue(const class FString& StateName, int Version)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlinePresence.OnlinePresenceExternalCommands.DBD_MirrorsSaveTestValue");

	UOnlinePresenceExternalCommands_DBD_MirrorsSaveTestValue_Params params;
	params.StateName = StateName;
	params.Version = Version;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlinePresence.OnlinePresenceExternalCommands.DBD_MirrorsGetValue
// (Final, Exec, Native, Public)
// Parameters:
// class FString                  StateName                      (Parm, ZeroConstructor)

void UOnlinePresenceExternalCommands::DBD_MirrorsGetValue(const class FString& StateName)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlinePresence.OnlinePresenceExternalCommands.DBD_MirrorsGetValue");

	UOnlinePresenceExternalCommands_DBD_MirrorsGetValue_Params params;
	params.StateName = StateName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlinePresence.OnlinePresenceExternalCommands.DBD_IsDlcInstalled
// (Final, Exec, Native, Public)
// Parameters:
// class FString                  inString                       (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UOnlinePresenceExternalCommands::DBD_IsDlcInstalled(const class FString& inString)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlinePresence.OnlinePresenceExternalCommands.DBD_IsDlcInstalled");

	UOnlinePresenceExternalCommands_DBD_IsDlcInstalled_Params params;
	params.inString = inString;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlinePresence.OnlinePresenceExternalCommands.DBD_GrantPromoItems
// (Final, Exec, Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UOnlinePresenceExternalCommands::DBD_GrantPromoItems()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlinePresence.OnlinePresenceExternalCommands.DBD_GrantPromoItems");

	UOnlinePresenceExternalCommands_DBD_GrantPromoItems_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlinePresence.OnlinePresenceExternalCommands.DBD_GenerateTestItems
// (Final, Exec, Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UOnlinePresenceExternalCommands::DBD_GenerateTestItems()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlinePresence.OnlinePresenceExternalCommands.DBD_GenerateTestItems");

	UOnlinePresenceExternalCommands_DBD_GenerateTestItems_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
