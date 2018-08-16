#pragma once

// DeadByDaylight (2.0.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DBD_AB_Menu_Slasher12_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass AB_Menu_Slasher12.AB_Menu_Slasher12_C
// 0x077A (0x0BF2 - 0x0478)
class UAB_Menu_Slasher12_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0478(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_5578731E4DABC3361FF1538321E18979;      // 0x0480(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_1F3772B949994EB86EF4B2B243841CD4;// 0x04C8(0x0048)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_706098EC475196A8F73FD893379012C0;// 0x0510(0x0048)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_9E0E8F8247EDDC463A17C68BAAF533E9;// 0x0558(0x0268)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_1C00EB8048197A0E48EA54A694D56F95;// 0x07C0(0x0070)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_5BC3C03844179BD9B0A34786A44A2170;// 0x0830(0x00D0)
	struct FAnimNode_RandomPlayer                      AnimGraphNode_RandomPlayer_D7C35BCB4CB68E18483F018EE9361047;// 0x0900(0x0090)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_15367B06443B7A2F23F84CB44F9541AA;// 0x0990(0x00D0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_02ECF28A4CF77FA36F92659CCA923BBB;// 0x0A60(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_5BDA39984B8C72F0C5F18AAE3798CC35;// 0x0AD0(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_BAE7C81540EB0CC6C4EFF8BDD75F924E;// 0x0B18(0x00D8)
	bool                                               Role_Selected;                                            // 0x0BF0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Is_Online;                                                // 0x0BF1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass AB_Menu_Slasher12.AB_Menu_Slasher12_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher12_AnimGraphNode_BlendListByBool_5BC3C03844179BD9B0A34786A44A2170();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher12_AnimGraphNode_BlendListByBool_15367B06443B7A2F23F84CB44F9541AA();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_AB_Menu_Slasher12(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
