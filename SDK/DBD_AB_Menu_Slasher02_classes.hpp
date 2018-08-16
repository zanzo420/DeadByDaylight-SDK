#pragma once

// DeadByDaylight (2.0.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DBD_AB_Menu_Slasher02_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass AB_Menu_Slasher02.AB_Menu_Slasher02_C
// 0x0482 (0x08FA - 0x0478)
class UAB_Menu_Slasher02_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0478(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_95C045D1406A0E4D4F0A79A287B901B8;      // 0x0480(0x0048)
	struct FAnimNode_RandomPlayer                      AnimGraphNode_RandomPlayer_39849E834D46FFAE59435D9D78AA33DB;// 0x04C8(0x0090)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_50F5ED33406D6A155C3C71873D8CDBF4;// 0x0558(0x0070)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_BB677A124EFB7AA5C54D6DBA2CBB1C90;// 0x05C8(0x00D0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_00ACF74E485924F789C0BEA41F1BC988;// 0x0698(0x00D0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_687450FE405BBFD7D9BBF79D4750A551;// 0x0768(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_59E2C1CE43079FE9720D6C895891E940;// 0x07D8(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_14AD44A9426AC93F4A5DDBB3FF97DDA9;// 0x0820(0x00D8)
	bool                                               Role_Selected;                                            // 0x08F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Is_Online;                                                // 0x08F9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass AB_Menu_Slasher02.AB_Menu_Slasher02_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher02_AnimGraphNode_BlendListByBool_BB677A124EFB7AA5C54D6DBA2CBB1C90();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher02_AnimGraphNode_BlendListByBool_00ACF74E485924F789C0BEA41F1BC988();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_AB_Menu_Slasher02(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
