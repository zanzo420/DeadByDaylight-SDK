#pragma once

// DeadByDaylight (2.0.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DBD_AB_Menu_Slasher09_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass AB_Menu_Slasher09.AB_Menu_Slasher09_C
// 0x0482 (0x08FA - 0x0478)
class UAB_Menu_Slasher09_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0478(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_DBB2BBEE49286F681B2C99905D7988F0;      // 0x0480(0x0048)
	struct FAnimNode_RandomPlayer                      AnimGraphNode_RandomPlayer_FCCE00DD47481064B782AC95A5CDBE0C;// 0x04C8(0x0090)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6DB699874F41C28F83095F9A07840999;// 0x0558(0x0070)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_87548AE84501490B5E689C959F2A9AAD;// 0x05C8(0x00D0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_A209C036469658430A2B18AAA554F1AC;// 0x0698(0x00D0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_482A97D94D034035C31CF89B8DF16F85;// 0x0768(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_7540BE544AEBC406897B03BCC045330F;// 0x07D8(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_82D537B84AC1C90FBC78BA83DFCAF7D5;// 0x0820(0x00D8)
	bool                                               Role_Selected;                                            // 0x08F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Is_Online;                                                // 0x08F9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass AB_Menu_Slasher09.AB_Menu_Slasher09_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher09_AnimGraphNode_BlendListByBool_87548AE84501490B5E689C959F2A9AAD();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher09_AnimGraphNode_BlendListByBool_A209C036469658430A2B18AAA554F1AC();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_AB_Menu_Slasher09(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
