#pragma once

// DeadByDaylight (2.0.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DBD_SubstanceCore_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class SubstanceCore.SubstanceGraphInstance
// 0x0028 (0x0050 - 0x0028)
class USubstanceGraphInstance : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	class USubstanceInstanceFactory*                   Parent;                                                   // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class UObject*>                             ImageSources;                                             // 0x0038(0x0010) (ZeroConstructor)
	bool                                               bFreezed;                                                 // 0x0048(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0049(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SubstanceCore.SubstanceGraphInstance");
		return ptr;
	}


	void SetInputInt(const class FString& Identifier, TArray<int> Value);
	bool SetInputImg(const class FString& InputName, class UObject* Value);
	void SetInputFloat(const class FString& Identifier, TArray<float> InputValues);
	struct FSubstanceIntInputDesc GetIntInputDesc(const class FString& Identifier);
	struct FSubstanceInstanceDesc GetInstanceDesc();
	TEnumAsByte<ESubstanceInputType> GetInputType(const class FString& InputName);
	TArray<class FString> GetInputNames();
	TArray<int> GetInputInt(const class FString& Identifier);
	TArray<float> GetInputFloat(const class FString& Identifier);
	struct FSubstanceFloatInputDesc GetFloatInputDesc(const class FString& Identifier);
};


// Class SubstanceCore.SubstanceImageInput
// 0x0128 (0x0150 - 0x0028)
class USubstanceImageInput : public UObject
{
public:
	unsigned char                                      UnknownData00[0xE0];                                      // 0x0028(0x00E0) MISSED OFFSET
	int                                                CompressionRGB;                                           // 0x0108(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                CompressionAlpha;                                         // 0x010C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                SizeX;                                                    // 0x0110(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                SizeY;                                                    // 0x0114(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                NumComponents;                                            // 0x0118(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x011C(0x0004) MISSED OFFSET
	class FString                                      SourceFilePath;                                           // 0x0120(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	class FString                                      SourceFileTimestamp;                                      // 0x0130(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	TArray<class USubstanceGraphInstance*>             Consumers;                                                // 0x0140(0x0010) (ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SubstanceCore.SubstanceImageInput");
		return ptr;
	}

};


// Class SubstanceCore.SubstanceInstanceFactory
// 0x0010 (0x0038 - 0x0028)
class USubstanceInstanceFactory : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	TEnumAsByte<ESubstanceGenerationMode>              GenerationMode;                                           // 0x0030(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0031(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SubstanceCore.SubstanceInstanceFactory");
		return ptr;
	}

};


// Class SubstanceCore.SubstanceSettings
// 0x0010 (0x0038 - 0x0028)
class USubstanceSettings : public UObject
{
public:
	int                                                MemoryBudgetMb;                                           // 0x0028(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                CPUCores;                                                 // 0x002C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                AsyncLoadMipClip;                                         // 0x0030(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	TEnumAsByte<ESubstanceGenerationMode>              DefaultGenerationMode;                                    // 0x0034(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	TEnumAsByte<ESubstanceEngineType>                  SubstanceEngine;                                          // 0x0035(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0036(0x0002) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SubstanceCore.SubstanceSettings");
		return ptr;
	}

};


// Class SubstanceCore.SubstanceTexture2D
// 0x0038 (0x0118 - 0x00E0)
class USubstanceTexture2D : public UTexture2DDynamic
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x00E0(0x0018) MISSED OFFSET
	class USubstanceGraphInstance*                     ParentInstance;                                           // 0x00F8(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	TEnumAsByte<ETextureAddress>                       AddressX;                                                 // 0x0100(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETextureAddress>                       AddressY;                                                 // 0x0101(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x16];                                      // 0x0102(0x0016) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SubstanceCore.SubstanceTexture2D");
		return ptr;
	}

};


// Class SubstanceCore.SubstanceUtility
// 0x0000 (0x0028 - 0x0028)
class USubstanceUtility : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SubstanceCore.SubstanceUtility");
		return ptr;
	}


	void STATIC_SyncRendering(class USubstanceGraphInstance* InstancesToRender);
	void STATIC_SetGraphInstanceOutputSizeInt(class USubstanceGraphInstance* GraphInstance, int Width, int Height);
	void STATIC_SetGraphInstanceOutputSize(class USubstanceGraphInstance* GraphInstance, TEnumAsByte<ESubstanceTextureSize> Width, TEnumAsByte<ESubstanceTextureSize> Height);
	void STATIC_ResetInputParameters(class USubstanceGraphInstance* GraphInstance);
	TArray<class USubstanceTexture2D*> STATIC_GetSubstanceTextures(class USubstanceGraphInstance* GraphInstance);
	TArray<class USubstanceGraphInstance*> STATIC_GetSubstances(class UMaterialInterface* Material);
	float STATIC_GetSubstanceLoadingProgress();
	class FString STATIC_GetGraphName(class USubstanceGraphInstance* GraphInstance);
	class FString STATIC_GetFactoryName(class USubstanceGraphInstance* GraphInstance);
	class USubstanceGraphInstance* STATIC_DuplicateGraphInstance(class UObject* WorldContextObject, class USubstanceGraphInstance* GraphInstance);
	void STATIC_CreateInstanceOutputs(class UObject* WorldContextObject, class USubstanceGraphInstance* GraphInstance, TArray<int> OutputIndices);
	class USubstanceGraphInstance* STATIC_CreateGraphInstance(class UObject* WorldContextObject, class USubstanceInstanceFactory* Factory, int GraphDescIndex, const class FString& InstanceName);
	void STATIC_CopyInputParameters(class USubstanceGraphInstance* SourceGraphInstance, class USubstanceGraphInstance* DestGraphInstance);
	void STATIC_AsyncRendering(class USubstanceGraphInstance* InstancesToRender);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
