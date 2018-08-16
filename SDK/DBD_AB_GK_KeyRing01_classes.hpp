#pragma once

// DeadByDaylight (2.0.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DBD_AB_GK_KeyRing01_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass AB_GK_KeyRing01.AB_GK_KeyRing01_C
// 0x0468 (0x08E0 - 0x0478)
class UAB_GK_KeyRing01_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0478(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_A3E903624EA3BE2F7FF91FACC6092CFC;      // 0x0480(0x0048)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_43B8EB9843B71400F84A75BE5EA61877;// 0x04C8(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_ED0E139342DC9C2F89E0538EBAB5296A;// 0x0510(0x00D8)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_A906116C46A4E0BDC033E7827C686E21;// 0x05E8(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_EFD0E6964908509A1D69E5A7C7221A04;// 0x0630(0x0048)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_0518EB1A44B99CC3C9701FB9A5E554CF;// 0x0678(0x0268)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass AB_GK_KeyRing01.AB_GK_KeyRing01_C");
		return ptr;
	}


	void ExecuteUbergraph_AB_GK_KeyRing01(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
