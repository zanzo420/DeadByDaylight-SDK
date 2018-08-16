#pragma once

// DeadByDaylight (2.0.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DBD_AB_Menu_Slasher07_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass AB_Menu_Slasher07.AB_Menu_Slasher07_C
// 0x0482 (0x08FA - 0x0478)
class UAB_Menu_Slasher07_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0478(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_2A146C6343EDC69A3D43138C6D0A386F;      // 0x0480(0x0048)
	struct FAnimNode_RandomPlayer                      AnimGraphNode_RandomPlayer_ECE706C043E4582D391538A643800316;// 0x04C8(0x0090)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_8CB492C74ABB145DA503CBA9034EBCD6;// 0x0558(0x0070)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_E055F6E84A5F2F6806C0F2AD53F9ECA5;// 0x05C8(0x00D0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_569BC25E40E82E610ACC5B9E99E89747;// 0x0698(0x00D0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2D81FCEF42C19C7BF5ED3998C9A3E2B1;// 0x0768(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_294A1192449E12213EA78F9263DBD774;// 0x07D8(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_FF56DAF64983584D556D29A78D5128B5;// 0x0820(0x00D8)
	bool                                               Role_Selected;                                            // 0x08F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Is_Online;                                                // 0x08F9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass AB_Menu_Slasher07.AB_Menu_Slasher07_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher07_AnimGraphNode_BlendListByBool_E055F6E84A5F2F6806C0F2AD53F9ECA5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher07_AnimGraphNode_BlendListByBool_569BC25E40E82E610ACC5B9E99E89747();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_AB_Menu_Slasher07(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
