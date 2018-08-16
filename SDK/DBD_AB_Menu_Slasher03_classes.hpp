#pragma once

// DeadByDaylight (2.0.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DBD_AB_Menu_Slasher03_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass AB_Menu_Slasher03.AB_Menu_Slasher03_C
// 0x0482 (0x08FA - 0x0478)
class UAB_Menu_Slasher03_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0478(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_A0E2A15245524EEE1FF8E8BB897F84DE;      // 0x0480(0x0048)
	struct FAnimNode_RandomPlayer                      AnimGraphNode_RandomPlayer_672A83584167DE6871408E9D0B1F091D;// 0x04C8(0x0090)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7604F1F24A4545BE8CA4FF94FA5AB714;// 0x0558(0x0070)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_CAFF3C25463CC57BE93826B54D14E96E;// 0x05C8(0x00D0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_05E893B548EDEB5F0B0AB7AB00C6F716;// 0x0698(0x00D0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_67AEB8804BDFBF92FED4E1960C86BE1F;// 0x0768(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_D34A83FC420A2A90D74C53A3E5954FB0;// 0x07D8(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_FF9A2086413A9E5C471078AE12007DEC;// 0x0820(0x00D8)
	bool                                               Role_Selected;                                            // 0x08F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Is_Online;                                                // 0x08F9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass AB_Menu_Slasher03.AB_Menu_Slasher03_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher03_AnimGraphNode_BlendListByBool_CAFF3C25463CC57BE93826B54D14E96E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher03_AnimGraphNode_BlendListByBool_05E893B548EDEB5F0B0AB7AB00C6F716();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_AB_Menu_Slasher03(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
