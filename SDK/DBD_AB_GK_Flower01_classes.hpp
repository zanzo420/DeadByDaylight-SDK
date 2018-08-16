#pragma once

// DeadByDaylight (2.0.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DBD_AB_GK_Flower01_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass AB_GK_Flower01.AB_GK_Flower01_C
// 0x0468 (0x08E0 - 0x0478)
class UAB_GK_Flower01_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0478(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_DAF6E71F49CE421E76C084BA95651088;      // 0x0480(0x0048)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_CA73E0934A5AD1D906942EB4291A98A5;// 0x04C8(0x0268)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_CF425B93469EEF15ADFA4BA2F24AC4F0;// 0x0730(0x0048)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_11A67B9E40109278C85C45BE009232C6;// 0x0778(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_79D4D1764675F1332123FB9E591845FD;// 0x07C0(0x00D8)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_254B271B4610535A9B72A991D32D94BF;// 0x0898(0x0048)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass AB_GK_Flower01.AB_GK_Flower01_C");
		return ptr;
	}


	void ExecuteUbergraph_AB_GK_Flower01(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
