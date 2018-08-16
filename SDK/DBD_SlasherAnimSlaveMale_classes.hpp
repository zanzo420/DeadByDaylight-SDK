#pragma once

// DeadByDaylight (2.0.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DBD_SlasherAnimSlaveMale_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass SlasherAnimSlaveMale.SlasherAnimSlaveMale_C
// 0x00E0 (0x0560 - 0x0480)
class USlasherAnimSlaveMale_C : public USlaveAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0480(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_3AB31CB8402D88EF1E21D0A4175F3931;      // 0x0488(0x0048)
	struct FAnimNode_CopyPoseFromMesh                  AnimGraphNode_CopyPoseFromMesh_ED2ADC5C482131F7C2F7B0B1D7B2DF09;// 0x04D0(0x0090)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass SlasherAnimSlaveMale.SlasherAnimSlaveMale_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_SlasherAnimSlaveMale_AnimGraphNode_CopyPoseFromMesh_ED2ADC5C482131F7C2F7B0B1D7B2DF09();
	void ExecuteUbergraph_SlasherAnimSlaveMale(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
