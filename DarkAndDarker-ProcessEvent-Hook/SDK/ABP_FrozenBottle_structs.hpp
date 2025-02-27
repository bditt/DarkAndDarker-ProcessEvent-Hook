#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_FrozenBottle

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK
{

// ScriptStruct ABP_FrozenBottle.ABP_FrozenBottle_C.AnimBlueprintGeneratedConstantData
// 0x011F (0x0120 - 0x0001)
struct ABP_FrozenBottle::FAnimBlueprintGeneratedConstantData final : public FAnimBlueprintConstantData
{
public:
	uint8                                         Pad_5C5F[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   __NameProperty_57;                                 // 0x0004(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         __FloatProperty_58;                                // 0x000C(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_59;                                 // 0x0010(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         __IntProperty_60;                                  // 0x0018(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         __FloatProperty_61;                                // 0x001C(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInputScaleBiasClampConstants          __StructProperty_62;                               // 0x0020(0x002C)(BlueprintVisible, NoDestructor)
	float                                         __FloatProperty_63;                                // 0x004C(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __BoolProperty_64;                                 // 0x0050(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAnimSyncMethod                               __EnumProperty_65;                                 // 0x0051(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAnimGroupRole                                __ByteProperty_66;                                 // 0x0052(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5C60[0x1];                                     // 0x0053(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   __NameProperty_67;                                 // 0x0054(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_68;                                 // 0x005C(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         __IntProperty_69;                                  // 0x0064(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAnimNodeFunctionRef                   __StructProperty_70;                               // 0x0068(0x0020)(BlueprintVisible, NoDestructor)
	struct FAnimSubsystem_PropertyAccess          AnimBlueprintExtension_PropertyAccess;             // 0x0088(0x0080)()
	struct FAnimSubsystem_Base                    AnimBlueprintExtension_Base;                       // 0x0108(0x0018)()
};
static_assert(alignof(ABP_FrozenBottle::FAnimBlueprintGeneratedConstantData) == 0x000008, "Wrong alignment on ABP_FrozenBottle::FAnimBlueprintGeneratedConstantData");
static_assert(sizeof(ABP_FrozenBottle::FAnimBlueprintGeneratedConstantData) == 0x000120, "Wrong size on ABP_FrozenBottle::FAnimBlueprintGeneratedConstantData");
static_assert(offsetof(ABP_FrozenBottle::FAnimBlueprintGeneratedConstantData, __NameProperty_57) == 0x000004, "Member 'ABP_FrozenBottle::FAnimBlueprintGeneratedConstantData::__NameProperty_57' has a wrong offset!");
static_assert(offsetof(ABP_FrozenBottle::FAnimBlueprintGeneratedConstantData, __FloatProperty_58) == 0x00000C, "Member 'ABP_FrozenBottle::FAnimBlueprintGeneratedConstantData::__FloatProperty_58' has a wrong offset!");
static_assert(offsetof(ABP_FrozenBottle::FAnimBlueprintGeneratedConstantData, __NameProperty_59) == 0x000010, "Member 'ABP_FrozenBottle::FAnimBlueprintGeneratedConstantData::__NameProperty_59' has a wrong offset!");
static_assert(offsetof(ABP_FrozenBottle::FAnimBlueprintGeneratedConstantData, __IntProperty_60) == 0x000018, "Member 'ABP_FrozenBottle::FAnimBlueprintGeneratedConstantData::__IntProperty_60' has a wrong offset!");
static_assert(offsetof(ABP_FrozenBottle::FAnimBlueprintGeneratedConstantData, __FloatProperty_61) == 0x00001C, "Member 'ABP_FrozenBottle::FAnimBlueprintGeneratedConstantData::__FloatProperty_61' has a wrong offset!");
static_assert(offsetof(ABP_FrozenBottle::FAnimBlueprintGeneratedConstantData, __StructProperty_62) == 0x000020, "Member 'ABP_FrozenBottle::FAnimBlueprintGeneratedConstantData::__StructProperty_62' has a wrong offset!");
static_assert(offsetof(ABP_FrozenBottle::FAnimBlueprintGeneratedConstantData, __FloatProperty_63) == 0x00004C, "Member 'ABP_FrozenBottle::FAnimBlueprintGeneratedConstantData::__FloatProperty_63' has a wrong offset!");
static_assert(offsetof(ABP_FrozenBottle::FAnimBlueprintGeneratedConstantData, __BoolProperty_64) == 0x000050, "Member 'ABP_FrozenBottle::FAnimBlueprintGeneratedConstantData::__BoolProperty_64' has a wrong offset!");
static_assert(offsetof(ABP_FrozenBottle::FAnimBlueprintGeneratedConstantData, __EnumProperty_65) == 0x000051, "Member 'ABP_FrozenBottle::FAnimBlueprintGeneratedConstantData::__EnumProperty_65' has a wrong offset!");
static_assert(offsetof(ABP_FrozenBottle::FAnimBlueprintGeneratedConstantData, __ByteProperty_66) == 0x000052, "Member 'ABP_FrozenBottle::FAnimBlueprintGeneratedConstantData::__ByteProperty_66' has a wrong offset!");
static_assert(offsetof(ABP_FrozenBottle::FAnimBlueprintGeneratedConstantData, __NameProperty_67) == 0x000054, "Member 'ABP_FrozenBottle::FAnimBlueprintGeneratedConstantData::__NameProperty_67' has a wrong offset!");
static_assert(offsetof(ABP_FrozenBottle::FAnimBlueprintGeneratedConstantData, __NameProperty_68) == 0x00005C, "Member 'ABP_FrozenBottle::FAnimBlueprintGeneratedConstantData::__NameProperty_68' has a wrong offset!");
static_assert(offsetof(ABP_FrozenBottle::FAnimBlueprintGeneratedConstantData, __IntProperty_69) == 0x000064, "Member 'ABP_FrozenBottle::FAnimBlueprintGeneratedConstantData::__IntProperty_69' has a wrong offset!");
static_assert(offsetof(ABP_FrozenBottle::FAnimBlueprintGeneratedConstantData, __StructProperty_70) == 0x000068, "Member 'ABP_FrozenBottle::FAnimBlueprintGeneratedConstantData::__StructProperty_70' has a wrong offset!");
static_assert(offsetof(ABP_FrozenBottle::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_PropertyAccess) == 0x000088, "Member 'ABP_FrozenBottle::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(ABP_FrozenBottle::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_Base) == 0x000108, "Member 'ABP_FrozenBottle::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_Base' has a wrong offset!");

}

