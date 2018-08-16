#pragma once

// DeadByDaylight (2.0.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DBD_AB_GK_Hair01_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass AB_GK_Hair01.AB_GK_Hair01_C
// 0x08C4 (0x0D3C - 0x0478)
class UAB_GK_Hair01_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0478(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_1334E6504CC92E7CC72901AABBF42A94;      // 0x0480(0x0048)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_0495D5E74994C32DE49D4AB8B8958B88;// 0x04C8(0x0268)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_A36CC9D24DBE31137BA062A0C51DD695;// 0x0730(0x0048)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_ADF842C449056F86F39164B0DF2E8C1E;// 0x0778(0x0048)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_D1DF4A5948AA4D711111B6AD3AF9EDFE;// 0x07C0(0x0268)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_6DB1B058440707604F6D0CACF88AF7A3;// 0x0A28(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_9A48F1074266EC252B2F189BDC2AD8C2;// 0x0A70(0x00D8)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_F2CB322B4613FD4EA033CD8D424E8AEF;// 0x0B48(0x00D0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_8D1F927944235F05B2F5838878253955;// 0x0C18(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_27A58DB347965514A7D719A5D25B7C05;// 0x0C60(0x00D8)
	float                                              Elapsed_Time;                                             // 0x0D38(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass AB_GK_Hair01.AB_GK_Hair01_C");
		return ptr;
	}


	void IsOwnerViewed(bool* IsView);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_GK_Hair01_AnimGraphNode_BlendListByBool_F2CB322B4613FD4EA033CD8D424E8AEF();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_AB_GK_Hair01(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
