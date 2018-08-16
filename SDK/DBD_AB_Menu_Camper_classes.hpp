#pragma once

// DeadByDaylight (2.0.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DBD_AB_Menu_Camper_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass AB_Menu_Camper.AB_Menu_Camper_C
// 0x0CD9 (0x1151 - 0x0478)
class UAB_Menu_Camper_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0478(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_D6A54FD4412BE2837897E4ABA2477A6D;      // 0x0480(0x0048)
	unsigned char                                      UnknownData00[0x8];                                       // 0x04C8(0x0008) MISSED OFFSET
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_87CDC7454897F2F416A5B78669C05DF6;// 0x04D0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_BA6696174B4541A7601209A8053A34AA;// 0x0550(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_B44E52AC47F4E6FFE586F09B15B64231;// 0x05D0(0x0070)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_747405E04A935FAD9C72CBB1F0F32382;// 0x0640(0x00D0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_CA18E77B4B0B497DBB35D49C7ED38E17;// 0x0710(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_D0B614D94AE1CAD7310E278CD3814D58;// 0x0780(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_74854C744EEFA804445649943609ABC7;// 0x07C8(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_66A3D0774534001ED9733491AEB4D90F;// 0x0838(0x0070)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_C4545BC049DFD562DBE9C0BEDFB2FA1D;// 0x08A8(0x00D0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_CED04911460E9A60626E128CAD03E745;// 0x0978(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_F7A53F68489922301A4B719A79234F02;// 0x09C0(0x00D8)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_2C83DBE640DBC980B0BA558E2D0836E3;// 0x0A98(0x00A0)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_C524B5794BA138DEF5B9088AE8B497C8;// 0x0B38(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_64E7D07A47DE742E475D658C3FFF8D60;// 0x0BD8(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_E15D967F4ECBE49C5FDA81AC4F871271;// 0x0C48(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_DF89ABC24A787CC41FF5718160EDB13A;// 0x0C90(0x00D8)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_1FEC3DEC413D74173AA0479E83A096F6;// 0x0D68(0x00D0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5F0DFF09412847D085EFEDA4D8DBF464;// 0x0E38(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2281591C47946C3E7F883183A6847B89;// 0x0EA8(0x0070)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_5EB4AD52451079E09BBD61A047B60255;// 0x0F18(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_FD4D9B7F4AD7D06C9D0B229B1DC96A6A;// 0x0FB8(0x0070)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_612DCE9C44EB7890D120098F6019F197;// 0x1028(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_388E38E34F4D68B4CCA42BB66318D90F;// 0x10C8(0x0070)
	TEnumAsByte<EItemHandPosition>                     Hand_Position;                                            // 0x1138(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x1139(0x0003) MISSED OFFSET
	int                                                SelectedIdleIndex;                                        // 0x113C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UAnimSequence*>                       Menu_Idles;                                               // 0x1140(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               Role_Selected;                                            // 0x1150(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass AB_Menu_Camper.AB_Menu_Camper_C");
		return ptr;
	}


	void GetRandomMenuIdleOverride(int* Return);
	void HasMenuIdleOverrides(bool* Has_Overrides);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Camper_AnimGraphNode_TransitionResult_BA6696174B4541A7601209A8053A34AA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Camper_AnimGraphNode_BlendListByBool_747405E04A935FAD9C72CBB1F0F32382();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Camper_AnimGraphNode_BlendListByBool_C4545BC049DFD562DBE9C0BEDFB2FA1D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Camper_AnimGraphNode_LayeredBoneBlend_2C83DBE640DBC980B0BA558E2D0836E3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Camper_AnimGraphNode_LayeredBoneBlend_C524B5794BA138DEF5B9088AE8B497C8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Camper_AnimGraphNode_BlendListByBool_1FEC3DEC413D74173AA0479E83A096F6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Camper_AnimGraphNode_LayeredBoneBlend_5EB4AD52451079E09BBD61A047B60255();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Camper_AnimGraphNode_LayeredBoneBlend_612DCE9C44EB7890D120098F6019F197();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void AnimNotify_SelectNewIdle();
	void ExecuteUbergraph_AB_Menu_Camper(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
