#pragma once

// DeadByDaylight (2.0.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DBD_AB_GS_Necklace_ACC01_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass AB_GS_Necklace_ACC01.AB_GS_Necklace_ACC01_C
// 0x0468 (0x08E0 - 0x0478)
class UAB_GS_Necklace_ACC01_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0478(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_25EB933F4E541EFC544BF599EABFAAC3;      // 0x0480(0x0048)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_368E043F49A79AEDD2557492B7E3D286;// 0x04C8(0x0268)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_0732975B49F98D26737323A23A1B9E48;// 0x0730(0x0048)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_82F9076E4A8DF86046B67692DB226696;// 0x0778(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_953C356247B743A266B44C8BBCC58500;// 0x07C0(0x00D8)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_4A5137174A8A1647EF739790B50F18B9;// 0x0898(0x0048)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass AB_GS_Necklace_ACC01.AB_GS_Necklace_ACC01_C");
		return ptr;
	}


	void ExecuteUbergraph_AB_GS_Necklace_ACC01(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
