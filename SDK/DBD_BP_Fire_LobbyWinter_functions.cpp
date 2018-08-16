// DeadByDaylight (2.0.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DBD_BP_Fire_LobbyWinter_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Fire_LobbyWinter.BP_Fire_LobbyWinter_C.Fire_Smoke
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UParticleSystemComponent* FX                             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Smoke                          (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Fire_LobbyWinter_C::Fire_Smoke(class UParticleSystemComponent* FX, bool Smoke)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Fire_LobbyWinter.BP_Fire_LobbyWinter_C.Fire_Smoke");

	ABP_Fire_LobbyWinter_C_Fire_Smoke_Params params;
	params.FX = FX;
	params.Smoke = Smoke;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Fire_LobbyWinter.BP_Fire_LobbyWinter_C.Fire_Normal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UParticleSystemComponent* FX                             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Normal                         (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Fire_LobbyWinter_C::Fire_Normal(class UParticleSystemComponent* FX, bool Normal)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Fire_LobbyWinter.BP_Fire_LobbyWinter_C.Fire_Normal");

	ABP_Fire_LobbyWinter_C_Fire_Normal_Params params;
	params.FX = FX;
	params.Normal = Normal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Fire_LobbyWinter.BP_Fire_LobbyWinter_C.Spawn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UParticleSystemComponent* Spawn                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          Smoke1                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          Smoke2                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          F_Smoke2                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Fire0                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          F_Fire0                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          Flames1                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          Flames2                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          Flames3                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          F_Flames1                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          F_Flames2                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          F_Flames3                      (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Fire_LobbyWinter_C::Spawn(class UParticleSystemComponent* Spawn, float Smoke1, float Smoke2, float F_Smoke2, float Fire0, float F_Fire0, float Flames1, float Flames2, float Flames3, float F_Flames1, float F_Flames2, float F_Flames3)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Fire_LobbyWinter.BP_Fire_LobbyWinter_C.Spawn");

	ABP_Fire_LobbyWinter_C_Spawn_Params params;
	params.Spawn = Spawn;
	params.Smoke1 = Smoke1;
	params.Smoke2 = Smoke2;
	params.F_Smoke2 = F_Smoke2;
	params.Fire0 = Fire0;
	params.F_Fire0 = F_Fire0;
	params.Flames1 = Flames1;
	params.Flames2 = Flames2;
	params.Flames3 = Flames3;
	params.F_Flames1 = F_Flames1;
	params.F_Flames2 = F_Flames2;
	params.F_Flames3 = F_Flames3;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Fire_LobbyWinter.BP_Fire_LobbyWinter_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Fire_LobbyWinter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Fire_LobbyWinter.BP_Fire_LobbyWinter_C.UserConstructionScript");

	ABP_Fire_LobbyWinter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Fire_LobbyWinter.BP_Fire_LobbyWinter_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_Fire_LobbyWinter_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Fire_LobbyWinter.BP_Fire_LobbyWinter_C.ReceiveBeginPlay");

	ABP_Fire_LobbyWinter_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Fire_LobbyWinter.BP_Fire_LobbyWinter_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Fire_LobbyWinter_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Fire_LobbyWinter.BP_Fire_LobbyWinter_C.ReceiveTick");

	ABP_Fire_LobbyWinter_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Fire_LobbyWinter.BP_Fire_LobbyWinter_C.ExecuteUbergraph_BP_Fire_LobbyWinter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Fire_LobbyWinter_C::ExecuteUbergraph_BP_Fire_LobbyWinter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Fire_LobbyWinter.BP_Fire_LobbyWinter_C.ExecuteUbergraph_BP_Fire_LobbyWinter");

	ABP_Fire_LobbyWinter_C_ExecuteUbergraph_BP_Fire_LobbyWinter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
