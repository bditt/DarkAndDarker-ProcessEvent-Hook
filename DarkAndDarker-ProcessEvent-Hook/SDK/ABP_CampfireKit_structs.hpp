#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_CampfireKit

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"


namespace SDK
{

// ScriptStruct ABP_CampfireKit.ABP_CampfireKit_C.AnimBlueprintGeneratedConstantData
// 0x0147 (0x0148 - 0x0001)
struct ABP_CampfireKit::FAnimBlueprintGeneratedConstantData final : public FAnimBlueprintConstantData
{
public:
	uint8                                         Pad_3E9D[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   __NameProperty_55;                                 // 0x0004(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __BoolProperty_56;                                 // 0x000C(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E9E[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   __NameProperty_57;                                 // 0x0010(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         __IntProperty_58;                                  // 0x0018(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         __FloatProperty_59;                                // 0x001C(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInputScaleBiasClampConstants          __StructProperty_60;                               // 0x0020(0x002C)(BlueprintVisible, NoDestructor)
	float                                         __FloatProperty_61;                                // 0x004C(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAnimSyncMethod                               __EnumProperty_62;                                 // 0x0050(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAnimGroupRole                                __ByteProperty_63;                                 // 0x0051(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E9F[0x2];                                     // 0x0052(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   __NameProperty_64;                                 // 0x0054(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_65;                                 // 0x005C(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         __IntProperty_66;                                  // 0x0064(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBlendProfile*                          __BlendProfile_67;                                 // 0x0068(0x0008)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UCurveFloat*                            __CurveFloat_68;                                   // 0x0070(0x0008)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          __BoolProperty_69;                                 // 0x0078(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAlphaBlendOption                             __EnumProperty_70;                                 // 0x0079(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EBlendListTransitionType                      __EnumProperty_71;                                 // 0x007A(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3EA0[0x5];                                     // 0x007B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<float>                                 __ArrayProperty_72;                                // 0x0080(0x0010)(BlueprintVisible, EditFixedSize)
	struct FAnimNodeFunctionRef                   __StructProperty_73;                               // 0x0090(0x0020)(BlueprintVisible, NoDestructor)
	struct FAnimSubsystem_PropertyAccess          AnimBlueprintExtension_PropertyAccess;             // 0x00B0(0x0080)()
	struct FAnimSubsystem_Base                    AnimBlueprintExtension_Base;                       // 0x0130(0x0018)()
};
static_assert(alignof(ABP_CampfireKit::FAnimBlueprintGeneratedConstantData) == 0x000008, "Wrong alignment on ABP_CampfireKit::FAnimBlueprintGeneratedConstantData");
static_assert(sizeof(ABP_CampfireKit::FAnimBlueprintGeneratedConstantData) == 0x000148, "Wrong size on ABP_CampfireKit::FAnimBlueprintGeneratedConstantData");
static_assert(offsetof(ABP_CampfireKit::FAnimBlueprintGeneratedConstantData, __NameProperty_55) == 0x000004, "Member 'ABP_CampfireKit::FAnimBlueprintGeneratedConstantData::__NameProperty_55' has a wrong offset!");
static_assert(offsetof(ABP_CampfireKit::FAnimBlueprintGeneratedConstantData, __BoolProperty_56) == 0x00000C, "Member 'ABP_CampfireKit::FAnimBlueprintGeneratedConstantData::__BoolProperty_56' has a wrong offset!");
static_assert(offsetof(ABP_CampfireKit::FAnimBlueprintGeneratedConstantData, __NameProperty_57) == 0x000010, "Member 'ABP_CampfireKit::FAnimBlueprintGeneratedConstantData::__NameProperty_57' has a wrong offset!");
static_assert(offsetof(ABP_CampfireKit::FAnimBlueprintGeneratedConstantData, __IntProperty_58) == 0x000018, "Member 'ABP_CampfireKit::FAnimBlueprintGeneratedConstantData::__IntProperty_58' has a wrong offset!");
static_assert(offsetof(ABP_CampfireKit::FAnimBlueprintGeneratedConstantData, __FloatProperty_59) == 0x00001C, "Member 'ABP_CampfireKit::FAnimBlueprintGeneratedConstantData::__FloatProperty_59' has a wrong offset!");
static_assert(offsetof(ABP_CampfireKit::FAnimBlueprintGeneratedConstantData, __StructProperty_60) == 0x000020, "Member 'ABP_CampfireKit::FAnimBlueprintGeneratedConstantData::__StructProperty_60' has a wrong offset!");
static_assert(offsetof(ABP_CampfireKit::FAnimBlueprintGeneratedConstantData, __FloatProperty_61) == 0x00004C, "Member 'ABP_CampfireKit::FAnimBlueprintGeneratedConstantData::__FloatProperty_61' has a wrong offset!");
static_assert(offsetof(ABP_CampfireKit::FAnimBlueprintGeneratedConstantData, __EnumProperty_62) == 0x000050, "Member 'ABP_CampfireKit::FAnimBlueprintGeneratedConstantData::__EnumProperty_62' has a wrong offset!");
static_assert(offsetof(ABP_CampfireKit::FAnimBlueprintGeneratedConstantData, __ByteProperty_63) == 0x000051, "Member 'ABP_CampfireKit::FAnimBlueprintGeneratedConstantData::__ByteProperty_63' has a wrong offset!");
static_assert(offsetof(ABP_CampfireKit::FAnimBlueprintGeneratedConstantData, __NameProperty_64) == 0x000054, "Member 'ABP_CampfireKit::FAnimBlueprintGeneratedConstantData::__NameProperty_64' has a wrong offset!");
static_assert(offsetof(ABP_CampfireKit::FAnimBlueprintGeneratedConstantData, __NameProperty_65) == 0x00005C, "Member 'ABP_CampfireKit::FAnimBlueprintGeneratedConstantData::__NameProperty_65' has a wrong offset!");
static_assert(offsetof(ABP_CampfireKit::FAnimBlueprintGeneratedConstantData, __IntProperty_66) == 0x000064, "Member 'ABP_CampfireKit::FAnimBlueprintGeneratedConstantData::__IntProperty_66' has a wrong offset!");
static_assert(offsetof(ABP_CampfireKit::FAnimBlueprintGeneratedConstantData, __BlendProfile_67) == 0x000068, "Member 'ABP_CampfireKit::FAnimBlueprintGeneratedConstantData::__BlendProfile_67' has a wrong offset!");
static_assert(offsetof(ABP_CampfireKit::FAnimBlueprintGeneratedConstantData, __CurveFloat_68) == 0x000070, "Member 'ABP_CampfireKit::FAnimBlueprintGeneratedConstantData::__CurveFloat_68' has a wrong offset!");
static_assert(offsetof(ABP_CampfireKit::FAnimBlueprintGeneratedConstantData, __BoolProperty_69) == 0x000078, "Member 'ABP_CampfireKit::FAnimBlueprintGeneratedConstantData::__BoolProperty_69' has a wrong offset!");
static_assert(offsetof(ABP_CampfireKit::FAnimBlueprintGeneratedConstantData, __EnumProperty_70) == 0x000079, "Member 'ABP_CampfireKit::FAnimBlueprintGeneratedConstantData::__EnumProperty_70' has a wrong offset!");
static_assert(offsetof(ABP_CampfireKit::FAnimBlueprintGeneratedConstantData, __EnumProperty_71) == 0x00007A, "Member 'ABP_CampfireKit::FAnimBlueprintGeneratedConstantData::__EnumProperty_71' has a wrong offset!");
static_assert(offsetof(ABP_CampfireKit::FAnimBlueprintGeneratedConstantData, __ArrayProperty_72) == 0x000080, "Member 'ABP_CampfireKit::FAnimBlueprintGeneratedConstantData::__ArrayProperty_72' has a wrong offset!");
static_assert(offsetof(ABP_CampfireKit::FAnimBlueprintGeneratedConstantData, __StructProperty_73) == 0x000090, "Member 'ABP_CampfireKit::FAnimBlueprintGeneratedConstantData::__StructProperty_73' has a wrong offset!");
static_assert(offsetof(ABP_CampfireKit::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_PropertyAccess) == 0x0000B0, "Member 'ABP_CampfireKit::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(ABP_CampfireKit::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_Base) == 0x000130, "Member 'ABP_CampfireKit::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_Base' has a wrong offset!");

// ScriptStruct ABP_CampfireKit.ABP_CampfireKit_C.AnimBlueprintGeneratedMutableData
// 0x0001 (0x0002 - 0x0001)
struct ABP_CampfireKit::FAnimBlueprintGeneratedMutableData final : public FAnimBlueprintMutableData
{
public:
	bool                                          __BoolProperty;                                    // 0x0001(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ABP_CampfireKit::FAnimBlueprintGeneratedMutableData) == 0x000001, "Wrong alignment on ABP_CampfireKit::FAnimBlueprintGeneratedMutableData");
static_assert(sizeof(ABP_CampfireKit::FAnimBlueprintGeneratedMutableData) == 0x000002, "Wrong size on ABP_CampfireKit::FAnimBlueprintGeneratedMutableData");
static_assert(offsetof(ABP_CampfireKit::FAnimBlueprintGeneratedMutableData, __BoolProperty) == 0x000001, "Member 'ABP_CampfireKit::FAnimBlueprintGeneratedMutableData::__BoolProperty' has a wrong offset!");

}

