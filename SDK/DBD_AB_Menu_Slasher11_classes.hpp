#pragma once

// DeadByDaylight (2.0.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DBD_AB_Menu_Slasher11_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass AB_Menu_Slasher11.AB_Menu_Slasher11_C
// 0x0482 (0x08FA - 0x0478)
class UAB_Menu_Slasher11_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0478(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_DE1B3B1E4B2557AE5480B3BE4CCF58A7;      // 0x0480(0x0048)
	struct FAnimNode_RandomPlayer                      AnimGraphNode_RandomPlayer_41AD7FEB470840CF3DFB8A95C33450F1;// 0x04C8(0x0090)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_87E088004D53E9E243DE4990D8FCFA4E;// 0x0558(0x0070)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_95F3215942EBE112D3A1C48DA1AED92C;// 0x05C8(0x00D0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_1E0708E34BB65E30A1088898EB67E5EA;// 0x0698(0x00D0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_436A2D69402463AF97A386B09F701BB8;// 0x0768(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_60C7D8254D1AEC1CFF2B5DA0BF0A4C2B;// 0x07D8(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_38A3A32C433620BB635E3AA98D7104A3;// 0x0820(0x00D8)
	bool                                               Role_Selected;                                            // 0x08F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Is_Online;                                                // 0x08F9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass AB_Menu_Slasher11.AB_Menu_Slasher11_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher11_AnimGraphNode_BlendListByBool_95F3215942EBE112D3A1C48DA1AED92C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher11_AnimGraphNode_BlendListByBool_1E0708E34BB65E30A1088898EB67E5EA();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_AB_Menu_Slasher11(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
