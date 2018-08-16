#pragma once

// DeadByDaylight (2.0.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DBD_AB_Menu_Slasher04_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass AB_Menu_Slasher04.AB_Menu_Slasher04_C
// 0x0482 (0x08FA - 0x0478)
class UAB_Menu_Slasher04_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0478(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_6C1911B847E14B74E75764AECC8D14C6;      // 0x0480(0x0048)
	struct FAnimNode_RandomPlayer                      AnimGraphNode_RandomPlayer_4D86DC35479E3F7F89A7EEAE489783C7;// 0x04C8(0x0090)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_0912499B4259291FD7D739949E411EAD;// 0x0558(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_015FA6F94AB5BD6E819807B2607BC4C3;// 0x05C8(0x0070)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_3E5F3E944302F0EED62E03B89D905C3E;// 0x0638(0x00D0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_9CEB04F642540FBE8381969D77B7B103;// 0x0708(0x00D0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_F6AEF70B4F05CBD5D73B58B0581C532F;// 0x07D8(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_6A23691B41F8D8EE5B48AFBF355B4FB4;// 0x0820(0x00D8)
	bool                                               Role_Selected;                                            // 0x08F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Is_Online;                                                // 0x08F9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass AB_Menu_Slasher04.AB_Menu_Slasher04_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher04_AnimGraphNode_BlendListByBool_3E5F3E944302F0EED62E03B89D905C3E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher04_AnimGraphNode_BlendListByBool_9CEB04F642540FBE8381969D77B7B103();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_AB_Menu_Slasher04(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
