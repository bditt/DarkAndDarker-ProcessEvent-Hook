#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_PedestalFloorPortal

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK
{

// ScriptStruct ABP_PedestalFloorPortal.ABP_PedestalFloorPortal_C.AnimBlueprintGeneratedConstantData
// 0x012F (0x0130 - 0x0001)
struct ABP_PedestalFloorPortal::FAnimBlueprintGeneratedConstantData final : public FAnimBlueprintConstantData
{
public:
	uint8                                         Pad_1BDC[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   __NameProperty_78;                                 // 0x0004(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_79;                                 // 0x000C(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         __IntProperty_80;                                  // 0x0014(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __BoolProperty_81;                                 // 0x0018(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1BDD[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   __NameProperty_82;                                 // 0x001C(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         __IntProperty_83;                                  // 0x0024(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         __FloatProperty_84;                                // 0x0028(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInputScaleBiasClampConstants          __StructProperty_85;                               // 0x002C(0x002C)(BlueprintVisible, NoDestructor)
	float                                         __FloatProperty_86;                                // 0x0058(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __BoolProperty_87;                                 // 0x005C(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAnimSyncMethod                               __EnumProperty_88;                                 // 0x005D(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAnimGroupRole                                __ByteProperty_89;                                 // 0x005E(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1BDE[0x1];                                     // 0x005F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   __NameProperty_90;                                 // 0x0060(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_91;                                 // 0x0068(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         __IntProperty_92;                                  // 0x0070(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1BDF[0x4];                                     // 0x0074(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimNodeFunctionRef                   __StructProperty_93;                               // 0x0078(0x0020)(BlueprintVisible, NoDestructor)
	struct FAnimSubsystem_PropertyAccess          AnimBlueprintExtension_PropertyAccess;             // 0x0098(0x0080)()
	struct FAnimSubsystem_Base                    AnimBlueprintExtension_Base;                       // 0x0118(0x0018)()
};
static_assert(alignof(ABP_PedestalFloorPortal::FAnimBlueprintGeneratedConstantData) == 0x000008, "Wrong alignment on ABP_PedestalFloorPortal::FAnimBlueprintGeneratedConstantData");
static_assert(sizeof(ABP_PedestalFloorPortal::FAnimBlueprintGeneratedConstantData) == 0x000130, "Wrong size on ABP_PedestalFloorPortal::FAnimBlueprintGeneratedConstantData");
static_assert(offsetof(ABP_PedestalFloorPortal::FAnimBlueprintGeneratedConstantData, __NameProperty_78) == 0x000004, "Member 'ABP_PedestalFloorPortal::FAnimBlueprintGeneratedConstantData::__NameProperty_78' has a wrong offset!");
static_assert(offsetof(ABP_PedestalFloorPortal::FAnimBlueprintGeneratedConstantData, __NameProperty_79) == 0x00000C, "Member 'ABP_PedestalFloorPortal::FAnimBlueprintGeneratedConstantData::__NameProperty_79' has a wrong offset!");
static_assert(offsetof(ABP_PedestalFloorPortal::FAnimBlueprintGeneratedConstantData, __IntProperty_80) == 0x000014, "Member 'ABP_PedestalFloorPortal::FAnimBlueprintGeneratedConstantData::__IntProperty_80' has a wrong offset!");
static_assert(offsetof(ABP_PedestalFloorPortal::FAnimBlueprintGeneratedConstantData, __BoolProperty_81) == 0x000018, "Member 'ABP_PedestalFloorPortal::FAnimBlueprintGeneratedConstantData::__BoolProperty_81' has a wrong offset!");
static_assert(offsetof(ABP_PedestalFloorPortal::FAnimBlueprintGeneratedConstantData, __NameProperty_82) == 0x00001C, "Member 'ABP_PedestalFloorPortal::FAnimBlueprintGeneratedConstantData::__NameProperty_82' has a wrong offset!");
static_assert(offsetof(ABP_PedestalFloorPortal::FAnimBlueprintGeneratedConstantData, __IntProperty_83) == 0x000024, "Member 'ABP_PedestalFloorPortal::FAnimBlueprintGeneratedConstantData::__IntProperty_83' has a wrong offset!");
static_assert(offsetof(ABP_PedestalFloorPortal::FAnimBlueprintGeneratedConstantData, __FloatProperty_84) == 0x000028, "Member 'ABP_PedestalFloorPortal::FAnimBlueprintGeneratedConstantData::__FloatProperty_84' has a wrong offset!");
static_assert(offsetof(ABP_PedestalFloorPortal::FAnimBlueprintGeneratedConstantData, __StructProperty_85) == 0x00002C, "Member 'ABP_PedestalFloorPortal::FAnimBlueprintGeneratedConstantData::__StructProperty_85' has a wrong offset!");
static_assert(offsetof(ABP_PedestalFloorPortal::FAnimBlueprintGeneratedConstantData, __FloatProperty_86) == 0x000058, "Member 'ABP_PedestalFloorPortal::FAnimBlueprintGeneratedConstantData::__FloatProperty_86' has a wrong offset!");
static_assert(offsetof(ABP_PedestalFloorPortal::FAnimBlueprintGeneratedConstantData, __BoolProperty_87) == 0x00005C, "Member 'ABP_PedestalFloorPortal::FAnimBlueprintGeneratedConstantData::__BoolProperty_87' has a wrong offset!");
static_assert(offsetof(ABP_PedestalFloorPortal::FAnimBlueprintGeneratedConstantData, __EnumProperty_88) == 0x00005D, "Member 'ABP_PedestalFloorPortal::FAnimBlueprintGeneratedConstantData::__EnumProperty_88' has a wrong offset!");
static_assert(offsetof(ABP_PedestalFloorPortal::FAnimBlueprintGeneratedConstantData, __ByteProperty_89) == 0x00005E, "Member 'ABP_PedestalFloorPortal::FAnimBlueprintGeneratedConstantData::__ByteProperty_89' has a wrong offset!");
static_assert(offsetof(ABP_PedestalFloorPortal::FAnimBlueprintGeneratedConstantData, __NameProperty_90) == 0x000060, "Member 'ABP_PedestalFloorPortal::FAnimBlueprintGeneratedConstantData::__NameProperty_90' has a wrong offset!");
static_assert(offsetof(ABP_PedestalFloorPortal::FAnimBlueprintGeneratedConstantData, __NameProperty_91) == 0x000068, "Member 'ABP_PedestalFloorPortal::FAnimBlueprintGeneratedConstantData::__NameProperty_91' has a wrong offset!");
static_assert(offsetof(ABP_PedestalFloorPortal::FAnimBlueprintGeneratedConstantData, __IntProperty_92) == 0x000070, "Member 'ABP_PedestalFloorPortal::FAnimBlueprintGeneratedConstantData::__IntProperty_92' has a wrong offset!");
static_assert(offsetof(ABP_PedestalFloorPortal::FAnimBlueprintGeneratedConstantData, __StructProperty_93) == 0x000078, "Member 'ABP_PedestalFloorPortal::FAnimBlueprintGeneratedConstantData::__StructProperty_93' has a wrong offset!");
static_assert(offsetof(ABP_PedestalFloorPortal::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_PropertyAccess) == 0x000098, "Member 'ABP_PedestalFloorPortal::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(ABP_PedestalFloorPortal::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_Base) == 0x000118, "Member 'ABP_PedestalFloorPortal::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_Base' has a wrong offset!");

}

