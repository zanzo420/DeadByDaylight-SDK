#pragma once

// DeadByDaylight (2.0.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DBD_Basic.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct BPS_FoliageInstanceInfo.BPS_FoliageInstanceInfo
// 0x0010
struct FBPS_FoliageInstanceInfo
{
	class UStaticMesh*                                 Mesh_7_3CE63B1C45B950595F825C8FBA38C5F6;                  // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Probability_11_05EDB07F4490CE9021BE18B13D3DE708;          // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CullDistance_14_D2FF7094477E4D2211F84DBF5E3CCF8F;         // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
