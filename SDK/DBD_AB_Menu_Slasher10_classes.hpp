#pragma once

// DeadByDaylight (2.0.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DBD_AB_Menu_Slasher10_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass AB_Menu_Slasher10.AB_Menu_Slasher10_C
// 0x0482 (0x08FA - 0x0478)
class UAB_Menu_Slasher10_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0478(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_F78EF3484B7CAA049C256DADA51B8F0F;      // 0x0480(0x0048)
	struct FAnimNode_RandomPlayer                      AnimGraphNode_RandomPlayer_1D6CF34D441672803B23C98D78465A1D;// 0x04C8(0x0090)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_AAAB599649954D00988E27A44EAC4818;// 0x0558(0x0070)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_0303443740CD19BE52D1DBB998C467A3;// 0x05C8(0x00D0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_FD588DD5438FBD17018B6AA5B2830580;// 0x0698(0x00D0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_944B74FE40BB6451D8EBC1885DA50979;// 0x0768(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_D14B0C6C4BD911838E04D4928362779D;// 0x07D8(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_0E53C85F49EBB1526C5F5B8A8BD020B8;// 0x0820(0x00D8)
	bool                                               Role_Selected;                                            // 0x08F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Is_Online;                                                // 0x08F9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass AB_Menu_Slasher10.AB_Menu_Slasher10_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher10_AnimGraphNode_BlendListByBool_0303443740CD19BE52D1DBB998C467A3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher10_AnimGraphNode_BlendListByBool_FD588DD5438FBD17018B6AA5B2830580();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_AB_Menu_Slasher10(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
