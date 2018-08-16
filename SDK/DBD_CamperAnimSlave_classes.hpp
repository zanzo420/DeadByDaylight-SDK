#pragma once

// DeadByDaylight (2.0.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DBD_CamperAnimSlave_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass CamperAnimSlave.CamperAnimSlave_C
// 0x00E0 (0x0560 - 0x0480)
class UCamperAnimSlave_C : public USlaveAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0480(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_055C51684CFA213F32DA5CB5EE2E366A;      // 0x0488(0x0048)
	struct FAnimNode_CopyPoseFromMesh                  AnimGraphNode_CopyPoseFromMesh_D0677EBB45427B5EC9169893A25E29CF;// 0x04D0(0x0090)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass CamperAnimSlave.CamperAnimSlave_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_CamperAnimSlave_AnimGraphNode_CopyPoseFromMesh_D0677EBB45427B5EC9169893A25E29CF();
	void ExecuteUbergraph_CamperAnimSlave(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
