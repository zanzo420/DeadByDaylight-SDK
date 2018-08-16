#pragma once

// DeadByDaylight (2.0.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DBD_AB_DK_Neckless01_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass AB_DK_Neckless01.AB_DK_Neckless01_C
// 0x0468 (0x08E0 - 0x0478)
class UAB_DK_Neckless01_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0478(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_8F3764E044212198E68D93B03C9115EF;      // 0x0480(0x0048)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_2C358B1B4484483B1D732F8E2E693F48;// 0x04C8(0x0268)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_B285C9DD4A24A1FF51BFF4B89E40212F;// 0x0730(0x0048)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_CDB1931E4B724F3B9AB47EAEE112F768;// 0x0778(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_D336ECDF4DD719BC113BDCB23A860006;// 0x07C0(0x00D8)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_73BB05C249391767D4838984429C83CD;// 0x0898(0x0048)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass AB_DK_Neckless01.AB_DK_Neckless01_C");
		return ptr;
	}


	void ExecuteUbergraph_AB_DK_Neckless01(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
