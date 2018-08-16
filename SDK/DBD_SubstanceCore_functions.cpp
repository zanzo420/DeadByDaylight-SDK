// DeadByDaylight (2.0.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DBD_SubstanceCore_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SubstanceCore.SubstanceGraphInstance.SetInputInt
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class FString                  Identifier                     (Parm, ZeroConstructor)
// TArray<int>                    Value                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void USubstanceGraphInstance::SetInputInt(const class FString& Identifier, TArray<int> Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function SubstanceCore.SubstanceGraphInstance.SetInputInt");

	USubstanceGraphInstance_SetInputInt_Params params;
	params.Identifier = Identifier;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubstanceCore.SubstanceGraphInstance.SetInputImg
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                  InputName                      (Parm, ZeroConstructor)
// class UObject*                 Value                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USubstanceGraphInstance::SetInputImg(const class FString& InputName, class UObject* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function SubstanceCore.SubstanceGraphInstance.SetInputImg");

	USubstanceGraphInstance_SetInputImg_Params params;
	params.InputName = InputName;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SubstanceCore.SubstanceGraphInstance.SetInputFloat
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class FString                  Identifier                     (Parm, ZeroConstructor)
// TArray<float>                  InputValues                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void USubstanceGraphInstance::SetInputFloat(const class FString& Identifier, TArray<float> InputValues)
{
	static auto fn = UObject::FindObject<UFunction>("Function SubstanceCore.SubstanceGraphInstance.SetInputFloat");

	USubstanceGraphInstance_SetInputFloat_Params params;
	params.Identifier = Identifier;
	params.InputValues = InputValues;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubstanceCore.SubstanceGraphInstance.GetIntInputDesc
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                  Identifier                     (Parm, ZeroConstructor)
// struct FSubstanceIntInputDesc  ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSubstanceIntInputDesc USubstanceGraphInstance::GetIntInputDesc(const class FString& Identifier)
{
	static auto fn = UObject::FindObject<UFunction>("Function SubstanceCore.SubstanceGraphInstance.GetIntInputDesc");

	USubstanceGraphInstance_GetIntInputDesc_Params params;
	params.Identifier = Identifier;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SubstanceCore.SubstanceGraphInstance.GetInstanceDesc
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FSubstanceInstanceDesc  ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSubstanceInstanceDesc USubstanceGraphInstance::GetInstanceDesc()
{
	static auto fn = UObject::FindObject<UFunction>("Function SubstanceCore.SubstanceGraphInstance.GetInstanceDesc");

	USubstanceGraphInstance_GetInstanceDesc_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SubstanceCore.SubstanceGraphInstance.GetInputType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                  InputName                      (Parm, ZeroConstructor)
// TEnumAsByte<ESubstanceInputType> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ESubstanceInputType> USubstanceGraphInstance::GetInputType(const class FString& InputName)
{
	static auto fn = UObject::FindObject<UFunction>("Function SubstanceCore.SubstanceGraphInstance.GetInputType");

	USubstanceGraphInstance_GetInputType_Params params;
	params.InputName = InputName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SubstanceCore.SubstanceGraphInstance.GetInputNames
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<class FString>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class FString> USubstanceGraphInstance::GetInputNames()
{
	static auto fn = UObject::FindObject<UFunction>("Function SubstanceCore.SubstanceGraphInstance.GetInputNames");

	USubstanceGraphInstance_GetInputNames_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SubstanceCore.SubstanceGraphInstance.GetInputInt
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                  Identifier                     (Parm, ZeroConstructor)
// TArray<int>                    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<int> USubstanceGraphInstance::GetInputInt(const class FString& Identifier)
{
	static auto fn = UObject::FindObject<UFunction>("Function SubstanceCore.SubstanceGraphInstance.GetInputInt");

	USubstanceGraphInstance_GetInputInt_Params params;
	params.Identifier = Identifier;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SubstanceCore.SubstanceGraphInstance.GetInputFloat
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                  Identifier                     (Parm, ZeroConstructor)
// TArray<float>                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<float> USubstanceGraphInstance::GetInputFloat(const class FString& Identifier)
{
	static auto fn = UObject::FindObject<UFunction>("Function SubstanceCore.SubstanceGraphInstance.GetInputFloat");

	USubstanceGraphInstance_GetInputFloat_Params params;
	params.Identifier = Identifier;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SubstanceCore.SubstanceGraphInstance.GetFloatInputDesc
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                  Identifier                     (Parm, ZeroConstructor)
// struct FSubstanceFloatInputDesc ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSubstanceFloatInputDesc USubstanceGraphInstance::GetFloatInputDesc(const class FString& Identifier)
{
	static auto fn = UObject::FindObject<UFunction>("Function SubstanceCore.SubstanceGraphInstance.GetFloatInputDesc");

	USubstanceGraphInstance_GetFloatInputDesc_Params params;
	params.Identifier = Identifier;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SubstanceCore.SubstanceUtility.SyncRendering
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USubstanceGraphInstance* InstancesToRender              (Parm, ZeroConstructor, IsPlainOldData)

void USubstanceUtility::STATIC_SyncRendering(class USubstanceGraphInstance* InstancesToRender)
{
	static auto fn = UObject::FindObject<UFunction>("Function SubstanceCore.SubstanceUtility.SyncRendering");

	USubstanceUtility_SyncRendering_Params params;
	params.InstancesToRender = InstancesToRender;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubstanceCore.SubstanceUtility.SetGraphInstanceOutputSizeInt
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USubstanceGraphInstance* GraphInstance                  (Parm, ZeroConstructor, IsPlainOldData)
// int                            Width                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            Height                         (Parm, ZeroConstructor, IsPlainOldData)

void USubstanceUtility::STATIC_SetGraphInstanceOutputSizeInt(class USubstanceGraphInstance* GraphInstance, int Width, int Height)
{
	static auto fn = UObject::FindObject<UFunction>("Function SubstanceCore.SubstanceUtility.SetGraphInstanceOutputSizeInt");

	USubstanceUtility_SetGraphInstanceOutputSizeInt_Params params;
	params.GraphInstance = GraphInstance;
	params.Width = Width;
	params.Height = Height;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubstanceCore.SubstanceUtility.SetGraphInstanceOutputSize
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USubstanceGraphInstance* GraphInstance                  (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ESubstanceTextureSize> Width                          (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ESubstanceTextureSize> Height                         (Parm, ZeroConstructor, IsPlainOldData)

void USubstanceUtility::STATIC_SetGraphInstanceOutputSize(class USubstanceGraphInstance* GraphInstance, TEnumAsByte<ESubstanceTextureSize> Width, TEnumAsByte<ESubstanceTextureSize> Height)
{
	static auto fn = UObject::FindObject<UFunction>("Function SubstanceCore.SubstanceUtility.SetGraphInstanceOutputSize");

	USubstanceUtility_SetGraphInstanceOutputSize_Params params;
	params.GraphInstance = GraphInstance;
	params.Width = Width;
	params.Height = Height;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubstanceCore.SubstanceUtility.ResetInputParameters
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USubstanceGraphInstance* GraphInstance                  (Parm, ZeroConstructor, IsPlainOldData)

void USubstanceUtility::STATIC_ResetInputParameters(class USubstanceGraphInstance* GraphInstance)
{
	static auto fn = UObject::FindObject<UFunction>("Function SubstanceCore.SubstanceUtility.ResetInputParameters");

	USubstanceUtility_ResetInputParameters_Params params;
	params.GraphInstance = GraphInstance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubstanceCore.SubstanceUtility.GetSubstanceTextures
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USubstanceGraphInstance* GraphInstance                  (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class USubstanceTexture2D*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class USubstanceTexture2D*> USubstanceUtility::STATIC_GetSubstanceTextures(class USubstanceGraphInstance* GraphInstance)
{
	static auto fn = UObject::FindObject<UFunction>("Function SubstanceCore.SubstanceUtility.GetSubstanceTextures");

	USubstanceUtility_GetSubstanceTextures_Params params;
	params.GraphInstance = GraphInstance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SubstanceCore.SubstanceUtility.GetSubstances
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMaterialInterface*      Material                       (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class USubstanceGraphInstance*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class USubstanceGraphInstance*> USubstanceUtility::STATIC_GetSubstances(class UMaterialInterface* Material)
{
	static auto fn = UObject::FindObject<UFunction>("Function SubstanceCore.SubstanceUtility.GetSubstances");

	USubstanceUtility_GetSubstances_Params params;
	params.Material = Material;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SubstanceCore.SubstanceUtility.GetSubstanceLoadingProgress
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float USubstanceUtility::STATIC_GetSubstanceLoadingProgress()
{
	static auto fn = UObject::FindObject<UFunction>("Function SubstanceCore.SubstanceUtility.GetSubstanceLoadingProgress");

	USubstanceUtility_GetSubstanceLoadingProgress_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SubstanceCore.SubstanceUtility.GetGraphName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USubstanceGraphInstance* GraphInstance                  (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString USubstanceUtility::STATIC_GetGraphName(class USubstanceGraphInstance* GraphInstance)
{
	static auto fn = UObject::FindObject<UFunction>("Function SubstanceCore.SubstanceUtility.GetGraphName");

	USubstanceUtility_GetGraphName_Params params;
	params.GraphInstance = GraphInstance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SubstanceCore.SubstanceUtility.GetFactoryName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USubstanceGraphInstance* GraphInstance                  (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString USubstanceUtility::STATIC_GetFactoryName(class USubstanceGraphInstance* GraphInstance)
{
	static auto fn = UObject::FindObject<UFunction>("Function SubstanceCore.SubstanceUtility.GetFactoryName");

	USubstanceUtility_GetFactoryName_Params params;
	params.GraphInstance = GraphInstance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SubstanceCore.SubstanceUtility.DuplicateGraphInstance
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class USubstanceGraphInstance* GraphInstance                  (Parm, ZeroConstructor, IsPlainOldData)
// class USubstanceGraphInstance* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class USubstanceGraphInstance* USubstanceUtility::STATIC_DuplicateGraphInstance(class UObject* WorldContextObject, class USubstanceGraphInstance* GraphInstance)
{
	static auto fn = UObject::FindObject<UFunction>("Function SubstanceCore.SubstanceUtility.DuplicateGraphInstance");

	USubstanceUtility_DuplicateGraphInstance_Params params;
	params.WorldContextObject = WorldContextObject;
	params.GraphInstance = GraphInstance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SubstanceCore.SubstanceUtility.CreateInstanceOutputs
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class USubstanceGraphInstance* GraphInstance                  (Parm, ZeroConstructor, IsPlainOldData)
// TArray<int>                    OutputIndices                  (Parm, ZeroConstructor)

void USubstanceUtility::STATIC_CreateInstanceOutputs(class UObject* WorldContextObject, class USubstanceGraphInstance* GraphInstance, TArray<int> OutputIndices)
{
	static auto fn = UObject::FindObject<UFunction>("Function SubstanceCore.SubstanceUtility.CreateInstanceOutputs");

	USubstanceUtility_CreateInstanceOutputs_Params params;
	params.WorldContextObject = WorldContextObject;
	params.GraphInstance = GraphInstance;
	params.OutputIndices = OutputIndices;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubstanceCore.SubstanceUtility.CreateGraphInstance
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class USubstanceInstanceFactory* Factory                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            GraphDescIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  InstanceName                   (Parm, ZeroConstructor)
// class USubstanceGraphInstance* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class USubstanceGraphInstance* USubstanceUtility::STATIC_CreateGraphInstance(class UObject* WorldContextObject, class USubstanceInstanceFactory* Factory, int GraphDescIndex, const class FString& InstanceName)
{
	static auto fn = UObject::FindObject<UFunction>("Function SubstanceCore.SubstanceUtility.CreateGraphInstance");

	USubstanceUtility_CreateGraphInstance_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Factory = Factory;
	params.GraphDescIndex = GraphDescIndex;
	params.InstanceName = InstanceName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SubstanceCore.SubstanceUtility.CopyInputParameters
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USubstanceGraphInstance* SourceGraphInstance            (Parm, ZeroConstructor, IsPlainOldData)
// class USubstanceGraphInstance* DestGraphInstance              (Parm, ZeroConstructor, IsPlainOldData)

void USubstanceUtility::STATIC_CopyInputParameters(class USubstanceGraphInstance* SourceGraphInstance, class USubstanceGraphInstance* DestGraphInstance)
{
	static auto fn = UObject::FindObject<UFunction>("Function SubstanceCore.SubstanceUtility.CopyInputParameters");

	USubstanceUtility_CopyInputParameters_Params params;
	params.SourceGraphInstance = SourceGraphInstance;
	params.DestGraphInstance = DestGraphInstance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubstanceCore.SubstanceUtility.AsyncRendering
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USubstanceGraphInstance* InstancesToRender              (Parm, ZeroConstructor, IsPlainOldData)

void USubstanceUtility::STATIC_AsyncRendering(class USubstanceGraphInstance* InstancesToRender)
{
	static auto fn = UObject::FindObject<UFunction>("Function SubstanceCore.SubstanceUtility.AsyncRendering");

	USubstanceUtility_AsyncRendering_Params params;
	params.InstancesToRender = InstancesToRender;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
