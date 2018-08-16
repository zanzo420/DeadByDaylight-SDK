#pragma once

// DeadByDaylight (2.0.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DBD_AB_Menu_Slasher08_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass AB_Menu_Slasher08.AB_Menu_Slasher08_C
// 0x0490 (0x0908 - 0x0478)
class UAB_Menu_Slasher08_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0478(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_894CB67B4CD5DDBD2FD170B776753D83;      // 0x0480(0x0048)
	struct FAnimNode_RandomPlayer                      AnimGraphNode_RandomPlayer_822F70494DF7153047BC35A360A5EB52;// 0x04C8(0x0090)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_EDCE2A114F7862833B974FB3D370DC9C;// 0x0558(0x0070)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_56DB53CC4F40B595C6227E9FCF076699;// 0x05C8(0x00D0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_6AC91EC94D8E613514B24DAEA7AA217F;// 0x0698(0x00D0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_DCAB80CF41470F8276256E9148434A4E;// 0x0768(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_0CF8FC0B401C36A360CDFBA08D374396;// 0x07D8(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_35B921D04392157E56CE07BBE1D9B4BB;// 0x0820(0x00D8)
	bool                                               Role_Selected;                                            // 0x08F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Is_Online;                                                // 0x08F9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x08FA(0x0006) MISSED OFFSET
	class UStaticMesh*                                 Hatchet;                                                  // 0x0900(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass AB_Menu_Slasher08.AB_Menu_Slasher08_C");
		return ptr;
	}


	void GetKiller(class ABP_Menu_Slasher08_C** Menu_Slasher_08);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher08_AnimGraphNode_BlendListByBool_56DB53CC4F40B595C6227E9FCF076699();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher08_AnimGraphNode_BlendListByBool_6AC91EC94D8E613514B24DAEA7AA217F();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void AnimNotify_FX_MakeHatchetAppear();
	void AnimNotify_FX_MakeHatchetDisappear();
	void ExecuteUbergraph_AB_Menu_Slasher08(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
