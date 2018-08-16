// DeadByDaylight (2.0.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DBD_BP_BaseItemVfx_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_BaseItemVfx.BP_BaseItemVfx_C.ClearParticleSystems
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_BaseItemVfx_C::ClearParticleSystems()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseItemVfx.BP_BaseItemVfx_C.ClearParticleSystems");

	ABP_BaseItemVfx_C_ClearParticleSystems_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BaseItemVfx.BP_BaseItemVfx_C.SpawnEmitter
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UParticleSystem*         EmitterTemplate                (Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMeshComponent*  AttachToComponent              (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   attachPointName                (Parm, ZeroConstructor, IsPlainOldData)
// class UParticleSystemComponent* Particle_System                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_BaseItemVfx_C::SpawnEmitter(class UParticleSystem* EmitterTemplate, class USkeletalMeshComponent* AttachToComponent, const struct FName& attachPointName, class UParticleSystemComponent** Particle_System)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseItemVfx.BP_BaseItemVfx_C.SpawnEmitter");

	ABP_BaseItemVfx_C_SpawnEmitter_Params params;
	params.EmitterTemplate = EmitterTemplate;
	params.AttachToComponent = AttachToComponent;
	params.attachPointName = attachPointName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Particle_System != nullptr)
		*Particle_System = params.Particle_System;
}


// Function BP_BaseItemVfx.BP_BaseItemVfx_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_BaseItemVfx_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseItemVfx.BP_BaseItemVfx_C.UserConstructionScript");

	ABP_BaseItemVfx_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BaseItemVfx.BP_BaseItemVfx_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_BaseItemVfx_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseItemVfx.BP_BaseItemVfx_C.ReceiveBeginPlay");

	ABP_BaseItemVfx_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BaseItemVfx.BP_BaseItemVfx_C.OnDestroyed_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DestroyedActor                 (Parm, ZeroConstructor, IsPlainOldData)

void ABP_BaseItemVfx_C::OnDestroyed_Event(class AActor* DestroyedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseItemVfx.BP_BaseItemVfx_C.OnDestroyed_Event");

	ABP_BaseItemVfx_C_OnDestroyed_Event_Params params;
	params.DestroyedActor = DestroyedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BaseItemVfx.BP_BaseItemVfx_C.SetEmittersVisibility
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          Visible                        (Parm, ZeroConstructor, IsPlainOldData)

void ABP_BaseItemVfx_C::SetEmittersVisibility(bool* Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseItemVfx.BP_BaseItemVfx_C.SetEmittersVisibility");

	ABP_BaseItemVfx_C_SetEmittersVisibility_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BaseItemVfx.BP_BaseItemVfx_C.ExecuteUbergraph_BP_BaseItemVfx
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_BaseItemVfx_C::ExecuteUbergraph_BP_BaseItemVfx(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseItemVfx.BP_BaseItemVfx_C.ExecuteUbergraph_BP_BaseItemVfx");

	ABP_BaseItemVfx_C_ExecuteUbergraph_BP_BaseItemVfx_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
