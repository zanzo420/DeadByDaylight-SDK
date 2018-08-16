#pragma once

// DeadByDaylight (2.0.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DBD_BP_Menu_Base_Camper_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Menu_Base_Camper.BP_Menu_Base_Camper_C
// 0x0048 (0x08B8 - 0x0870)
class ABP_Menu_Base_Camper_C : public ADBDMenuPlayer
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0870(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UMaterialHelper*                             MaterialHelper;                                           // 0x0878(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAkComponent*                                Ak_Audio_Menu_Base_Camper;                                // 0x0880(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCustomizedSkeletalMesh*                     CustomizedSkeletalMesh;                                   // 0x0888(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Dissolve_Dissolve_596272B14FBF23BFE861F687F86F9EB1;       // 0x0890(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Dissolve__Direction_596272B14FBF23BFE861F687F86F9EB1;     // 0x0894(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0895(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Dissolve;                                                 // 0x0898(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Destroying;                                               // 0x08A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x08A1(0x0007) MISSED OFFSET
	class FString                                      Character_Name;                                           // 0x08A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Menu_Base_Camper.BP_Menu_Base_Camper_C");
		return ptr;
	}


	void UserConstructionScript();
	void Dissolve__FinishedFunc();
	void Dissolve__UpdateFunc();
	void ReceiveBeginPlay();
	void BeginDestroySequence();
	void BeginSmokeIn();
	void RestartInSequence();
	void ExecuteUbergraph_BP_Menu_Base_Camper(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
