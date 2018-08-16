#pragma once

// DeadByDaylight (2.0.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DBD_SlasherAnimSlaveFemale_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass SlasherAnimSlaveFemale.SlasherAnimSlaveFemale_C
// 0x00E0 (0x0560 - 0x0480)
class USlasherAnimSlaveFemale_C : public USlaveAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0480(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_99E18B1A46A2BC6BBC9CDAA021CDE387;      // 0x0488(0x0048)
	struct FAnimNode_CopyPoseFromMesh                  AnimGraphNode_CopyPoseFromMesh_30155F1641177EFE332135805253A82B;// 0x04D0(0x0090)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass SlasherAnimSlaveFemale.SlasherAnimSlaveFemale_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_SlasherAnimSlaveFemale_AnimGraphNode_CopyPoseFromMesh_30155F1641177EFE332135805253A82B();
	void ExecuteUbergraph_SlasherAnimSlaveFemale(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
